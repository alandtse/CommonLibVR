#include "catch2/catch_all.hpp"

#include "RE/B/BSInputEventQueue.h"
#include "REL/REL.h"
#include "SKSE/SKSE.h"

#include <array>
#include <cstdint>
#include <cstring>
#include <tuple>

#if defined(SKYRIM_CROSS_VR)
namespace
{
	void ReleaseEmptyString(const char*& a_string)
	{
		CHECK(a_string == nullptr);
		a_string = nullptr;
	}

	struct QueueFixture
	{
		QueueFixture(REL::Version a_version, REL::Module::Runtime a_runtime)
		{
			const auto base = reinterpret_cast<std::uintptr_t>(&ReleaseEmptyString) - 0x1000;
			REQUIRE(REL::Module::mock(a_version, a_runtime, L"InputQueueTest.exe", base));
			// Keep the stub table separate from a running game's shared mapping.
			REQUIRE(REL::IDDB::inject(L"Data\\SKSE\\Plugins\\input-queue.csv", REL::IDDB::Format::VR, REL::Version{}));
		}

		~QueueFixture()
		{
			REL::IDDB::reset();
			REL::Module::reset();
		}

		alignas(8) std::array<std::byte, 0x580> storage{};
	};
}

TEST_CASE("BSInputEventQueue/ButtonCache", "[unit][input-queue]")
{
	using Runtime = REL::Module::Runtime;
	const auto [version, runtime, first, stride, head] = GENERATE(
		std::tuple{ SKSE::RUNTIME_SSE_1_5_97, Runtime::SE, 0x20, 0x30, 0x380 },
		std::tuple{ SKSE::RUNTIME_SSE_1_6_1170, Runtime::AE, 0x20, 0x30, 0x380 },
		std::tuple{ SKSE::RUNTIME_SSE_1_6_1179, Runtime::AE, 0x20, 0x30, 0x380 },
		std::tuple{ SKSE::RUNTIME_SSE_1_7_99, Runtime::AE, 0x28, 0x30, 0x558 },
		std::tuple{ REL::Version{ 1, 7, 104, 0 }, Runtime::AE, 0x28, 0x30, 0x558 },
		std::tuple{ SKSE::RUNTIME_VR_1_4_15, Runtime::VR, 0x28, 0x38, 0x570 });
	CAPTURE(version.string());
	QueueFixture fixture(version, runtime);
	auto*        queue = reinterpret_cast<RE::BSInputEventQueue*>(fixture.storage.data());
	auto**       expectedHead = reinterpret_cast<RE::InputEvent**>(fixture.storage.data() + head);
	auto**       expectedTail = expectedHead + 1;
	REQUIRE(&queue->GetQueueHead() == expectedHead);
	REQUIRE(&queue->GetQueueTail() == expectedTail);

	RE::InputEvent* previous = nullptr;
	for (int i = 0; i < 10; ++i) {
		auto*      expected = reinterpret_cast<RE::ButtonEvent*>(fixture.storage.data() + first + i * stride);
		const auto duration = static_cast<float>(i) / 10.0F;
		queue->AddButtonEvent(RE::INPUT_DEVICE::kKeyboard, i + 17, 1.0F, duration);
		REQUIRE(queue->buttonEventCount == i + 1);
		REQUIRE(*expectedTail == expected);
		REQUIRE(*expectedHead == reinterpret_cast<RE::InputEvent*>(fixture.storage.data() + first));
		if (previous) {
			CHECK(previous->next == expected);
		}
		CHECK(expected->next == nullptr);
		CHECK(expected->device == RE::INPUT_DEVICE::kKeyboard);
		CHECK(expected->GetIDCode() == i + 17);
		CHECK(expected->Value() == 1.0F);
		CHECK(expected->HeldDuration() == duration);
		std::uint32_t id;
		float         value;
		float         held;
		const auto*   bytes = fixture.storage.data() + first + i * stride;
		std::memcpy(&id, bytes + 0x20, sizeof(id));
		std::memcpy(&value, bytes + stride - 8, sizeof(value));
		std::memcpy(&held, bytes + stride - 4, sizeof(held));
		CHECK(id == i + 17);
		CHECK(value == 1.0F);
		CHECK(held == duration);
		previous = expected;
	}

	const auto full = fixture.storage;
	queue->AddButtonEvent(RE::INPUT_DEVICE::kKeyboard, 99, 0.0F, 1.0F);
	CHECK(fixture.storage == full);
	queue->ClearInputQueue();
	CHECK(queue->buttonEventCount == 0);
	CHECK(*expectedHead == nullptr);
	CHECK(*expectedTail == nullptr);
	queue->AddButtonEvent(RE::INPUT_DEVICE::kKeyboard, 7, std::uint16_t{ 17 }, 0.0F, 0.5F);
	REQUIRE(queue->buttonEventCount == 1);
	REQUIRE(*expectedHead == reinterpret_cast<RE::InputEvent*>(fixture.storage.data() + first));
	CHECK(*expectedTail == *expectedHead);
	CHECK(static_cast<RE::ButtonEvent*>(*expectedHead)->IsUp());
	CHECK(static_cast<RE::ButtonEvent*>(*expectedHead)->GetIDCode() == 17);
	CHECK((*expectedHead)->next == nullptr);
	if (runtime == Runtime::VR) {
		CHECK(static_cast<RE::ButtonEvent*>(*expectedHead)->AsVRWandEvent()->unkVR28 == 7);
	}
}
#endif
