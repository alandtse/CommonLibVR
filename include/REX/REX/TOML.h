#pragma once

#include "REX/REX/Setting.h"

#ifdef REX_OPTION_TOML
namespace REX::TOML
{
	namespace Impl
	{
		template <class T>
		void SettingLoad(void* a_file, std::string_view a_path, T& a_value, T& a_valueDefault);

		template <class T>
		void SettingSave(void* a_file, std::string_view a_path, T& a_value);
	}

	class SettingStore :
		public TSettingStore<SettingStore>
	{
	public:
		virtual void Load() override;
		virtual void Save() override;
	};

	template <class T, class Store = SettingStore>
	class Setting :
		public TSetting<T, Store>
	{
	public:
		Setting(std::string_view a_path, T a_default) :
			TSetting<T, Store>(a_default),
			m_path(a_path)
		{}

	public:
		virtual void Load(void* a_data, bool a_isBase) override
		{
			if (a_isBase) {
				Impl::SettingLoad(a_data, m_path, this->m_valueDefault, this->m_valueDefault);
				this->SetValue(this->m_valueDefault);
			} else {
				Impl::SettingLoad(a_data, m_path, this->m_value, this->m_valueDefault);
			}
		}

		virtual void Save(void* a_data) override
		{
			Impl::SettingSave(a_data, m_path, this->m_value);
		}

	private:
		std::string_view m_path;
	};

	template <class Store = SettingStore>
	using Bool = Setting<bool, Store>;

	template <class Store = SettingStore>
	using F32 = Setting<float, Store>;

	template <class Store = SettingStore>
	using F64 = Setting<double, Store>;

	template <class Store = SettingStore>
	using I8 = Setting<std::int8_t, Store>;

	template <class Store = SettingStore>
	using I16 = Setting<std::int16_t, Store>;

	template <class Store = SettingStore>
	using I32 = Setting<std::int32_t, Store>;

	template <class Store = SettingStore>
	using U8 = Setting<std::uint8_t, Store>;

	template <class Store = SettingStore>
	using U16 = Setting<std::uint16_t, Store>;

	template <class Store = SettingStore>
	using U32 = Setting<std::uint32_t, Store>;

	template <class Store = SettingStore>
	using Str = Setting<std::string, Store>;
}
#endif
