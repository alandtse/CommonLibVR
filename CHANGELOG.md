## 1.0.0 (2026-09-09)

### ⚠ BREAKING CHANGES

* **state:** direct state->frameCount / ->insideFrame / ->useEarlyZ access no longer compiles on ENABLE_SKYRIM_AE builds; use State::GetFrameCount() / GetInsideFrame() / GetUseEarlyZ() instead.

Co-authored-by: Claude Sonnet 5 <noreply@anthropic.com>
* **vr:** safe VR/AE runtime-data accessors (#253)
* **license:** relicense to GPL-3.0-or-later (#238)
* Fixed incorrect macro usage in State.h that caused VR to use wrong offset (0x58 instead of 0x60).

The commit 1fc569596 incorrectly used RUNTIME_DATA_ACCESSOR_VERSIONED instead of
RUNTIME_MEMBER_ACCESSOR_VERSIONED for State::GetRuntimeData(). This caused VR builds
to access data at the wrong memory offset, leading to crashes.

This is marked as breaking to signify the fork from upstream CommonLibSSE-NG with
critical VR fixes applied.

### Features

* `REX` ([cd17f79](https://github.com/AtomCrafty/CommonLibSSE/commit/cd17f79a030de4d35e0d890f2358cfcb79674d81))
* `REX` ([29b9ca1](https://github.com/AtomCrafty/CommonLibSSE/commit/29b9ca1ff4ef76e3ea5845da4fb80071be72f8b3))
* `SerializationInterface` ([fcbf923](https://github.com/AtomCrafty/CommonLibSSE/commit/fcbf923552073182340fcf12681b8b771bd05d61))
* `SerializationInterface` ([323dfa9](https://github.com/AtomCrafty/CommonLibSSE/commit/323dfa9ae968e857c2513a4c0cdfc86e5cad7ccd))
* actor funcs ([651afe9](https://github.com/AtomCrafty/CommonLibSSE/commit/651afe978f7fd4616b5d66eb57d2ba3ee01f9c87))
* **actor:** add PlayerCharacter::StartWaiting/Actor::StartSleeping ([#331](https://github.com/AtomCrafty/CommonLibSSE/issues/331)) ([8492509](https://github.com/AtomCrafty/CommonLibSSE/commit/84925090fc813f70686c27fae650933453af574e))
* Add `KEEP_FOR_RE` macro to CLIB-VR ([#26](https://github.com/AtomCrafty/CommonLibSSE/issues/26)) ([06182ef](https://github.com/AtomCrafty/CommonLibSSE/commit/06182ef6913131eb477a6dbf92b4c97b7f446a4a))
* add 1.5.97 IDs if possible ([5655a1a](https://github.com/AtomCrafty/CommonLibSSE/commit/5655a1af859478470b24ad05a2ecd6c706525ba2))
* add actor func, misc cleanup ([5904b41](https://github.com/AtomCrafty/CommonLibSSE/commit/5904b4179c0dd28555b87e3a2bb689170fb249f8))
* add actor funcs ([03c49b5](https://github.com/AtomCrafty/CommonLibSSE/commit/03c49b5bfc031a137bc20d93fb6785ad0f8db1c0))
* add Actor::CalculateLOS ([#143](https://github.com/AtomCrafty/CommonLibSSE/issues/143)) ([04857f5](https://github.com/AtomCrafty/CommonLibSSE/commit/04857f53a5250d915ef9b8d9d20480be97e4c5eb))
* add adjustments from Clib-NG ([1239701](https://github.com/AtomCrafty/CommonLibSSE/commit/1239701a505f3da5604d1f013b66c9018917a061))
* add arrestTarget to AIProcess ([f080217](https://github.com/AtomCrafty/CommonLibSSE/commit/f080217bc29f98063f824261d78cae9a29d8ca78))
* add BGSConstructFormsInAllFilesMap::count ([b19c377](https://github.com/AtomCrafty/CommonLibSSE/commit/b19c37732f13951e1dc753262ff9c1966d3ba29a))
* add BSGraphics::State::SetCameraData function ([8c8780b](https://github.com/AtomCrafty/CommonLibSSE/commit/8c8780b6d78c06e882cb34060d88e197a7008fe1))
* add BSIStream with DecompressLipData ([#188](https://github.com/AtomCrafty/CommonLibSSE/issues/188)) ([9609035](https://github.com/AtomCrafty/CommonLibSSE/commit/96090356bf15751e819e5adcf78f3f8b4ed06cec))
* add BSOpenVR::GetCleanIVROverlay ([24bd3ac](https://github.com/AtomCrafty/CommonLibSSE/commit/24bd3ac4f53b16af9a0741cf5bdfe3089d5774d5))
* add BSOpenVR::GetRenderTargetSize ([8726ee9](https://github.com/AtomCrafty/CommonLibSSE/commit/8726ee9dea1bb57b1e22bfa7fd033467e2391825))
* add BSQueuedResourceCollectionBase header ([#271](https://github.com/AtomCrafty/CommonLibSSE/issues/271)) ([1efbde4](https://github.com/AtomCrafty/CommonLibSSE/commit/1efbde45fa8792d5b3fc6030d8b9ead096466446))
* add BSTask header ([#267](https://github.com/AtomCrafty/CommonLibSSE/issues/267)) ([597915f](https://github.com/AtomCrafty/CommonLibSSE/commit/597915f9061420b24810c7729786446b52805f35))
* add contexthook ([90a8f2f](https://github.com/AtomCrafty/CommonLibSSE/commit/90a8f2fe590025ccfeee5a7e1d33c352ea1764d8))
* add CreateDuplicateForm param ([3531be6](https://github.com/AtomCrafty/CommonLibSSE/commit/3531be6ab759812cb970d223e466817dc786157f))
* add defines to CMakeLists ([c679be1](https://github.com/AtomCrafty/CommonLibSSE/commit/c679be1b674f4c7d7b5dc172c2dcf5085d68b7b8))
* add formatters for NiColor and NiColorA ([2987d13](https://github.com/AtomCrafty/CommonLibSSE/commit/2987d13270710db75b0cb99c7f75fa228887a398))
* add GetBodyImpl() ([7880df5](https://github.com/AtomCrafty/CommonLibSSE/commit/7880df58607aa0327789c9b2df716ec32ed13be0))
* add GetSettingRef accessor ([b5b6ed3](https://github.com/AtomCrafty/CommonLibSSE/commit/b5b6ed35a9c04fade3ee391054eda64c048e57e0))
* add getters for BSShaderProperty ([cd3362a](https://github.com/AtomCrafty/CommonLibSSE/commit/cd3362a875628d808df242d447f0e22bdea56d45))
* add hkaSkeleton, hkaBone, and BSFlattenedBoneTree classes ([86d00ed](https://github.com/AtomCrafty/CommonLibSSE/commit/86d00ed7009176e536543aceb871b48305a150b6))
* add hkLocalFrame classes and hkaSkeleton destructor ([1b9e5ce](https://github.com/AtomCrafty/CommonLibSSE/commit/1b9e5ceff16c9866aaf72503ccbd24e544dfda26))
* add hkLocalFrame headers to Skyrim.h (woops) ([3e5675c](https://github.com/AtomCrafty/CommonLibSSE/commit/3e5675c5933c75116a6f4341cc0fe056d6409a06))
* add hkpProcessCollisionInput + hkpAgent3ProcessInput ([#165](https://github.com/AtomCrafty/CommonLibSSE/issues/165)) ([5da20d8](https://github.com/AtomCrafty/CommonLibSSE/commit/5da20d8e70d8222f299d802fffae02f772646a55))
* add initial skyrimvresl support ([ad83b61](https://github.com/AtomCrafty/CommonLibSSE/commit/ad83b610df60bae67e13a1d1cbeb26d7ed197b9b))
* add initial skyrimvresl support ([fe699b1](https://github.com/AtomCrafty/CommonLibSSE/commit/fe699b180597b36d9914c0e88ff664ac33679f60))
* add IOManager header ([#272](https://github.com/AtomCrafty/CommonLibSSE/issues/272)) ([8ebe211](https://github.com/AtomCrafty/CommonLibSSE/commit/8ebe2111c792ce8b457692b953e08b9a36caa757))
* add IOTask header ([#269](https://github.com/AtomCrafty/CommonLibSSE/issues/269)) ([b0f9a9a](https://github.com/AtomCrafty/CommonLibSSE/commit/b0f9a9aee5ce345ac6632be42999df69e359e7a7)), closes [#267](https://github.com/AtomCrafty/CommonLibSSE/issues/267) [#267](https://github.com/AtomCrafty/CommonLibSSE/issues/267)
* add land collision Cinfo types ([#288](https://github.com/AtomCrafty/CommonLibSSE/issues/288)) ([b75e579](https://github.com/AtomCrafty/CommonLibSSE/commit/b75e5795add8efc38c40545b0263df25db6a5a67))
* add LoadedAreaBound header ([#266](https://github.com/AtomCrafty/CommonLibSSE/issues/266)) ([a03053d](https://github.com/AtomCrafty/CommonLibSSE/commit/a03053d8584eefaba881e2ca69f2f5ddfa4b14e0)), closes [#264](https://github.com/AtomCrafty/CommonLibSSE/issues/264) [#264](https://github.com/AtomCrafty/CommonLibSSE/issues/264) [alandtse/skyrim_vr_address_library#156](https://github.com/alandtse/skyrim_vr_address_library/issues/156)
* add missing story manager events ([560429c](https://github.com/AtomCrafty/CommonLibSSE/commit/560429c23f0b6f3fa8287f34ab6b7285226d43c6))
* add more RE for shadow rendering ([fcbbd51](https://github.com/AtomCrafty/CommonLibSSE/commit/fcbbd515fef472447e6b77e06a53453529e1c322))
* add nipoint3 fmt ([4c552f8](https://github.com/AtomCrafty/CommonLibSSE/commit/4c552f8bd8015c651968283ee130e45b34854b07))
* add NiSourceTexture::resourceStream ([e34303c](https://github.com/AtomCrafty/CommonLibSSE/commit/e34303c7a88e2065d4da475f208c776e8be79500))
* add opt in to require minimal VR address lib version ([#48](https://github.com/AtomCrafty/CommonLibSSE/issues/48)) ([6b0750a](https://github.com/AtomCrafty/CommonLibSSE/commit/6b0750aa6c991b2f6b26b46033e0e51a655c824e))
* add opt in to require minimal VR address lib version ([#48](https://github.com/AtomCrafty/CommonLibSSE/issues/48)) ([#50](https://github.com/AtomCrafty/CommonLibSSE/issues/50)) ([735fa6d](https://github.com/AtomCrafty/CommonLibSSE/commit/735fa6dae8ec72966ee02673dd689c6516d49f71))
* add options to CMakeLists ([cf2128c](https://github.com/AtomCrafty/CommonLibSSE/commit/cf2128cff50a07e533d84cb267fb9a503fbd1863))
* add QueuedFile header ([#270](https://github.com/AtomCrafty/CommonLibSSE/issues/270)) ([4f454d8](https://github.com/AtomCrafty/CommonLibSSE/commit/4f454d88788fcb1d654b20a2b4013b49abdd3e51)), closes [#269](https://github.com/AtomCrafty/CommonLibSSE/issues/269) [#267](https://github.com/AtomCrafty/CommonLibSSE/issues/267)
* add RE for some shader properties, utility shader and shader emitters ([4a90d92](https://github.com/AtomCrafty/CommonLibSSE/commit/4a90d92702d8bdc455c2b16e447d7940ab9eb3ca))
* add re from enginefixes ng porting ([#142](https://github.com/AtomCrafty/CommonLibSSE/issues/142)) ([e4e8609](https://github.com/AtomCrafty/CommonLibSSE/commit/e4e8609af47c75045b7345434064edf42397975f))
* add runtime HUD_MESSAGE_TYPE getters ([e0c1da7](https://github.com/AtomCrafty/CommonLibSSE/commit/e0c1da776dc3d0be0d41dcf70f3d788315e61f69))
* add SelectedRefHandle address for 1130 ([97b7f3c](https://github.com/AtomCrafty/CommonLibSSE/commit/97b7f3cf35f0a3858148cc0f0094064000391ad3))
* add Sky::IsDaytime ([8e237b5](https://github.com/AtomCrafty/CommonLibSSE/commit/8e237b5dfe2aaaf780b97dd61d6ca1c624d9e7a8))
* add some vtables ([990aa2c](https://github.com/AtomCrafty/CommonLibSSE/commit/990aa2c903abb4f3b992012b9f4616fac3f06f3c))
* add SSE 1170 ([c5d4f17](https://github.com/AtomCrafty/CommonLibSSE/commit/c5d4f170b7d37658d6988f201aaabaa973695e4a))
* add std::format specializations ([46b48f9](https://github.com/AtomCrafty/CommonLibSSE/commit/46b48f9ca601dcfec2046ed89bb113963561340b))
* add support for cs imgui ([cac175f](https://github.com/AtomCrafty/CommonLibSSE/commit/cac175fef91df22ae68f185040f093dae601add2))
* add support for plugin install and package ([13bd549](https://github.com/AtomCrafty/CommonLibSSE/commit/13bd5496df5ef969606883c9e54b53e83f6f0041))
* add terrain RE ([b944c26](https://github.com/AtomCrafty/CommonLibSSE/commit/b944c268414dd714a03dc54ab4a9b43eaa442a2a))
* add total member for NiFile ([c96f770](https://github.com/AtomCrafty/CommonLibSSE/commit/c96f770fc920864696e7d1524ce5c43c3b829fd0))
* add total member for NiFile ([6599897](https://github.com/AtomCrafty/CommonLibSSE/commit/6599897791e500d3a27c3c98b3d0b1a39f8e2bdc))
* add Vector3 fmt ([771a38a](https://github.com/AtomCrafty/CommonLibSSE/commit/771a38ae5510ac9cabd2be1b2d613ad756bd7d94))
* add verifying safe_write and safe_fill ([922ea16](https://github.com/AtomCrafty/CommonLibSSE/commit/922ea16222102251a2ab2d9143344526012189fc))
* add VR Bow State RE ([#46](https://github.com/AtomCrafty/CommonLibSSE/issues/46)) ([8e2e2fd](https://github.com/AtomCrafty/CommonLibSSE/commit/8e2e2fd8371ada5066215ca80aa4d5c4da06fb9d))
* Add VR Bow State RE ([#47](https://github.com/AtomCrafty/CommonLibSSE/issues/47)) ([2afe3d5](https://github.com/AtomCrafty/CommonLibSSE/commit/2afe3d5c56b17cf4e06612a316a5548c367d2769))
* add vr HUD_MESSAGE_TYPE ([9558939](https://github.com/AtomCrafty/CommonLibSSE/commit/9558939c7e748be3505a7bdad6ed3163417753c9))
* add vr HUD_MESSAGE_TYPE ([e09c17c](https://github.com/AtomCrafty/CommonLibSSE/commit/e09c17c33f6739492d4f1fc82fcd61bb76c08f9a))
* Additions for PBR. ([0d00e82](https://github.com/AtomCrafty/CommonLibSSE/commit/0d00e8275247e13fedca98d4a717ad2c7ed6a36e))
* BehaviourGraph activeNodes data. ([629a21f](https://github.com/AtomCrafty/CommonLibSSE/commit/629a21fe019ca567dd2a2caf023bc6a5136d7994))
* better handling of toml paths ([abce9f6](https://github.com/AtomCrafty/CommonLibSSE/commit/abce9f6bbad0610d36d02a8366cebc7f26d9cb98))
* bhkRigidBodyT ([cd83eb5](https://github.com/AtomCrafty/CommonLibSSE/commit/cd83eb52bcd4d930434838fe9c414d31640e3fe3))
* BSComputeShader and some improvements for BSImagespaceSahder. ([8938850](https://github.com/AtomCrafty/CommonLibSSE/commit/8938850441f46d1a5db5e606e6d327ee8b3e0709))
* **BSEffectShaderProperty:** name emittanceColor and render passes ([#154](https://github.com/AtomCrafty/CommonLibSSE/issues/154)) ([adcd35c](https://github.com/AtomCrafty/CommonLibSSE/commit/adcd35cbd1bbf14a61a0767a5f72bd04d952662f))
* BSImagespaceShader RE. ([73f288f](https://github.com/AtomCrafty/CommonLibSSE/commit/73f288fc13737f4f224bbbcb4065e7e05e91ccf6))
* **BSShaderRenderTargets:** name VR slot 114 ([#150](https://github.com/AtomCrafty/CommonLibSSE/issues/150)) ([02565ab](https://github.com/AtomCrafty/CommonLibSSE/commit/02565ab9d01dd250745ab0894aedff6a288c2f2a))
* **build:** auto-fetch prebuilt CommonLib on clean release tags (cmake) ([#170](https://github.com/AtomCrafty/CommonLibSSE/issues/170)) ([47c49c2](https://github.com/AtomCrafty/CommonLibSSE/commit/47c49c20570017f51abd698fd6171b18fedfd3e1)), closes [#169](https://github.com/AtomCrafty/CommonLibSSE/issues/169)
* **build:** auto-fetch prebuilt CommonLib on clean release tags (xmake) ([#169](https://github.com/AtomCrafty/CommonLibSSE/issues/169)) ([e6dea13](https://github.com/AtomCrafty/CommonLibSSE/commit/e6dea1319a21f2d8f0a0e051076275bc7f93b4e0)), closes [#167](https://github.com/AtomCrafty/CommonLibSSE/issues/167)
* **build:** publish prebuilt static-library bundles for xmake consumers ([#167](https://github.com/AtomCrafty/CommonLibSSE/issues/167)) ([32e1826](https://github.com/AtomCrafty/CommonLibSSE/commit/32e182628ad14d00d1f5a64d6ab6c9ede8be2e97))
* change ShaderFlags to stl:enumeration ([2cce664](https://github.com/AtomCrafty/CommonLibSSE/commit/2cce664040e9338130ee4a51f87a2a1b6cba9f15))
* **cmake:** add Linux-host cross-compile support via clang-cl+xwin ([#302](https://github.com/AtomCrafty/CommonLibSSE/issues/302)) ([848b3f9](https://github.com/AtomCrafty/CommonLibSSE/commit/848b3f9daace475aa49f539dee0c91c8e313b359)), closes [#300](https://github.com/AtomCrafty/CommonLibSSE/issues/300) [#215](https://github.com/AtomCrafty/CommonLibSSE/issues/215) [#215](https://github.com/AtomCrafty/CommonLibSSE/issues/215)
* combat stuff ([9f67e4b](https://github.com/AtomCrafty/CommonLibSSE/commit/9f67e4b91d698e8591cb71dfd5fab8159e9c6b4d))
* convert stl::enumeration to REX::EnumSet ([7973641](https://github.com/AtomCrafty/CommonLibSSE/commit/797364141a3b2791392e6ce5399acb6039426438))
* **decal:** add BGSDecalManager::ApplyDecal binding ([#335](https://github.com/AtomCrafty/CommonLibSSE/issues/335)) ([6b1eac1](https://github.com/AtomCrafty/CommonLibSSE/commit/6b1eac17721e8ae13656cce25a598753487bd8a0))
* don't build by default when subproject ([d01ae9b](https://github.com/AtomCrafty/CommonLibSSE/commit/d01ae9bb8127f106d29214bb1b62b7bf3a6ca7c8))
* even more combat RE ([ed7e087](https://github.com/AtomCrafty/CommonLibSSE/commit/ed7e087aa4501481ba23e3ba0707a8dec68ac273))
* **explosion:** port ChainExplosion class ([#246](https://github.com/AtomCrafty/CommonLibSSE/issues/246)) ([a83c6e1](https://github.com/AtomCrafty/CommonLibSSE/commit/a83c6e181922b0c5a2b60408cdb999ed98feef77))
* **explosion:** port IExplosionFactory interface ([#247](https://github.com/AtomCrafty/CommonLibSSE/issues/247)) ([3f8cb49](https://github.com/AtomCrafty/CommonLibSSE/commit/3f8cb4975bd74a796677cafc8245b792eed5b3e0))
* expose VRcompiledFileCollection ([6089216](https://github.com/AtomCrafty/CommonLibSSE/commit/6089216a56af68f4527932ec96bf2f76ac864346))
* flag for address library v5 compatibility ([#310](https://github.com/AtomCrafty/CommonLibSSE/issues/310)) ([d8b0acd](https://github.com/AtomCrafty/CommonLibSSE/commit/d8b0acd80b5dea2ef1e0549f78a36bd57ad5144d))
* **havok:** add BGSAcousticSpace::Deactivate ([#239](https://github.com/AtomCrafty/CommonLibSSE/issues/239)) ([ed41157](https://github.com/AtomCrafty/CommonLibSSE/commit/ed41157c663e9850222dc8a3f74f33d82a188841))
* **havok:** add BGSAcousticSpaceListener ([#230](https://github.com/AtomCrafty/CommonLibSSE/issues/230)) ([3b4c3a4](https://github.com/AtomCrafty/CommonLibSSE/commit/3b4c3a4ab1a7d49cbfc33a34b20b47793129b28e))
* **havok:** add hkbVariableBindingSet header ([#286](https://github.com/AtomCrafty/CommonLibSSE/issues/286)) ([5ce6293](https://github.com/AtomCrafty/CommonLibSSE/commit/5ce629310b1a0898b33ba79ced28ae05e17cabd5))
* **havok:** add hkpWorld::RemoveEntity ([#231](https://github.com/AtomCrafty/CommonLibSSE/issues/231)) ([3f8e9d6](https://github.com/AtomCrafty/CommonLibSSE/commit/3f8e9d6943413654922d2bec801c0dce1b997534))
* **havok:** bind TryMoveTo, GetSupportMass ([#209](https://github.com/AtomCrafty/CommonLibSSE/issues/209)) ([99ae520](https://github.com/AtomCrafty/CommonLibSSE/commit/99ae520ef46102dfca34ab039797d33a7dd93119)), closes [alandtse/skyrim_vr_address_library#137](https://github.com/alandtse/skyrim_vr_address_library/issues/137)
* **havok:** expand havok RE coverage, fix 2 layout bugs ([#327](https://github.com/AtomCrafty/CommonLibSSE/issues/327)) ([231543d](https://github.com/AtomCrafty/CommonLibSSE/commit/231543d61bc511865f1954f3eb2768732452c1d6))
* improve settings ([ebfda8b](https://github.com/AtomCrafty/CommonLibSSE/commit/ebfda8b7d4e085dbeb6f028286fa3c217826e019))
* Improved NiPick a bit more, added helpful comments to some members ([bb18ccd](https://github.com/AtomCrafty/CommonLibSSE/commit/bb18ccdba4760b749a0bd7f6659e5495b6cfca38))
* inline all offsets and remove Offsets.h ([9f44259](https://github.com/AtomCrafty/CommonLibSSE/commit/9f44259eed6696b712a9290d9100572417c323af))
* **lightning:** name fields, fix VR layout bug ([#257](https://github.com/AtomCrafty/CommonLibSSE/issues/257)) ([bd4a0e2](https://github.com/AtomCrafty/CommonLibSSE/commit/bd4a0e20d61262d454a09f4f9724a5b4d02d6f97))
* make log default to true ([673d3da](https://github.com/AtomCrafty/CommonLibSSE/commit/673d3daee663eeae525834bb82cb5f6fde2143c2))
* **menu:** add MenuEventHandlerEx adapter ([#329](https://github.com/AtomCrafty/CommonLibSSE/issues/329)) ([140b776](https://github.com/AtomCrafty/CommonLibSSE/commit/140b776e4fc11095d6f172f594e899076b9c9886))
* **menuhandlers:** expose VR touchpad input ([#229](https://github.com/AtomCrafty/CommonLibSSE/issues/229)) ([ad998fb](https://github.com/AtomCrafty/CommonLibSSE/commit/ad998fbc415b42e67ffd3713716afda03d95cdec))
* merge po3 ([cf748d1](https://github.com/AtomCrafty/CommonLibSSE/commit/cf748d16f06c9442623f2e7f4fd4ff72d9c00f82))
* merge po3 ([d5f523c](https://github.com/AtomCrafty/CommonLibSSE/commit/d5f523cdf975064319f6c6bbdc34aada1007f5a0))
* merge po3 ([529d8f2](https://github.com/AtomCrafty/CommonLibSSE/commit/529d8f27a218bcd6f8f02acf9a26b847d545cf9b))
* merge po3 ([1160f62](https://github.com/AtomCrafty/CommonLibSSE/commit/1160f628e01c6db386071e8642c56add36fdd8c9))
* merge po3 ([a57a760](https://github.com/AtomCrafty/CommonLibSSE/commit/a57a760c4b4ad970c567261afd2c0753f67daeb9))
* merge po3 ([d3e2a39](https://github.com/AtomCrafty/CommonLibSSE/commit/d3e2a3931bd7119932b86e633b18d9b44561626b))
* MessageBoxMenu API + LoadGameMissingContentCallBack ([#160](https://github.com/AtomCrafty/CommonLibSSE/issues/160)) ([bb2c5c0](https://github.com/AtomCrafty/CommonLibSSE/commit/bb2c5c0072811f4dd40b8fb172f7fe3d892b2730))
* migrate to toml11, add toml saving ([04d5a27](https://github.com/AtomCrafty/CommonLibSSE/commit/04d5a27b9cd8784b0563e193010068ec1ca353df))
* misc ([a371f83](https://github.com/AtomCrafty/CommonLibSSE/commit/a371f83d02be628b96de22d2e792c8c86169088d))
* misc ([93d73f1](https://github.com/AtomCrafty/CommonLibSSE/commit/93d73f18d24105067c5f5fbdf5e206b6539a6928))
* misc RE ([80bea41](https://github.com/AtomCrafty/CommonLibSSE/commit/80bea4161ee58fe3b0738ecd9f217cd3ee6cae80))
* misc RE ([2fa9e3c](https://github.com/AtomCrafty/CommonLibSSE/commit/2fa9e3cbb2182712640a8f65301aa77c2aa99065))
* misc RE ([97f711a](https://github.com/AtomCrafty/CommonLibSSE/commit/97f711a28c59b4b61a68c87dcbe2fd3f92fc11f7))
* Missing CameraStates. ([24537fb](https://github.com/AtomCrafty/CommonLibSSE/commit/24537fb74c3f4453d8a9ee85e8c9e6af35a75182))
* more ([978b93e](https://github.com/AtomCrafty/CommonLibSSE/commit/978b93e1abe60a809ff95bb0258dc20859e77f17))
* more combat ([baf0b07](https://github.com/AtomCrafty/CommonLibSSE/commit/baf0b074a8ef5324bf2cc127e3f2f90dd8cf68f9))
* more misc stuff ([060ab3f](https://github.com/AtomCrafty/CommonLibSSE/commit/060ab3f099874d845bad1456d9120d04cd93e296))
* more stuff ([8c2de4a](https://github.com/AtomCrafty/CommonLibSSE/commit/8c2de4aca4bc6703d85637537a027f82fef9c2e2))
* name generic-subsystem methods ([#205](https://github.com/AtomCrafty/CommonLibSSE/issues/205)) ([b06e776](https://github.com/AtomCrafty/CommonLibSSE/commit/b06e776f766e7648d2503177eb285112478f4284))
* name GFxSprite/ASCharacter frame slots ([#273](https://github.com/AtomCrafty/CommonLibSSE/issues/273)) ([d706905](https://github.com/AtomCrafty/CommonLibSSE/commit/d7069050ae9bd81b7ef0f4df7e87191506a82d73)), closes [#161](https://github.com/AtomCrafty/CommonLibSSE/issues/161) [#163](https://github.com/AtomCrafty/CommonLibSSE/issues/163)
* **navmesh:** name path-builder and navmesh-search class hierarchy ([#151](https://github.com/AtomCrafty/CommonLibSSE/issues/151)) ([d191aec](https://github.com/AtomCrafty/CommonLibSSE/commit/d191aec7babedbe62c37d1da938d2cf8ad188ae0))
* **ni:** type NiBinaryExtraData/BSFaceGenBaseMorphExtraData ([#323](https://github.com/AtomCrafty/CommonLibSSE/issues/323)) ([ef8d249](https://github.com/AtomCrafty/CommonLibSSE/commit/ef8d249e805c82d4833ff7713ae1c2e7daf2ece3))
* **ni:** type NiTriShapeData/NiTriStripsData/NiTriStrips ([#322](https://github.com/AtomCrafty/CommonLibSSE/issues/322)) ([8fb03ef](https://github.com/AtomCrafty/CommonLibSSE/commit/8fb03eff4cfad6b2a7976df7760783e030555a57))
* player controls RE ([f0d2071](https://github.com/AtomCrafty/CommonLibSSE/commit/f0d2071e584547f85d9b603ec6b3a6101426b11b))
* **playercharacter:** add UsePoisonFromInventory ([#186](https://github.com/AtomCrafty/CommonLibSSE/issues/186)) ([3a2b0e5](https://github.com/AtomCrafty/CommonLibSSE/commit/3a2b0e5f2d91183fc0d659852b5d8b5ba35ec83b))
* **PlayerCharacter:** name VR layout, AE direct access, and VRPlayerHandData ([#152](https://github.com/AtomCrafty/CommonLibSSE/issues/152)) ([70d898a](https://github.com/AtomCrafty/CommonLibSSE/commit/70d898a31c1232f3de7bd45005883c98674376e6))
* **playercontrols:** add RegisterHandler ([#225](https://github.com/AtomCrafty/CommonLibSSE/issues/225)) ([5a19535](https://github.com/AtomCrafty/CommonLibSSE/commit/5a195350e3adcf208e3b4106579102f8de5fa288))
* port api helpers from commonlibf4 ([692f213](https://github.com/AtomCrafty/CommonLibSSE/commit/692f213d79a2049fa7b1ad7dc46d47bf06ac8416))
* portals stuff RE. ([677e337](https://github.com/AtomCrafty/CommonLibSSE/commit/677e337d1f2473d112eaa44b335878977af2fec0))
* portals stuff RE. ([1ac5d9d](https://github.com/AtomCrafty/CommonLibSSE/commit/1ac5d9d12ca828300194be193b974818d208816c))
* **prebuilt:** superset, multi-config, CRT guard ([#174](https://github.com/AtomCrafty/CommonLibSSE/issues/174)) ([66f257a](https://github.com/AtomCrafty/CommonLibSSE/commit/66f257a44ba4041871730803ef8df4d8fe905932)), closes [#173](https://github.com/AtomCrafty/CommonLibSSE/issues/173) [#173](https://github.com/AtomCrafty/CommonLibSSE/issues/173) [open-shaders#103](https://github.com/AtomCrafty/open-shaders/issues/103) [EngineFixesSkyrim64#10](https://github.com/AtomCrafty/EngineFixesSkyrim64/issues/10)
* **projectile:** add BeamProjectile overrides ([#249](https://github.com/AtomCrafty/CommonLibSSE/issues/249)) ([ab3ec4c](https://github.com/AtomCrafty/CommonLibSSE/commit/ab3ec4c9b1f1e5f8b3d1a875963c27f74ed0b0bd))
* **projectile:** add BeamProjectileImpactEvent ([#248](https://github.com/AtomCrafty/CommonLibSSE/issues/248)) ([aba5a6c](https://github.com/AtomCrafty/CommonLibSSE/commit/aba5a6c43ed017fce240a4b0bce4eb0816c26412))
* **projectile:** add BSProceduralGeomEvent ([#250](https://github.com/AtomCrafty/CommonLibSSE/issues/250)) ([5dde316](https://github.com/AtomCrafty/CommonLibSSE/commit/5dde316a87e58d2191f3c2e71b89888c83902c8c)), closes [alandtse/CommonLibSSE-NG#248](https://github.com/alandtse/CommonLibSSE-NG/issues/248) [#249](https://github.com/AtomCrafty/CommonLibSSE/issues/249)
* **projectile:** port lightning controller ([#251](https://github.com/AtomCrafty/CommonLibSSE/issues/251)) ([ba77d27](https://github.com/AtomCrafty/CommonLibSSE/commit/ba77d270d7710380f90956665491a8ecb747fbe4))
* **projectile:** port lightning tasklet ([#252](https://github.com/AtomCrafty/CommonLibSSE/issues/252)) ([68076bc](https://github.com/AtomCrafty/CommonLibSSE/commit/68076bc70e855c9bbbfed85412d6bb209b65f31d)), closes [#251](https://github.com/AtomCrafty/CommonLibSSE/issues/251)
* **racesexmenu:** type headPart/slider fields ([#321](https://github.com/AtomCrafty/CommonLibSSE/issues/321)) ([8eccdad](https://github.com/AtomCrafty/CommonLibSSE/commit/8eccdad356726dc0f1d3449786c58d636242eb3f))
* RE BSOpenVR ([#22](https://github.com/AtomCrafty/CommonLibSSE/issues/22)) ([759b592](https://github.com/AtomCrafty/CommonLibSSE/commit/759b592de73f05cfac229bdbb03bf034aa66c1d2))
* RE BSOpenVR ([#45](https://github.com/AtomCrafty/CommonLibSSE/issues/45)) ([56938a9](https://github.com/AtomCrafty/CommonLibSSE/commit/56938a9cd74d8d76661dace91e373eef0418e966))
* re COpenVRContext ([ee8cd57](https://github.com/AtomCrafty/CommonLibSSE/commit/ee8cd57747630b8dd1059bd67f10d3ff9439d142))
* RE ImageSpaceManager and TESWaterSystem ([41fa218](https://github.com/AtomCrafty/CommonLibSSE/commit/41fa2184cd99c1676015c0afead70db1f450c9df))
* RE ImageSpaceManager rect members ([0acb02b](https://github.com/AtomCrafty/CommonLibSSE/commit/0acb02b7e09a63cf063dfb6a731c604969b9f593))
* RE MessageBox ([de3fac0](https://github.com/AtomCrafty/CommonLibSSE/commit/de3fac052bf1570320849c605dd2b79eac1dc526))
* RE NavMesh ([bae6765](https://github.com/AtomCrafty/CommonLibSSE/commit/bae6765d340d07c30e0b2230d7c613e61f937e5f))
* RE NiPick ([711bae5](https://github.com/AtomCrafty/CommonLibSSE/commit/711bae55f0fe702992aba1c781b3e602a615fcf4))
* RE NiPick more ([a3829d4](https://github.com/AtomCrafty/CommonLibSSE/commit/a3829d497258bcbc90b8858fc2b5fb1d057ec549))
* RE NiTriShape ([e906fbd](https://github.com/AtomCrafty/CommonLibSSE/commit/e906fbda7cfdbbef1c30935083a006cf3f48991a))
* **re:** add ActorPackageData subclasses ([#197](https://github.com/AtomCrafty/CommonLibSSE/issues/197)) ([7be279c](https://github.com/AtomCrafty/CommonLibSSE/commit/7be279c14c4286371a8546ac339ef515e05d2c4d)), closes [#195](https://github.com/AtomCrafty/CommonLibSSE/issues/195)
* **re:** add camera collision, Havok utilities, and actor base flag setter ([#192](https://github.com/AtomCrafty/CommonLibSSE/issues/192)) ([d91241f](https://github.com/AtomCrafty/CommonLibSSE/commit/d91241fa7fb3129f54e4fdf669822f60bb3fe927))
* **re:** add NiCamera::CopyMembers, fix comment ([#222](https://github.com/AtomCrafty/CommonLibSSE/issues/222)) ([19cae33](https://github.com/AtomCrafty/CommonLibSSE/commit/19cae3387f34fead257aa84366de01cb856848fd)), closes [alandtse/skyrim_vr_address_library#143](https://github.com/alandtse/skyrim_vr_address_library/issues/143)
* **re:** add PlayerCharacter::GetPlayerFlags accessor ([#200](https://github.com/AtomCrafty/CommonLibSSE/issues/200)) ([0db2083](https://github.com/AtomCrafty/CommonLibSSE/commit/0db20839e7948cdea4a4428927ffdbe79a47ff98))
* **re:** add ShadowSceneNode::ResetScene ([#185](https://github.com/AtomCrafty/CommonLibSSE/issues/185)) ([c4ce876](https://github.com/AtomCrafty/CommonLibSSE/commit/c4ce8760be5037ce931f2000451d448039138dc0))
* **re:** add tree/particle node manager headers ([#221](https://github.com/AtomCrafty/CommonLibSSE/issues/221)) ([c186ea0](https://github.com/AtomCrafty/CommonLibSSE/commit/c186ea03c7ce83b3329c2e7bbd15e2bb44267f09))
* **refr:** bind BGSCreatedObjectManager::AddPotion, AddPoison ([#220](https://github.com/AtomCrafty/CommonLibSSE/issues/220)) ([b4de18f](https://github.com/AtomCrafty/CommonLibSSE/commit/b4de18fb72f20c71a66f4695f1ba148d904cdcb6))
* **refr:** bind TESObjectREFR::GetRotationMatrix ([#208](https://github.com/AtomCrafty/CommonLibSSE/issues/208)) ([c0fa8cb](https://github.com/AtomCrafty/CommonLibSSE/commit/c0fa8cb6f564e4d27e9cd14293f405dd135d56cd)), closes [alandtse/skyrim_vr_address_library#136](https://github.com/alandtse/skyrim_vr_address_library/issues/136)
* **REL:** add hook-integrity verification (REL::VerifyBytes) ([#232](https://github.com/AtomCrafty/CommonLibSSE/issues/232)) ([ab5004b](https://github.com/AtomCrafty/CommonLibSSE/commit/ab5004bf122ee4ca72d04692cd285ef112fa5af2))
* Relocation::write_func ([76e826d](https://github.com/AtomCrafty/CommonLibSSE/commit/76e826dc759b95eed50f6c1b57f14a82b1a355b4))
* **rel:** support AE 1.7.99 address library format 5 ([#299](https://github.com/AtomCrafty/CommonLibSSE/issues/299)) ([7b47c5a](https://github.com/AtomCrafty/CommonLibSSE/commit/7b47c5a8f1772ed2331aebdb7035fac48d3c19ca))
* **re:** model AE 1.7.99 layout changes ([#298](https://github.com/AtomCrafty/CommonLibSSE/issues/298)) ([9b1b041](https://github.com/AtomCrafty/CommonLibSSE/commit/9b1b041b9686525039e8ec587887ea29b749ab8f))
* remove `stl::enumeration` ([37210f9](https://github.com/AtomCrafty/CommonLibSSE/commit/37210f94209f4fffc70a50ad3d4db933b367ab53))
* REX json impl ([5e597e8](https://github.com/AtomCrafty/CommonLibSSE/commit/5e597e86f93da31275781bc4b0dcc553dc441b72))
* REX: initial ini, toml support ([317481b](https://github.com/AtomCrafty/CommonLibSSE/commit/317481ba152f21fcc2cb120df4580b1016d51d33))
* **saveloadgame:** name VR plugin-index fields ([#258](https://github.com/AtomCrafty/CommonLibSSE/issues/258)) ([8c34459](https://github.com/AtomCrafty/CommonLibSSE/commit/8c344598e23d6129075c458786d240007d3d700e))
* **saveloadmanager:** name/retype AE fields ([#265](https://github.com/AtomCrafty/CommonLibSSE/issues/265)) ([4813256](https://github.com/AtomCrafty/CommonLibSSE/commit/4813256e1c43d4d98ed6bfc4fa7e9f57df02e33d))
* **scene:** add BGSSceneAction vfuncs and PlayerRegionState members ([#237](https://github.com/AtomCrafty/CommonLibSSE/issues/237)) ([4ec4d61](https://github.com/AtomCrafty/CommonLibSSE/commit/4ec4d61579d4717d6bcac12696e8095ec27e4948))
* separate REX defs; ini, toml, and json work ([cc0fe3c](https://github.com/AtomCrafty/CommonLibSSE/commit/cc0fe3cb1179ee9152387775b12e70cb676c49d3))
* shadow lights RE. ([c679dd8](https://github.com/AtomCrafty/CommonLibSSE/commit/c679dd8ecf72eb51a96a1d046d4d28d72dc014b4))
* **shadow:** add BSShaderAccumulator RENDER_MODE enum ([#235](https://github.com/AtomCrafty/CommonLibSSE/issues/235)) ([3b5896f](https://github.com/AtomCrafty/CommonLibSSE/commit/3b5896fd42a6ecbc24cd7b4b63b6e4ce8baadb2d))
* simplify formatter's ([dcc6022](https://github.com/AtomCrafty/CommonLibSSE/commit/dcc6022f0950a31d2294228839d9bbe300b29562))
* swap renderTargets to use RENDER_TARGET ([0b92b1a](https://github.com/AtomCrafty/CommonLibSSE/commit/0b92b1aad79c22b9a0620c4bdd244e9f4ad94fea))
* sync with max-su-2019 ([#124](https://github.com/AtomCrafty/CommonLibSSE/issues/124)) ([31c5709](https://github.com/AtomCrafty/CommonLibSSE/commit/31c570903da426e87f3180d4d0eb6edf4db3f047))
* sync with po3 ([61e5172](https://github.com/AtomCrafty/CommonLibSSE/commit/61e51729a2f793c86ba85b2b4b8545aeeebc769e))
* **tasklet:** add group/manager headers ([#262](https://github.com/AtomCrafty/CommonLibSSE/issues/262)) ([ad3a1e0](https://github.com/AtomCrafty/CommonLibSSE/commit/ad3a1e0c23128bbcbf4ec4ce9ffe352575ceb58d)), closes [alandtse/skyrim_vr_address_library#155](https://github.com/alandtse/skyrim_vr_address_library/issues/155) [skyrim_vr_address_library#155](https://github.com/AtomCrafty/skyrim_vr_address_library/issues/155) [#155](https://github.com/AtomCrafty/CommonLibSSE/issues/155)
* terrain system, tesfile, console RE ([#87](https://github.com/AtomCrafty/CommonLibSSE/issues/87)) ([801ec29](https://github.com/AtomCrafty/CommonLibSSE/commit/801ec29d8dd19c553bafc14f77853dbe5cb5acb3))
* **tes:** add SetCurrentCell ([#268](https://github.com/AtomCrafty/CommonLibSSE/issues/268)) ([52bdd13](https://github.com/AtomCrafty/CommonLibSSE/commit/52bdd13355b40714cb1a3c6ab10823df630b3766)), closes [#264](https://github.com/AtomCrafty/CommonLibSSE/issues/264) [#266](https://github.com/AtomCrafty/CommonLibSSE/issues/266) [alandtse/skyrim_vr_address_library#157](https://github.com/alandtse/skyrim_vr_address_library/issues/157) [skyrim_vr_address_library#157](https://github.com/AtomCrafty/skyrim_vr_address_library/issues/157)
* **tes:** name RUNTIME_DATA2 fields ([#264](https://github.com/AtomCrafty/CommonLibSSE/issues/264)) ([8356c70](https://github.com/AtomCrafty/CommonLibSSE/commit/8356c70d3414b45a2227f06a00bdddbad5c46094))
* type discovered struct fields from Ghidra ([#184](https://github.com/AtomCrafty/CommonLibSSE/issues/184)) ([9813abe](https://github.com/AtomCrafty/CommonLibSSE/commit/9813abefd0c003e761940f74a01e8055adf97e30))
* update BSStorage, IVMSaveLoadInterface, VM ([7275c85](https://github.com/AtomCrafty/CommonLibSSE/commit/7275c852736683f2ceab9d47f7a50adf8f295293))
* use `REX::EnumSet` + clang format ([163a507](https://github.com/AtomCrafty/CommonLibSSE/commit/163a507d947d45493aed684c24cf37069ba04266))
* **vats:** name orchestration methods ([#204](https://github.com/AtomCrafty/CommonLibSSE/issues/204)) ([c5003e0](https://github.com/AtomCrafty/CommonLibSSE/commit/c5003e066027b780139680fe6a8b64a0457d1f99)), closes [#203](https://github.com/AtomCrafty/CommonLibSSE/issues/203) [alandtse/skyrim_vr_address_library#131](https://github.com/alandtse/skyrim_vr_address_library/issues/131)
* **vm:** bind SkyrimVM::Freeze ([#206](https://github.com/AtomCrafty/CommonLibSSE/issues/206)) ([9b202c3](https://github.com/AtomCrafty/CommonLibSSE/commit/9b202c3ef06fa6155784bb7e3d1c624f0c929ce4)), closes [#203](https://github.com/AtomCrafty/CommonLibSSE/issues/203) [alandtse/skyrim_vr_address_library#134](https://github.com/alandtse/skyrim_vr_address_library/issues/134)
* **VR:** add bsshadowlight RE ([4833031](https://github.com/AtomCrafty/CommonLibSSE/commit/48330316d24baf2411577bcbb2c779e177c997ba))
* **vr:** add GetActiveCameraPosition and GetActiveTarget ([#191](https://github.com/AtomCrafty/CommonLibSSE/issues/191)) ([98f5f30](https://github.com/AtomCrafty/CommonLibSSE/commit/98f5f3058a04642a6d333453c36f37bd64c3c682))
* **VR:** add GetActiveEffectList shim ([#115](https://github.com/AtomCrafty/CommonLibSSE/issues/115)) ([7450dcf](https://github.com/AtomCrafty/CommonLibSSE/commit/7450dcfb37f7ba68043fe3833fdbfba97f3fd489))
* **VR:** add missing ISCopyDepthBuffer_DR ([f343b8c](https://github.com/AtomCrafty/CommonLibSSE/commit/f343b8cf75cace4ff942ef744ea34c406aa7f8e2))
* **VR:** add packed ImageSpaceEffectEnum ([d50cd96](https://github.com/AtomCrafty/CommonLibSSE/commit/d50cd96b8016a5ecf89c744abe860bfb0e23e98c))
* **VR:** add rendertargets ([784614c](https://github.com/AtomCrafty/CommonLibSSE/commit/784614c735040dde053ab5a9cd02f66ddbd40144))
* **VR:** allow lazy loading of esl datahandler ([#140](https://github.com/AtomCrafty/CommonLibSSE/issues/140)) ([7df3e9c](https://github.com/AtomCrafty/CommonLibSSE/commit/7df3e9cb88f4285fccc6b9342cef48b52055fa0f))
* **VR:** identify BSVRInterface/BSOpenVR vtable ([#148](https://github.com/AtomCrafty/CommonLibSSE/issues/148)) ([24f7c39](https://github.com/AtomCrafty/CommonLibSSE/commit/24f7c39b93600e83f35615bfc2ded3cb9b717910))
* **vr:** name PlayerCharacter::UpdateVRComfortCheck and vrComfortFadeActive ([#198](https://github.com/AtomCrafty/CommonLibSSE/issues/198)) ([2aff92a](https://github.com/AtomCrafty/CommonLibSSE/commit/2aff92a33a3130849e8ff5c09988a7595d9876d9))
* **vr:** type BSOpenVRControllerDevice controller state ([#190](https://github.com/AtomCrafty/CommonLibSSE/issues/190)) ([1864851](https://github.com/AtomCrafty/CommonLibSSE/commit/1864851eafd11d4f829fb8666640806c647a4253))
* **water:** add BGSWaterCollisionManager types ([#338](https://github.com/AtomCrafty/CommonLibSSE/issues/338)) ([f684855](https://github.com/AtomCrafty/CommonLibSSE/commit/f68485576df7faf8b41026a09e3fde925031243f))

### Bug Fixes

* accumulate signature ([c02cf2a](https://github.com/AtomCrafty/CommonLibSSE/commit/c02cf2a997b324dc78cfa9c60630b6224c576554))
* **actor:** correct SetFireNode vtable slot ([#312](https://github.com/AtomCrafty/CommonLibSSE/issues/312)) ([902c58a](https://github.com/AtomCrafty/CommonLibSSE/commit/902c58a9fd3523e89e128539e2b1245e9fe5ef12)), closes [#311](https://github.com/AtomCrafty/CommonLibSSE/issues/311) [ersh1/Precision#4](https://github.com/ersh1/Precision/issues/4) [#311](https://github.com/AtomCrafty/CommonLibSSE/issues/311) [#311](https://github.com/AtomCrafty/CommonLibSSE/issues/311)
* **actor:** LocalMap key comparison off-by-one ([#274](https://github.com/AtomCrafty/CommonLibSSE/issues/274)) ([f08b95b](https://github.com/AtomCrafty/CommonLibSSE/commit/f08b95b5cec9a36cb1ab31a4295670f76c4968f7))
* **actor:** remove dangling GetRider declaration ([#202](https://github.com/AtomCrafty/CommonLibSSE/issues/202)) ([c121bad](https://github.com/AtomCrafty/CommonLibSSE/commit/c121baddace40a4be674c87fa896eb9c8e9f95ac))
* **actor:** remove dangling IsPointSubmergedMoreThan ([#201](https://github.com/AtomCrafty/CommonLibSSE/issues/201)) ([ba079bf](https://github.com/AtomCrafty/CommonLibSSE/commit/ba079bf65f24b602a68a724cb03ddffe89a6fc00))
* **actor:** resolve VR vtable slot drift ([#214](https://github.com/AtomCrafty/CommonLibSSE/issues/214)) ([5882c61](https://github.com/AtomCrafty/CommonLibSSE/commit/5882c613621f5a1e1cfdcbbd6c59f6a53fba47d0))
* add file nullptr check ([543c8e9](https://github.com/AtomCrafty/CommonLibSSE/commit/543c8e99ddea94cf109968e8f0839862f5e516a9)), closes [#9](https://github.com/AtomCrafty/CommonLibSSE/issues/9)
* add getters to BSShadowDirectionalLight ([#81](https://github.com/AtomCrafty/CommonLibSSE/issues/81)) ([379af33](https://github.com/AtomCrafty/CommonLibSSE/commit/379af33c1f391ed0e87da009044dedf20b030683))
* add includes, minor tweaks ([1b8dc45](https://github.com/AtomCrafty/CommonLibSSE/commit/1b8dc45fb0a13a0851571f7a57d4377232848f5f))
* add missing a_userEvent parameter to AddButtonEvent ([794e002](https://github.com/AtomCrafty/CommonLibSSE/commit/794e002091e1b8ee084ad3d4f2be3679111652c2))
* add missing BSShaderProperty funcs ([#58](https://github.com/AtomCrafty/CommonLibSSE/issues/58)) ([2f0735a](https://github.com/AtomCrafty/CommonLibSSE/commit/2f0735ad57b5cdbbfd427ce07ef92ca4f0249fc2))
* add missing ExtraLevCreaModifier destructor implementation ([53e7de3](https://github.com/AtomCrafty/CommonLibSSE/commit/53e7de3d3d03466f0c70de86903830191c54ba9b))
* add missing GetRuntimeData accessor to FaderMenu ([8f5cd17](https://github.com/AtomCrafty/CommonLibSSE/commit/8f5cd175b8e1f899732f38031003e79b3ec2e2a7))
* add missing handler ([4a4ffb9](https://github.com/AtomCrafty/CommonLibSSE/commit/4a4ffb96a6ef6856c53f3c51074c8fb83e7c14f0))
* add runtime data acessor for bssubindextrishape ([#147](https://github.com/AtomCrafty/CommonLibSSE/issues/147)) ([c3c3849](https://github.com/AtomCrafty/CommonLibSSE/commit/c3c3849900cb7604f71d6095799f75c88a403e4f))
* add some runtime protection and fix some possible crashes ([d8cd383](https://github.com/AtomCrafty/CommonLibSSE/commit/d8cd38319725f8e0f312f146935a9c3730f75ce2))
* added WMR controller values to INPUT_DEVICE enum ([9b55449](https://github.com/AtomCrafty/CommonLibSSE/commit/9b554497a73312512f47c1c799d76bdd224046db))
* added WMR controller values to INPUT_DEVICE enum ([618db16](https://github.com/AtomCrafty/CommonLibSSE/commit/618db16f21d2ea4b99e2ff9940ff9bbe0240380f))
* adjust TESForm Recordflag enum ([21c1c39](https://github.com/AtomCrafty/CommonLibSSE/commit/21c1c3976998c584481f3a77ba62880355de2879))
* AE relocation ID for BGSFootstepManager::GetSingleton() ([#76](https://github.com/AtomCrafty/CommonLibSSE/issues/76)) ([52f49e8](https://github.com/AtomCrafty/CommonLibSSE/commit/52f49e8b8c01eed4a35e2b02b0d435c27e3cd217))
* **AE:** fix member accessors in PlayerCharacter for 1.7.x ([098c639](https://github.com/AtomCrafty/CommonLibSSE/commit/098c639972dfdbe3d642901239c81dc70c62a6a3))
* **AE:** fix offset gaps in SkyrimVM/PlayerCharacter ([#306](https://github.com/AtomCrafty/CommonLibSSE/issues/306)) ([68ae73e](https://github.com/AtomCrafty/CommonLibSSE/commit/68ae73e1cb99cdf81cd406918531d0570fe1e332))
* allocate correct size in Create() ([#172](https://github.com/AtomCrafty/CommonLibSSE/issues/172)) ([e85f13b](https://github.com/AtomCrafty/CommonLibSSE/commit/e85f13b9a0655f5d24bc532c90dbd392a613a07a)), closes [#120](https://github.com/AtomCrafty/CommonLibSSE/issues/120)
* BGSDefaultObjectManager::GetObject lookup failure ([#98](https://github.com/AtomCrafty/CommonLibSSE/issues/98)) ([c41cdb7](https://github.com/AtomCrafty/CommonLibSSE/commit/c41cdb7a16d90e061a2fae963d4d7eab70717bf4))
* **bsbatchrenderer:** correct 0x58-0x70 layout ([#275](https://github.com/AtomCrafty/CommonLibSSE/issues/275)) ([1f526fe](https://github.com/AtomCrafty/CommonLibSSE/commit/1f526fe131163c76cfad5156de01e65fbb0084ab))
* **bsopenvr:** name remaining Unk_ vtable slots ([#228](https://github.com/AtomCrafty/CommonLibSSE/issues/228)) ([6d1bfe2](https://github.com/AtomCrafty/CommonLibSSE/commit/6d1bfe2b2f2417e1215be2182747cfa8d5c8822d))
* BSShader, Renderer, RendererShadowState ([9cf0f72](https://github.com/AtomCrafty/CommonLibSSE/commit/9cf0f72222664d1a6d9d131196cd93e3df91081d))
* **BSShadowLight:** GetIsDirectionalLight return ([#149](https://github.com/AtomCrafty/CommonLibSSE/issues/149)) ([2a5c01b](https://github.com/AtomCrafty/CommonLibSSE/commit/2a5c01b614078de99d3fa832063fa5177ea6f217))
* BSSmallBlockAllocator.h ([#88](https://github.com/AtomCrafty/CommonLibSSE/issues/88)) ([8319090](https://github.com/AtomCrafty/CommonLibSSE/commit/8319090b0db4a9de6ffd920d16cdcec9a6cb769d))
* BSSmallBlockAllocator.h ([#89](https://github.com/AtomCrafty/CommonLibSSE/issues/89)) ([2c21b06](https://github.com/AtomCrafty/CommonLibSSE/commit/2c21b06f0222ba1a0947ee07b613ac652ee26b54))
* build and follow sse naming standard ([b191316](https://github.com/AtomCrafty/CommonLibSSE/commit/b19131697b9ffaa6e9c12f0b9df00349d50323e8))
* ButtonEvent inheritence ([7ce496a](https://github.com/AtomCrafty/CommonLibSSE/commit/7ce496a90b09e3e0e47b062a4fc954a972613cc7))
* camera states ([8a01918](https://github.com/AtomCrafty/CommonLibSSE/commit/8a0191840cb9b008aff2b5733da0419a3c74cad9))
* clang-cl ([65b9e19](https://github.com/AtomCrafty/CommonLibSSE/commit/65b9e1981d31e1afe1f01c49579c2391d0d5806e))
* clang-cl warnings ([#83](https://github.com/AtomCrafty/CommonLibSSE/issues/83)) ([6f2b8f6](https://github.com/AtomCrafty/CommonLibSSE/commit/6f2b8f699121714f6a96cd0f3d87576c2a5e00f8))
* clarify LocalMapCullingProcess cross-VR size assertion ([9228685](https://github.com/AtomCrafty/CommonLibSSE/commit/9228685cf7fce73f9d791aa969cba5bf53783724)), closes [#107](https://github.com/AtomCrafty/CommonLibSSE/issues/107)
* consistency ([af39065](https://github.com/AtomCrafty/CommonLibSSE/commit/af3906508198c355c614a7ce7edda6de63130b15))
* **controlmap:** bind functions to real implementations ([#224](https://github.com/AtomCrafty/CommonLibSSE/issues/224)) ([3ba3fe8](https://github.com/AtomCrafty/CommonLibSSE/commit/3ba3fe8b6606248a077f9ead604557abc82ea886))
* correct BSTimer size and Explosion members ([957c3b0](https://github.com/AtomCrafty/CommonLibSSE/commit/957c3b00d9237cd1010c5853ac838a09cdcb7268))
* correct control map AE version comparison ([#32](https://github.com/AtomCrafty/CommonLibSSE/issues/32)) ([a5859e4](https://github.com/AtomCrafty/CommonLibSSE/commit/a5859e42cbd83421527b5816054e346a78d52411))
* correct MapMenu/LocalMapMenu runtime-data layout ([#309](https://github.com/AtomCrafty/CommonLibSSE/issues/309)) ([7ae1c97](https://github.com/AtomCrafty/CommonLibSSE/commit/7ae1c9768c11cca293a1a4c9e6a0c55e8f4d55ae))
* correct RUNTIME_DATA_ACCESSOR macro for State.h GetRuntimeData ([c1e2ef8](https://github.com/AtomCrafty/CommonLibSSE/commit/c1e2ef8ecfea7510e06131de69b22a5cda526d34))
* correct vrContext ([162c035](https://github.com/AtomCrafty/CommonLibSSE/commit/162c035f239a27e4ae76b4fb5c093569bacf56c5))
* disable REX toml Save functions ([e0d9e73](https://github.com/AtomCrafty/CommonLibSSE/commit/e0d9e739b427bf2c188827196a2bd7285676cfae))
* DualValueModifierEffect member layout ([#199](https://github.com/AtomCrafty/CommonLibSSE/issues/199)) ([ef251d0](https://github.com/AtomCrafty/CommonLibSSE/commit/ef251d09012118006ea7dd6a4285e827a655fccb))
* enable conforming preprocessor for STATIC_ASSERT_SIZE macro ([113c400](https://github.com/AtomCrafty/CommonLibSSE/commit/113c400d6cacf4605feb1b421a88cf2158c2e271))
* Fix `HUDMenu` name ([#61](https://github.com/AtomCrafty/CommonLibSSE/issues/61)) ([1fe0613](https://github.com/AtomCrafty/CommonLibSSE/commit/1fe061326d8875603b22d8d014d72abbd5368cac))
* fix 1130 offsets and flatrim config ([05d81a1](https://github.com/AtomCrafty/CommonLibSSE/commit/05d81a13693652bf63bd34fc6efd994a0d6644db))
* fix ActorMagicCaster::Update offset ([#75](https://github.com/AtomCrafty/CommonLibSSE/issues/75)) ([943c12e](https://github.com/AtomCrafty/CommonLibSSE/commit/943c12e7a5c8ba05b4867c568cb51022fe8e8530))
* fix ae ID ([#80](https://github.com/AtomCrafty/CommonLibSSE/issues/80)) ([539d4ce](https://github.com/AtomCrafty/CommonLibSSE/commit/539d4ce50969e8d23f4d507a7bc3dd955a4de93f))
* fix assignment of VRcompiledFileCollection ([21ef754](https://github.com/AtomCrafty/CommonLibSSE/commit/21ef754b4837a027f5a2b3c9879b75886dce721d))
* fix bad offset for VR NiAVObject userData ([a89eeb9](https://github.com/AtomCrafty/CommonLibSSE/commit/a89eeb96b1375dcdff2e0c0ed05eb4b505689e90))
* fix BGSDefaultObjectManager array iteration ([dfedc5e](https://github.com/AtomCrafty/CommonLibSSE/commit/dfedc5e3beef8703c1ad92c250a758d47345fa8b))
* fix BSGraphics::Renderer for AE1130 ([738afc4](https://github.com/AtomCrafty/CommonLibSSE/commit/738afc457fdeba050ce328f15225aa3cde674187))
* fix bsinputeventqueue static_asserts ([9341642](https://github.com/AtomCrafty/CommonLibSSE/commit/9341642fa25412cff407f4215686460f85868876))
* fix BSPCGamepadDeviceHandler runtime offsets ([e840bca](https://github.com/AtomCrafty/CommonLibSSE/commit/e840bca8fe345242ccfcef0b3ee7b0b3fe5028aa))
* fix BSShaderMaterial memory allocation ([a537473](https://github.com/AtomCrafty/CommonLibSSE/commit/a53747388e051060f3cbbf3e4a1e53049fb89fc1))
* fix BSTriShape runtime offsets ([e11ac6e](https://github.com/AtomCrafty/CommonLibSSE/commit/e11ac6e9d892c9d39857c477120aeb56fe6feaca))
* fix check for successful ID mapping ([#69](https://github.com/AtomCrafty/CommonLibSSE/issues/69)) ([4aac68c](https://github.com/AtomCrafty/CommonLibSSE/commit/4aac68cf2c8277be26975eafb22d1e1b947abc5a))
* fix compilation error ([3936bcb](https://github.com/AtomCrafty/CommonLibSSE/commit/3936bcb8cb2d97fad006597b5058c908aa7a036c))
* fix compilation error ([99f0393](https://github.com/AtomCrafty/CommonLibSSE/commit/99f03932f7451f23add1b54b8bf940074fe3700d))
* fix compilation errors ([9214fe7](https://github.com/AtomCrafty/CommonLibSSE/commit/9214fe709d78a1fedcc711b71ca37637378a1d40))
* fix compile errors ([5810743](https://github.com/AtomCrafty/CommonLibSSE/commit/581074333616630eae3318df4fbfaf59919066c1))
* fix compile errors ([612bf3d](https://github.com/AtomCrafty/CommonLibSSE/commit/612bf3d1a7eb0cc05029ee5d0eba3301b91e1c74))
* fix compile errors ([#63](https://github.com/AtomCrafty/CommonLibSSE/issues/63)) ([853cd7a](https://github.com/AtomCrafty/CommonLibSSE/commit/853cd7ae01113fb36850ba8a8c1635a34cc6fb81))
* fix ControlMap singleton ID ([9646bdb](https://github.com/AtomCrafty/CommonLibSSE/commit/9646bdb42a02ad8dc2d58c894013693a84ec2cc3))
* fix CTD on WorldSpaceMenu ([befa2de](https://github.com/AtomCrafty/CommonLibSSE/commit/befa2dec6e010cd608866331c5a60dedcc2d2026))
* fix exclusive build for FLAT or VR ([#57](https://github.com/AtomCrafty/CommonLibSSE/issues/57)) ([2a0f382](https://github.com/AtomCrafty/CommonLibSSE/commit/2a0f382515b27b0b7e433e28ee163679b10b9f68))
* fix fmt compile errors ([5949aa0](https://github.com/AtomCrafty/CommonLibSSE/commit/5949aa0542d0d8b7a2b564691de6923a47732e9a))
* fix location of vr alphaBlendModeExtra ([b17ee0a](https://github.com/AtomCrafty/CommonLibSSE/commit/b17ee0a896cb4235a44060b071fbb5f1a7ee34a5))
* fix logger directory for VR ([054e1e2](https://github.com/AtomCrafty/CommonLibSSE/commit/054e1e20b2a26ffa488e96bbc7862fab19ad4623))
* fix MapMenu getters ([#60](https://github.com/AtomCrafty/CommonLibSSE/issues/60)) ([34b59a3](https://github.com/AtomCrafty/CommonLibSSE/commit/34b59a398ca7e84c247d09712b77e780e4b0b40e))
* fix NiParticle runtime offsets for VR ([e3b7990](https://github.com/AtomCrafty/CommonLibSSE/commit/e3b7990827c3fe18b2f75921c2aafa59cb38ce2c))
* fix NPE in TypeInfo.cpp ([a62791c](https://github.com/AtomCrafty/CommonLibSSE/commit/a62791cbcb68bd796b303ae7d1a25829d49c6b12))
* fix offset for VR Player Runtime Data ([#85](https://github.com/AtomCrafty/CommonLibSSE/issues/85)) ([394b105](https://github.com/AtomCrafty/CommonLibSSE/commit/394b105e0ab1dbc249d9e848904118c04c125099))
* fix player struct alignment for AE ([#52](https://github.com/AtomCrafty/CommonLibSSE/issues/52)) ([9704d50](https://github.com/AtomCrafty/CommonLibSSE/commit/9704d50be5b5841541beaeaf9d615993c4a494db))
* fix playerCamera ([8b55358](https://github.com/AtomCrafty/CommonLibSSE/commit/8b553586220d842358059a34b2de8bdcc7d6a1e7))
* fix playercharacter and controlmap offsets ([cab9f74](https://github.com/AtomCrafty/CommonLibSSE/commit/cab9f743fe5a5c70db3ca9b1857ec079738b5ffa))
* fix PlayerCharacter inheritence and sizes ([c836485](https://github.com/AtomCrafty/CommonLibSSE/commit/c83648537df2beb4dd9649aa9817094ad3104cb5))
* fix PlayerCharacter::ByCharGenFlag enum size ([2637cd2](https://github.com/AtomCrafty/CommonLibSSE/commit/2637cd2f22ce40fec807406593363c37be3bcf3a))
* fix potential symbol conflict ([360f646](https://github.com/AtomCrafty/CommonLibSSE/commit/360f6463ed78c62678981a3494c5a3617535a466))
* fix relid regressions from merge ([c0c5131](https://github.com/AtomCrafty/CommonLibSSE/commit/c0c5131d6f5a70751cd972170e968ebde03684c1))
* fix renderer offsets ([6ccb57a](https://github.com/AtomCrafty/CommonLibSSE/commit/6ccb57a73fe025d441b1ed3c382710dd1fca2f4e))
* fix return path compile error ([e6eadfc](https://github.com/AtomCrafty/CommonLibSSE/commit/e6eadfc65fab424fb4b239c63eb8dfb930080943))
* fix runtime offsets for BSShadowLight ([c40cf40](https://github.com/AtomCrafty/CommonLibSSE/commit/c40cf40c464ad8a644175f131a06ceba3ea44ba2))
* fix runtime offsets for NiParticles ([1fab24c](https://github.com/AtomCrafty/CommonLibSSE/commit/1fab24cf7cdbfc7dd97f456f9ae464531b100f8c))
* fix skyrimvresl VRcompiledFileCollection ([0dc0343](https://github.com/AtomCrafty/CommonLibSSE/commit/0dc0343a70b46ef4815d8f03c2e493180575a0ac))
* fix support for fmt10 ([2b3e1f6](https://github.com/AtomCrafty/CommonLibSSE/commit/2b3e1f63e438f2cc0effdf207863edc7e12dc9f3))
* fix vfunc indexing for Flatrim ([d970ed2](https://github.com/AtomCrafty/CommonLibSSE/commit/d970ed21ea09ce80e34103fab0683457ef3ecdf6))
* fix virtual functions for VR ([fcf1b4c](https://github.com/AtomCrafty/CommonLibSSE/commit/fcf1b4c777aa732ae68f92e8cd0c88b7fd39ac9f))
* fix VR module detection lost during qudix refactor ([cf9a3b8](https://github.com/AtomCrafty/CommonLibSSE/commit/cf9a3b803bef6f6d07e5abc28af41b9c0e14f333))
* fix weather types ([a9bc9fe](https://github.com/AtomCrafty/CommonLibSSE/commit/a9bc9fe07ed912aeb0319a6c1992392d720e5592))
* fix`InputContext::GetNumDeviceMappings()` ([#39](https://github.com/AtomCrafty/CommonLibSSE/issues/39)) ([285bccf](https://github.com/AtomCrafty/CommonLibSSE/commit/285bccffe7f10884940444a2f6ad079d921127bd))
* fixed setting constant buffers in VR. ([#64](https://github.com/AtomCrafty/CommonLibSSE/issues/64)) ([89bc8b4](https://github.com/AtomCrafty/CommonLibSSE/commit/89bc8b425555cf4e6e7ce1079e5f6bdeac969e97))
* fmt to std if format lib is defined ([#82](https://github.com/AtomCrafty/CommonLibSSE/issues/82)) ([2e8e84e](https://github.com/AtomCrafty/CommonLibSSE/commit/2e8e84ec0801dc50ef1a8b9afec62f2e606e48c5))
* **form:** null-check GetFile(0) in GetLocalFormID ([#212](https://github.com/AtomCrafty/CommonLibSSE/issues/212)) ([0f6debd](https://github.com/AtomCrafty/CommonLibSSE/commit/0f6debd15fefab35c4c20729d168e530a3807fbb))
* GetActiveEffectList and Actor inheritance([#117](https://github.com/AtomCrafty/CommonLibSSE/issues/117)) ([f039dcf](https://github.com/AtomCrafty/CommonLibSSE/commit/f039dcf97d2e6d0fa7bffd8f1f71f137749ea6df))
* global logger name is case sensitive ([2839cb7](https://github.com/AtomCrafty/CommonLibSSE/commit/2839cb701544b2794f1454fcac0449dfaec49144))
* handle includeLength<0 context hooks with correct public RIP ([#139](https://github.com/AtomCrafty/CommonLibSSE/issues/139)) ([01d2af7](https://github.com/AtomCrafty/CommonLibSSE/commit/01d2af79d2cf0f9b7fe2944213acdc06c8e6e9ac))
* **havok:** correct bhkWorldObject world field ([#223](https://github.com/AtomCrafty/CommonLibSSE/issues/223)) ([793e69b](https://github.com/AtomCrafty/CommonLibSSE/commit/793e69b2664de794cded5cca9920f5b2cb57f9c4))
* **hkbBehaviorGraph:** variableValueSet type ([#281](https://github.com/AtomCrafty/CommonLibSSE/issues/281)) ([7dfcd6f](https://github.com/AtomCrafty/CommonLibSSE/commit/7dfcd6ffcd4b1636fc90f3bc0bac5dd3a0a721c9))
* **imagespacemanager:** fix SAOBlurH type ([#233](https://github.com/AtomCrafty/CommonLibSSE/issues/233)) ([aa0fcd8](https://github.com/AtomCrafty/CommonLibSSE/commit/aa0fcd8133113ca8c9bdf2b62f3442ac92084d99))
* include ([0abd01b](https://github.com/AtomCrafty/CommonLibSSE/commit/0abd01b103991733f379327c2d84432abb992766))
* includes ([1eb1bd2](https://github.com/AtomCrafty/CommonLibSSE/commit/1eb1bd2668c3678aa48489b86e38f6e30bf486b2))
* init-ing logger too early ([0b0c1f8](https://github.com/AtomCrafty/CommonLibSSE/commit/0b0c1f898268fb64116130d83aba4d52963282d9))
* **inventory:** default IItemChangeVisitor dtors ([#328](https://github.com/AtomCrafty/CommonLibSSE/issues/328)) ([8339e6d](https://github.com/AtomCrafty/CommonLibSSE/commit/8339e6d37f66448144d8ee25afb6a0e1a5486bea))
* **lightning:** add BSTEventSource base at 0x48 ([#276](https://github.com/AtomCrafty/CommonLibSSE/issues/276)) ([c4698c4](https://github.com/AtomCrafty/CommonLibSSE/commit/c4698c4c77f013d61513a0094e76d0694139cccb)), closes [#250](https://github.com/AtomCrafty/CommonLibSSE/issues/250) [#257](https://github.com/AtomCrafty/CommonLibSSE/issues/257)
* **lightning:** VR runtime accessor for cross-VR safety ([#254](https://github.com/AtomCrafty/CommonLibSSE/issues/254)) ([e32b5d1](https://github.com/AtomCrafty/CommonLibSSE/commit/e32b5d1da1a0f9cd234789455a880e6d9bd98dc6)), closes [#252](https://github.com/AtomCrafty/CommonLibSSE/issues/252)
* MagicTarget offsets ([#157](https://github.com/AtomCrafty/CommonLibSSE/issues/157)) ([2bedea6](https://github.com/AtomCrafty/CommonLibSSE/commit/2bedea60fe6db3e7bfde5b1488a506ece07dd8bd))
* Main members ([#144](https://github.com/AtomCrafty/CommonLibSSE/issues/144)) ([4e8a9d5](https://github.com/AtomCrafty/CommonLibSSE/commit/4e8a9d585d5182e8b5293477c52b174793c7e1fe))
* make shadowstate utils VR compatible ([#56](https://github.com/AtomCrafty/CommonLibSSE/issues/56)) ([4fba153](https://github.com/AtomCrafty/CommonLibSSE/commit/4fba153e75fa2941ab72b5e6da9f280494f52cbd))
* make xmake rex options consistent ([02a517e](https://github.com/AtomCrafty/CommonLibSSE/commit/02a517e6eab53852b4031d5fe07d949d2dc4a747))
* **menucontrols:** bind real handler functions ([#226](https://github.com/AtomCrafty/CommonLibSSE/issues/226)) ([e0cc8ef](https://github.com/AtomCrafty/CommonLibSSE/commit/e0cc8ef92b46bda9472c1b800055ed8ef32c3e44))
* **menu:** correct AE id for BSTArray overload ([#317](https://github.com/AtomCrafty/CommonLibSSE/issues/317)) ([73a196a](https://github.com/AtomCrafty/CommonLibSSE/commit/73a196ab74a35bb67a12a9e27b4b715b01888b07))
* **MenuCursor:** fix runtime data use ([c1a2059](https://github.com/AtomCrafty/CommonLibSSE/commit/c1a20597dd68ae2397290a2b7fb40e1a73b82aca))
* MenuEventHandler VR vtable shift ([#177](https://github.com/AtomCrafty/CommonLibSSE/issues/177)) ([6b48ca9](https://github.com/AtomCrafty/CommonLibSSE/commit/6b48ca992424b3fa9b1a8c61758244da531b6ed1))
* Missing include in TutorialMenu.cpp ([34a6cec](https://github.com/AtomCrafty/CommonLibSSE/commit/34a6cecffce5abe5fcf5b36aab1339e7bd77d6bb))
* missing includes ([dc4c411](https://github.com/AtomCrafty/CommonLibSSE/commit/dc4c4113b7ec728b2f679ddc41f9dc827dc0a2e2))
* missing SKSE namespace with USE_SIGNATURE_SCANNING ([#219](https://github.com/AtomCrafty/CommonLibSSE/issues/219)) ([ca0ac63](https://github.com/AtomCrafty/CommonLibSSE/commit/ca0ac632889758ba1c99934aa7dd43fc622d7f19))
* move includes ([6cc6761](https://github.com/AtomCrafty/CommonLibSSE/commit/6cc67610c74c906962766b761aaae45f4d68b2b5))
* move REL::Module::reset outside of testing definition ([#53](https://github.com/AtomCrafty/CommonLibSSE/issues/53)) ([93d8b8f](https://github.com/AtomCrafty/CommonLibSSE/commit/93d8b8f05ae8f49d3463708cdcbe003964b06149))
* move utils to correct place ([813dd0a](https://github.com/AtomCrafty/CommonLibSSE/commit/813dd0ac817bc16d83b9116dbb83f30a0ad0597b))
* move utils to correct place ([#59](https://github.com/AtomCrafty/CommonLibSSE/issues/59)) ([d4e2b1e](https://github.com/AtomCrafty/CommonLibSSE/commit/d4e2b1e396791440a37fefe3db584cc429429eb0))
* **ni:** add NiAVObject::GetFlags02 accessor ([#289](https://github.com/AtomCrafty/CommonLibSSE/issues/289)) ([5ffbc64](https://github.com/AtomCrafty/CommonLibSSE/commit/5ffbc64c9e96bbabd523fdd023fa2b096b85d5c2))
* **ni:** allocate NiNode::Create with runtime-correct size ([#284](https://github.com/AtomCrafty/CommonLibSSE/issues/284)) ([4365366](https://github.com/AtomCrafty/CommonLibSSE/commit/4365366cb4be4cbd0337933bddfb70b52cc75cac)), closes [#120](https://github.com/AtomCrafty/CommonLibSSE/issues/120) [#7](https://github.com/AtomCrafty/CommonLibSSE/issues/7)
* only allow default log if 1.6.x support is enabled ([c34f51e](https://github.com/AtomCrafty/CommonLibSSE/commit/c34f51e203d0881d0bdc08de44c3fd6ad9e2a2af))
* pass by reference ([0615cc7](https://github.com/AtomCrafty/CommonLibSSE/commit/0615cc70ef78a1aba3f93428573f8e5f74c2fd7a))
* **playercharacter:** correct AE quest offsets ([#211](https://github.com/AtomCrafty/CommonLibSSE/issues/211)) ([a825086](https://github.com/AtomCrafty/CommonLibSSE/commit/a8250868dffd48a9e57a075986acd7aa8cbb8b74))
* **playercharacter:** vr event sources ([#234](https://github.com/AtomCrafty/CommonLibSSE/issues/234)) ([4d50f17](https://github.com/AtomCrafty/CommonLibSSE/commit/4d50f17592f305c604f9a7e0ee5ba5126e389ae4))
* **prebuilt:** auto-fetch in CI; relax options gate ([#171](https://github.com/AtomCrafty/CommonLibSSE/issues/171)) ([a988eaa](https://github.com/AtomCrafty/CommonLibSSE/commit/a988eaac26746c93f19df2bb0bfd7736a6d6d6d5))
* **prebuilt:** fall back to source on MSVC mismatch ([#216](https://github.com/AtomCrafty/CommonLibSSE/issues/216)) ([4ed75b3](https://github.com/AtomCrafty/CommonLibSSE/commit/4ed75b3cedd25b54ab641cf1f488f4214cf6490d))
* **prebuilt:** support multi-config generators ([#175](https://github.com/AtomCrafty/CommonLibSSE/issues/175)) ([3b7207a](https://github.com/AtomCrafty/CommonLibSSE/commit/3b7207a02f250cecdebbcac8c31292ff00c6c0e7))
* proper handling for long toml paths ([c160aa5](https://github.com/AtomCrafty/CommonLibSSE/commit/c160aa5d315aaca5dedd58410cdf7af26cd5bfa8))
* RE ImageSpaceManager for VR ([0f756f0](https://github.com/AtomCrafty/CommonLibSSE/commit/0f756f04088d6ce9fd005ab60d460754014feb10))
* **re:** correct PlayerCamera Unk120 type ([#196](https://github.com/AtomCrafty/CommonLibSSE/issues/196)) ([db924b0](https://github.com/AtomCrafty/CommonLibSSE/commit/db924b0dff97562d71d1d35a43bc81d4afe5ce29)), closes [#193](https://github.com/AtomCrafty/CommonLibSSE/issues/193)
* **region:** resolve TES gridBufferDistance floats ([#243](https://github.com/AtomCrafty/CommonLibSSE/issues/243)) ([dc00206](https://github.com/AtomCrafty/CommonLibSSE/commit/dc00206641680554a2242c2c3ae27255086320c1))
* **rel:** find exe via GetModuleHandleW(nullptr) ([#295](https://github.com/AtomCrafty/CommonLibSSE/issues/295)) ([d38040b](https://github.com/AtomCrafty/CommonLibSSE/commit/d38040b8bf533b7611d7b59e752f3792a807a76f))
* **rel:** restore Module constant initialization ([#287](https://github.com/AtomCrafty/CommonLibSSE/issues/287)) ([acc3ffd](https://github.com/AtomCrafty/CommonLibSSE/commit/acc3ffd262c61aeb1a4a89e06d9ad5ed186cffd7)), closes [#393](https://github.com/AtomCrafty/CommonLibSSE/issues/393)
* remove const from EMPTY by Nukem ([#96](https://github.com/AtomCrafty/CommonLibSSE/issues/96)) ([994077a](https://github.com/AtomCrafty/CommonLibSSE/commit/994077ae42219692c812171a8de5e5939b78aff1))
* remove deprecated Actor::GetRider ([cd43719](https://github.com/AtomCrafty/CommonLibSSE/commit/cd437192789620935eb8652bb39b89e915a92959))
* remove duplicate func ([d9647e9](https://github.com/AtomCrafty/CommonLibSSE/commit/d9647e99cffa6f33655ab9665bab93429bb8380a))
* remove phantom ISGraphicsTextureFilterMode IS effect ([#178](https://github.com/AtomCrafty/CommonLibSSE/issues/178)) ([5126c68](https://github.com/AtomCrafty/CommonLibSSE/commit/5126c68e8610b1b24a6a4ca092912e4b0afebf17))
* remove redundant hkMemoryRouter.cpp ([#156](https://github.com/AtomCrafty/CommonLibSSE/issues/156)) ([2091b97](https://github.com/AtomCrafty/CommonLibSSE/commit/2091b97620b6e9bc1402ca3e114f57146beab696))
* remove temp debug output ([ee7778d](https://github.com/AtomCrafty/CommonLibSSE/commit/ee7778dff172368154835ce00b3b4596d356a11e))
* require use of GetRuntimeData methods ([e8ec7cc](https://github.com/AtomCrafty/CommonLibSSE/commit/e8ec7cc136bf59af0e7ef1bb45e5a3c946c8fe4f))
* **RE:** rename State::RUNTIME_DATA firstCameraStateIndex to eyeIndex ([#292](https://github.com/AtomCrafty/CommonLibSSE/issues/292)) ([61459e5](https://github.com/AtomCrafty/CommonLibSSE/commit/61459e5807a99a1158390bad18e25435da2f47f6))
* resolve packed enum IDs per-runtime ([#179](https://github.com/AtomCrafty/CommonLibSSE/issues/179)) ([fa60781](https://github.com/AtomCrafty/CommonLibSSE/commit/fa60781748569344fab2f51de1dd43ff71a28b3e))
* resolve post-merge compilation issues ([1da4895](https://github.com/AtomCrafty/CommonLibSSE/commit/1da4895d5d71668407ad0d1e11bd8f22a8f5259e))
* revert ini library to simpleini ([402de93](https://github.com/AtomCrafty/CommonLibSSE/commit/402de9309a3013b7d0973a2a78f4e95f0b02bb28))
* revert key type change ([e1d1b0c](https://github.com/AtomCrafty/CommonLibSSE/commit/e1d1b0c7e790489cd529b82c5d2477f91a4435bd))
* Script::CompileAndRun_Impl and BSScaleformTranslator::GetCachedString for AE1130 ([f7dec1c](https://github.com/AtomCrafty/CommonLibSSE/commit/f7dec1cbe91473105f42d159f02b697b55b5dd63))
* **shaderprop:** correct VR alloc size ([#293](https://github.com/AtomCrafty/CommonLibSSE/issues/293)) ([69f7ece](https://github.com/AtomCrafty/CommonLibSSE/commit/69f7ece71ad465bae0c358c133dfa20c4cffc7a7))
* **shadow:** add BSShadowFrustumLight FOV runtime accessor ([#280](https://github.com/AtomCrafty/CommonLibSSE/issues/280)) ([45afdb6](https://github.com/AtomCrafty/CommonLibSSE/commit/45afdb6fb9d65e574b53c69d811116d7e795fbb2))
* shadowscenenode multiruntime support ([f9734d9](https://github.com/AtomCrafty/CommonLibSSE/commit/f9734d9df06ac4b2c5bb069a17ca5081c882919b))
* ShowInventoryChangeMessage condition ([#261](https://github.com/AtomCrafty/CommonLibSSE/issues/261)) ([1dbda41](https://github.com/AtomCrafty/CommonLibSSE/commit/1dbda41a5e47de41f77afe5c59234bd655e4037d))
* sort xmake options ([30fe805](https://github.com/AtomCrafty/CommonLibSSE/commit/30fe80560f88860cc3591de38aa8bcb90ce947d3))
* **state:** correct RUNTIME_DATA offset for 1.7.99 ([#307](https://github.com/AtomCrafty/CommonLibSSE/issues/307)) ([57cb667](https://github.com/AtomCrafty/CommonLibSSE/commit/57cb66769af52e3e3d2d073838d9303a07f0f743))
* **state:** rename unk055 to useEarlyZ ([#308](https://github.com/AtomCrafty/CommonLibSSE/issues/308)) ([cce62f1](https://github.com/AtomCrafty/CommonLibSSE/commit/cce62f1a0d82eeb9c9905fc865301b76c74bffbc))
* **state:** version AE>=1.7.99 frame fields ([#325](https://github.com/AtomCrafty/CommonLibSSE/issues/325)) ([86adeb8](https://github.com/AtomCrafty/CommonLibSSE/commit/86adeb8fba59f88aa613185bf10c90442bb41241))
* **streambase:** correct AE/SE/VR flags offset ([#256](https://github.com/AtomCrafty/CommonLibSSE/issues/256)) ([4643fee](https://github.com/AtomCrafty/CommonLibSSE/commit/4643fee416aa4fe17b2066718ea8a23fc54c4711))
* support non-ae ([9fe9130](https://github.com/AtomCrafty/CommonLibSSE/commit/9fe9130d9e04f7e79740566efb2dbf3df428c113))
* switch to directx toolkit and simplemath ([bb1c575](https://github.com/AtomCrafty/CommonLibSSE/commit/bb1c575855c402dc6f064747938bc4f37d8a691f))
* sync Actor::Unk_117 with flat ([162af97](https://github.com/AtomCrafty/CommonLibSSE/commit/162af97a709b8d07e94d8966e6d355d044bbbca5))
* **sync:** resolve cross-VR build errors ([9d99532](https://github.com/AtomCrafty/CommonLibSSE/commit/9d99532331b9fc0080b3c3ea7a05a4f59726ec71))
* TESCameraState vfunc inheritance ([1117d28](https://github.com/AtomCrafty/CommonLibSSE/commit/1117d28d96fc744467e73b3b90d1bf267178f326))
* toml save improvements ([8b086e5](https://github.com/AtomCrafty/CommonLibSSE/commit/8b086e5e72d058ed079b6424c9fdbb8b384244b3))
* update INPUT_DEVICES ([687930b](https://github.com/AtomCrafty/CommonLibSSE/commit/687930b433091305a995744d57a287ae536a1192))
* update offsets for main.h in VR ([9487609](https://github.com/AtomCrafty/CommonLibSSE/commit/9487609ee5c03c405519a6944a6aeb6bb0cc8dd0))
* use FLAT size for SE/AE in static_assert ([5d341d4](https://github.com/AtomCrafty/CommonLibSSE/commit/5d341d47108de8f1e70de7db9fa8244d34544fd6))
* use REX::W32 instead of simplemath to fix BSShadowLight build issue ([#44](https://github.com/AtomCrafty/CommonLibSSE/issues/44)) ([8e42371](https://github.com/AtomCrafty/CommonLibSSE/commit/8e42371362b17770a6ad389f48f4a6fdca998e55))
* use runtime version of currentProcess ([3d05419](https://github.com/AtomCrafty/CommonLibSSE/commit/3d054198ecb4ef3ff9157a60fd080969f570a8ad))
* user config no longer overrides base config ([9c9e481](https://github.com/AtomCrafty/CommonLibSSE/commit/9c9e481472451d022c1218453e127c6c495f2e6e))
* **variable:** pack null handles as typed None ([#337](https://github.com/AtomCrafty/CommonLibSSE/issues/337)) ([e44731e](https://github.com/AtomCrafty/CommonLibSSE/commit/e44731e04d255d7e2f0f66f369cf6f3ee6b23223))
* vr specific changes with merge ([b75853e](https://github.com/AtomCrafty/CommonLibSSE/commit/b75853e0d0d247b82fb5336f34252401de13e288))
* **VR:** BSInputDevice offsets ([#135](https://github.com/AtomCrafty/CommonLibSSE/issues/135)) ([cf14a90](https://github.com/AtomCrafty/CommonLibSSE/commit/cf14a90c47c4f44b5b7874b11261a9feddda3965)), closes [#134](https://github.com/AtomCrafty/CommonLibSSE/issues/134) [#86](https://github.com/AtomCrafty/CommonLibSSE/issues/86)
* **vr:** BSTimer layout ([#203](https://github.com/AtomCrafty/CommonLibSSE/issues/203)) ([d2ba4c0](https://github.com/AtomCrafty/CommonLibSSE/commit/d2ba4c05acc881b179c4e44c95b7fae851c6a714))
* **vr:** correct BSOpenVRControllerDevice layout ([#194](https://github.com/AtomCrafty/CommonLibSSE/issues/194)) ([b0b2bad](https://github.com/AtomCrafty/CommonLibSSE/commit/b0b2bad8b76de98a661f2f85e1f7608233c133aa))
* **VR:** correct MistMenu ([#195](https://github.com/AtomCrafty/CommonLibSSE/issues/195)) ([cc404d8](https://github.com/AtomCrafty/CommonLibSSE/commit/cc404d855e7f0f6f4e33f5698296e90fd64f5054))
* **vr:** correct PlayerCharacter VR/perk-entry-point layout ([#326](https://github.com/AtomCrafty/CommonLibSSE/issues/326)) ([b105ce1](https://github.com/AtomCrafty/CommonLibSSE/commit/b105ce17a26152a36d501a2debb50ea44aac9fac))
* **vr:** correct render-mode 24 enum name ([#330](https://github.com/AtomCrafty/CommonLibSSE/issues/330)) ([f905c52](https://github.com/AtomCrafty/CommonLibSSE/commit/f905c520a402b6891ab4c4f00184024681571664))
* **VR:** fix BGSShaderParticleGeometryData RE ([f77c621](https://github.com/AtomCrafty/CommonLibSSE/commit/f77c621758ce61f6b7ece0237c9517aa07332aab))
* **VR:** keycode inheritance in ButtonEvent ([7994cde](https://github.com/AtomCrafty/CommonLibSSE/commit/7994cdea317e8eea452c1fb7f85e79a7fb107daa))
* **VR:** light Accumulate signature ([9ce75a5](https://github.com/AtomCrafty/CommonLibSSE/commit/9ce75a538af8990d6f2b02304cbb58540fb77a4c))
* **VR:** NiCamera RE ([00b0142](https://github.com/AtomCrafty/CommonLibSSE/commit/00b01426962634a98f5f0044aa1dd1a9141b6fc9))
* **vr:** niskindata and bsgeometry runtime layouts ([#162](https://github.com/AtomCrafty/CommonLibSSE/issues/162)) ([2f53553](https://github.com/AtomCrafty/CommonLibSSE/commit/2f535530072827b8e8961f853232bec6b219ecff))
* **vr:** PlayerCharacter VR field layout ([#210](https://github.com/AtomCrafty/CommonLibSSE/issues/210)) ([0d03ce4](https://github.com/AtomCrafty/CommonLibSSE/commit/0d03ce46cff9312e2d436bc303a53f6a32199a55))
* **vr:** safe VR/AE runtime-data accessors ([#253](https://github.com/AtomCrafty/CommonLibSSE/issues/253)) ([18d6c10](https://github.com/AtomCrafty/CommonLibSSE/commit/18d6c101198b245d343fae2ad038669b9af0ae86))
* **VR:** select State runtime base by build layout ([#291](https://github.com/AtomCrafty/CommonLibSSE/issues/291)) ([9fbd154](https://github.com/AtomCrafty/CommonLibSSE/commit/9fbd154b0fe42c5673b41745eaac18a79875717b))
* **vr:** stop re-populating shared address table ([#259](https://github.com/AtomCrafty/CommonLibSSE/issues/259)) ([fd38fb4](https://github.com/AtomCrafty/CommonLibSSE/commit/fd38fb4181c0a98aac26f724355ac88bfa1877f2))
* **VR:** update ShadowmapDescriptor ([1ba6ce7](https://github.com/AtomCrafty/CommonLibSSE/commit/1ba6ce7e5cd9695c3027e0907e42e445027a89f9))
* **VR:** use atomics for lazy esl ([#141](https://github.com/AtomCrafty/CommonLibSSE/issues/141)) ([bbe0f49](https://github.com/AtomCrafty/CommonLibSSE/commit/bbe0f4911313a884e535d7d3bf45ed5ec4f0ba9d))
* **water:** correct TESWaterReflections signature ([#242](https://github.com/AtomCrafty/CommonLibSSE/issues/242)) ([8dbfc27](https://github.com/AtomCrafty/CommonLibSSE/commit/8dbfc279eabda80ea2f3daf738e706d33f1b56b5))
* xmake merge ([#78](https://github.com/AtomCrafty/CommonLibSSE/issues/78)) ([8593e41](https://github.com/AtomCrafty/CommonLibSSE/commit/8593e41c1f780b5b16b227f4f62e574d01e0ac3d))
* **xmake:** Add preprocessor flag ([#116](https://github.com/AtomCrafty/CommonLibSSE/issues/116)) ([ad86065](https://github.com/AtomCrafty/CommonLibSSE/commit/ad8606599fc7347c9cccefe2da75f9d1ebb4ff20))

### Performance Improvements

* address ai suggestions ([80f72e4](https://github.com/AtomCrafty/CommonLibSSE/commit/80f72e442f080aa5a1840124a4abb6105f6343fe))
* make all relocations static ([f62a94d](https://github.com/AtomCrafty/CommonLibSSE/commit/f62a94d27a21d7747516a51a9d759424a222deee))
* make more relocations static ([c19a5b4](https://github.com/AtomCrafty/CommonLibSSE/commit/c19a5b46efb8d84e651df69cd10a47e981b5ed0a))
* make more relocations static ([bd9cb72](https://github.com/AtomCrafty/CommonLibSSE/commit/bd9cb721d5bbfef5a74e10dd677afb8fed584f5c))

### Reverts

* Revert incompatible upstream changes ([a8fa182](https://github.com/AtomCrafty/CommonLibSSE/commit/a8fa1828fa7c1e941127cdac5a41da4dbac0bc1e))

### Miscellaneous Chores

* **license:** relicense to GPL-3.0-or-later ([#238](https://github.com/AtomCrafty/CommonLibSSE/issues/238)) ([12f8518](https://github.com/AtomCrafty/CommonLibSSE/commit/12f8518657cd525c7579a746e211c98bddacba6c))

## [7.4.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v7.3.0...v7.4.0) (2026-09-07)

### Features

* **water:** add BGSWaterCollisionManager types ([#338](https://github.com/alandtse/CommonLibSSE-NG/issues/338)) ([f684855](https://github.com/alandtse/CommonLibSSE-NG/commit/f68485576df7faf8b41026a09e3fde925031243f))

## [7.3.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v7.2.0...v7.3.0) (2026-09-07)

### Features

* **decal:** add BGSDecalManager::ApplyDecal binding ([#335](https://github.com/alandtse/CommonLibSSE-NG/issues/335)) ([6b1eac1](https://github.com/alandtse/CommonLibSSE-NG/commit/6b1eac17721e8ae13656cce25a598753487bd8a0))

### Bug Fixes

* **variable:** pack null handles as typed None ([#337](https://github.com/alandtse/CommonLibSSE-NG/issues/337)) ([e44731e](https://github.com/alandtse/CommonLibSSE-NG/commit/e44731e04d255d7e2f0f66f369cf6f3ee6b23223))

## [7.2.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v7.1.0...v7.2.0) (2026-09-03)

### Features

* **actor:** add PlayerCharacter::StartWaiting/Actor::StartSleeping ([#331](https://github.com/alandtse/CommonLibSSE-NG/issues/331)) ([8492509](https://github.com/alandtse/CommonLibSSE-NG/commit/84925090fc813f70686c27fae650933453af574e))
* **menu:** add MenuEventHandlerEx adapter ([#329](https://github.com/alandtse/CommonLibSSE-NG/issues/329)) ([140b776](https://github.com/alandtse/CommonLibSSE-NG/commit/140b776e4fc11095d6f172f594e899076b9c9886))

### Bug Fixes

* **vr:** correct render-mode 24 enum name ([#330](https://github.com/alandtse/CommonLibSSE-NG/issues/330)) ([f905c52](https://github.com/alandtse/CommonLibSSE-NG/commit/f905c520a402b6891ab4c4f00184024681571664))

## [7.1.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v7.0.0...v7.1.0) (2026-09-02)

### Features

* **havok:** expand havok RE coverage, fix 2 layout bugs ([#327](https://github.com/alandtse/CommonLibSSE-NG/issues/327)) ([231543d](https://github.com/alandtse/CommonLibSSE-NG/commit/231543d61bc511865f1954f3eb2768732452c1d6))

### Bug Fixes

* **inventory:** default IItemChangeVisitor dtors ([#328](https://github.com/alandtse/CommonLibSSE-NG/issues/328)) ([8339e6d](https://github.com/alandtse/CommonLibSSE-NG/commit/8339e6d37f66448144d8ee25afb6a0e1a5486bea))
* **vr:** correct PlayerCharacter VR/perk-entry-point layout ([#326](https://github.com/alandtse/CommonLibSSE-NG/issues/326)) ([b105ce1](https://github.com/alandtse/CommonLibSSE-NG/commit/b105ce17a26152a36d501a2debb50ea44aac9fac))

## [7.0.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.8.0...v7.0.0) (2026-08-30)

### ⚠ BREAKING CHANGES

* **state:** direct state->frameCount / ->insideFrame / ->useEarlyZ access no longer compiles on ENABLE_SKYRIM_AE builds; use State::GetFrameCount() / GetInsideFrame() / GetUseEarlyZ() instead.

Co-authored-by: Claude Sonnet 5 <noreply@anthropic.com>

### Bug Fixes

* **state:** version AE>=1.7.99 frame fields ([#325](https://github.com/alandtse/CommonLibSSE-NG/issues/325)) ([86adeb8](https://github.com/alandtse/CommonLibSSE-NG/commit/86adeb8fba59f88aa613185bf10c90442bb41241))

## [6.8.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.7.1...v6.8.0) (2026-08-30)

### Features

* **ni:** type NiBinaryExtraData/BSFaceGenBaseMorphExtraData ([#323](https://github.com/alandtse/CommonLibSSE-NG/issues/323)) ([ef8d249](https://github.com/alandtse/CommonLibSSE-NG/commit/ef8d249e805c82d4833ff7713ae1c2e7daf2ece3))
* **ni:** type NiTriShapeData/NiTriStripsData/NiTriStrips ([#322](https://github.com/alandtse/CommonLibSSE-NG/issues/322)) ([8fb03ef](https://github.com/alandtse/CommonLibSSE-NG/commit/8fb03eff4cfad6b2a7976df7760783e030555a57))
* **racesexmenu:** type headPart/slider fields ([#321](https://github.com/alandtse/CommonLibSSE-NG/issues/321)) ([8eccdad](https://github.com/alandtse/CommonLibSSE-NG/commit/8eccdad356726dc0f1d3449786c58d636242eb3f))

### Bug Fixes

* **menu:** correct AE id for BSTArray overload ([#317](https://github.com/alandtse/CommonLibSSE-NG/issues/317)) ([73a196a](https://github.com/alandtse/CommonLibSSE-NG/commit/73a196ab74a35bb67a12a9e27b4b715b01888b07))

## [6.7.1](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.7.0...v6.7.1) (2026-08-26)

### Bug Fixes

* **actor:** correct SetFireNode vtable slot ([#312](https://github.com/alandtse/CommonLibSSE-NG/issues/312)) ([902c58a](https://github.com/alandtse/CommonLibSSE-NG/commit/902c58a9fd3523e89e128539e2b1245e9fe5ef12)), closes [#311](https://github.com/alandtse/CommonLibSSE-NG/issues/311) [ersh1/Precision#4](https://github.com/ersh1/Precision/issues/4) [#311](https://github.com/alandtse/CommonLibSSE-NG/issues/311) [#311](https://github.com/alandtse/CommonLibSSE-NG/issues/311)

## [6.7.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.6.3...v6.7.0) (2026-08-24)

### Features

* flag for address library v5 compatibility ([#310](https://github.com/alandtse/CommonLibSSE-NG/issues/310)) ([d8b0acd](https://github.com/alandtse/CommonLibSSE-NG/commit/d8b0acd80b5dea2ef1e0549f78a36bd57ad5144d))

## [6.6.3](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.6.2...v6.6.3) (2026-08-23)

### Bug Fixes

* correct MapMenu/LocalMapMenu runtime-data layout ([#309](https://github.com/alandtse/CommonLibSSE-NG/issues/309)) ([7ae1c97](https://github.com/alandtse/CommonLibSSE-NG/commit/7ae1c9768c11cca293a1a4c9e6a0c55e8f4d55ae))

## [6.6.2](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.6.1...v6.6.2) (2026-08-23)

### Bug Fixes

* **state:** correct RUNTIME_DATA offset for 1.7.99 ([#307](https://github.com/alandtse/CommonLibSSE-NG/issues/307)) ([57cb667](https://github.com/alandtse/CommonLibSSE-NG/commit/57cb66769af52e3e3d2d073838d9303a07f0f743))
* **state:** rename unk055 to useEarlyZ ([#308](https://github.com/alandtse/CommonLibSSE-NG/issues/308)) ([cce62f1](https://github.com/alandtse/CommonLibSSE-NG/commit/cce62f1a0d82eeb9c9905fc865301b76c74bffbc))

## [6.6.1](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.6.0...v6.6.1) (2026-08-22)

### Bug Fixes

* **AE:** fix offset gaps in SkyrimVM/PlayerCharacter ([#306](https://github.com/alandtse/CommonLibSSE-NG/issues/306)) ([68ae73e](https://github.com/alandtse/CommonLibSSE-NG/commit/68ae73e1cb99cdf81cd406918531d0570fe1e332))

## [6.6.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.5.0...v6.6.0) (2026-08-22)

### Features

* **cmake:** add Linux-host cross-compile support via clang-cl+xwin ([#302](https://github.com/alandtse/CommonLibSSE-NG/issues/302)) ([848b3f9](https://github.com/alandtse/CommonLibSSE-NG/commit/848b3f9daace475aa49f539dee0c91c8e313b359)), closes [#300](https://github.com/alandtse/CommonLibSSE-NG/issues/300) [#215](https://github.com/alandtse/CommonLibSSE-NG/issues/215) [#215](https://github.com/alandtse/CommonLibSSE-NG/issues/215)

## [6.5.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.4.0...v6.5.0) (2026-08-22)

### Features

* **re:** model AE 1.7.99 layout changes ([#298](https://github.com/alandtse/CommonLibSSE-NG/issues/298)) ([9b1b041](https://github.com/alandtse/CommonLibSSE-NG/commit/9b1b041b9686525039e8ec587887ea29b749ab8f))

## [6.4.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.3.5...v6.4.0) (2026-08-21)

### Features

* **rel:** support AE 1.7.99 address library format 5 ([#299](https://github.com/alandtse/CommonLibSSE-NG/issues/299)) ([7b47c5a](https://github.com/alandtse/CommonLibSSE-NG/commit/7b47c5a8f1772ed2331aebdb7035fac48d3c19ca))

## [6.3.5](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.3.4...v6.3.5) (2026-08-21)

### Bug Fixes

* **rel:** find exe via GetModuleHandleW(nullptr) ([#295](https://github.com/alandtse/CommonLibSSE-NG/issues/295)) ([d38040b](https://github.com/alandtse/CommonLibSSE-NG/commit/d38040b8bf533b7611d7b59e752f3792a807a76f))

## [6.3.4](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.3.3...v6.3.4) (2026-08-18)

## [6.3.3](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.3.2...v6.3.3) (2026-08-18)

## [6.3.2](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.3.1...v6.3.2) (2026-08-16)

## [6.3.1](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.3.0...v6.3.1) (2026-08-15)

## [6.3.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.2.0...v6.3.0) (2026-08-14)

## [6.2.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.1.1...v6.2.0) (2026-08-12)

## [6.1.1](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.1.0...v6.1.1) (2026-08-07)

## [6.1.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v6.0.0...v6.1.0) (2026-08-05)

## [6.0.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v5.4.2...v6.0.0) (2026-07-31)

## [5.4.2](https://github.com/alandtse/CommonLibSSE-NG/compare/v5.4.1...v5.4.2) (2026-07-29)

## [5.4.1](https://github.com/alandtse/CommonLibSSE-NG/compare/v5.4.0...v5.4.1) (2026-07-29)

## [5.4.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v5.3.0...v5.4.0) (2026-07-28)

## [5.3.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v5.2.0...v5.3.0) (2026-07-28)

## [5.2.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v5.1.1...v5.2.0) (2026-07-28)

## [5.1.1](https://github.com/alandtse/CommonLibSSE-NG/compare/v5.1.0...v5.1.1) (2026-07-27)

## [5.1.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v5.0.0...v5.1.0) (2026-07-26)

## [5.0.0](https://github.com/alandtse/CommonLibSSE-NG/compare/v4.39.3...v5.0.0) (2026-07-26)

## [4.39.3](https://github.com/alandtse/CommonLibVR/compare/v4.39.2...v4.39.3) (2026-07-24)

## [4.39.2](https://github.com/alandtse/CommonLibVR/compare/v4.39.1...v4.39.2) (2026-07-22)

## [4.39.1](https://github.com/alandtse/CommonLibVR/compare/v4.39.0...v4.39.1) (2026-07-21)

## [4.39.0](https://github.com/alandtse/CommonLibVR/compare/v4.38.0...v4.39.0) (2026-07-20)

## [4.38.0](https://github.com/alandtse/CommonLibVR/compare/v4.37.0...v4.38.0) (2026-07-17)

## [4.37.0](https://github.com/alandtse/CommonLibVR/compare/v4.36.5...v4.37.0) (2026-07-13)

## [4.36.5](https://github.com/alandtse/CommonLibVR/compare/v4.36.4...v4.36.5) (2026-07-12)

## [4.36.4](https://github.com/alandtse/CommonLibVR/compare/v4.36.3...v4.36.4) (2026-07-12)

## [4.36.3](https://github.com/alandtse/CommonLibVR/compare/v4.36.2...v4.36.3) (2026-07-11)

## [4.36.2](https://github.com/alandtse/CommonLibVR/compare/v4.36.1...v4.36.2) (2026-07-06)

## [4.36.1](https://github.com/alandtse/CommonLibVR/compare/v4.36.0...v4.36.1) (2026-07-06)

## [4.36.0](https://github.com/alandtse/CommonLibVR/compare/v4.35.2...v4.36.0) (2026-07-06)

## [4.35.2](https://github.com/alandtse/CommonLibVR/compare/v4.35.1...v4.35.2) (2026-07-03)

## [4.35.1](https://github.com/alandtse/CommonLibVR/compare/v4.35.0...v4.35.1) (2026-07-03)

## [4.35.0](https://github.com/alandtse/CommonLibVR/compare/v4.34.1...v4.35.0) (2026-07-02)

## [4.34.1](https://github.com/alandtse/CommonLibVR/compare/v4.34.0...v4.34.1) (2026-07-02)

## [4.34.0](https://github.com/alandtse/CommonLibVR/compare/v4.33.2...v4.34.0) (2026-07-02)

## [4.33.2](https://github.com/alandtse/CommonLibVR/compare/v4.33.1...v4.33.2) (2026-07-01)

## [4.33.1](https://github.com/alandtse/CommonLibVR/compare/v4.33.0...v4.33.1) (2026-06-29)

## [4.33.0](https://github.com/alandtse/CommonLibVR/compare/v4.32.0...v4.33.0) (2026-06-27)

## [4.32.0](https://github.com/alandtse/CommonLibVR/compare/v4.31.0...v4.32.0) (2026-06-27)

## [4.31.0](https://github.com/alandtse/CommonLibVR/compare/v4.30.0...v4.31.0) (2026-06-20)

### Features

* **vr:** type BSOpenVRControllerDevice controller state ([#190](https://github.com/alandtse/CommonLibVR/issues/190)) ([1864851](https://github.com/alandtse/CommonLibVR/commit/1864851eafd11d4f829fb8666640806c647a4253))

## [4.30.0](https://github.com/alandtse/CommonLibVR/compare/v4.29.0...v4.30.0) (2026-06-20)

### Features

* add BSIStream with DecompressLipData ([#188](https://github.com/alandtse/CommonLibVR/issues/188)) ([9609035](https://github.com/alandtse/CommonLibVR/commit/96090356bf15751e819e5adcf78f3f8b4ed06cec))

## [4.29.0](https://github.com/alandtse/CommonLibVR/compare/v4.28.0...v4.29.0) (2026-06-17)

### Features

* **playercharacter:** add UsePoisonFromInventory ([#186](https://github.com/alandtse/CommonLibVR/issues/186)) ([3a2b0e5](https://github.com/alandtse/CommonLibVR/commit/3a2b0e5f2d91183fc0d659852b5d8b5ba35ec83b))
* **re:** add ShadowSceneNode::ResetScene ([#185](https://github.com/alandtse/CommonLibVR/issues/185)) ([c4ce876](https://github.com/alandtse/CommonLibVR/commit/c4ce8760be5037ce931f2000451d448039138dc0))

## [4.28.0](https://github.com/alandtse/CommonLibVR/compare/v4.27.0...v4.28.0) (2026-06-14)

### Features

* type discovered struct fields from Ghidra ([#184](https://github.com/alandtse/CommonLibVR/issues/184)) ([9813abe](https://github.com/alandtse/CommonLibVR/commit/9813abefd0c003e761940f74a01e8055adf97e30))

### Bug Fixes

* resolve packed enum IDs per-runtime ([#179](https://github.com/alandtse/CommonLibVR/issues/179)) ([fa60781](https://github.com/alandtse/CommonLibVR/commit/fa60781748569344fab2f51de1dd43ff71a28b3e))

## [4.27.0](https://github.com/alandtse/CommonLibVR/compare/v4.26.2...v4.27.0) (2026-06-12)

### Features

* add actor func, misc cleanup ([5904b41](https://github.com/alandtse/CommonLibVR/commit/5904b4179c0dd28555b87e3a2bb689170fb249f8))
* add actor funcs ([03c49b5](https://github.com/alandtse/CommonLibVR/commit/03c49b5bfc031a137bc20d93fb6785ad0f8db1c0))
* add adjustments from Clib-NG ([1239701](https://github.com/alandtse/CommonLibVR/commit/1239701a505f3da5604d1f013b66c9018917a061))
* add BGSConstructFormsInAllFilesMap::count ([b19c377](https://github.com/alandtse/CommonLibVR/commit/b19c37732f13951e1dc753262ff9c1966d3ba29a))
* merge po3 ([cf748d1](https://github.com/alandtse/CommonLibVR/commit/cf748d16f06c9442623f2e7f4fd4ff72d9c00f82))
* merge po3 ([d5f523c](https://github.com/alandtse/CommonLibVR/commit/d5f523cdf975064319f6c6bbdc34aada1007f5a0))
* player controls RE ([f0d2071](https://github.com/alandtse/CommonLibVR/commit/f0d2071e584547f85d9b603ec6b3a6101426b11b))
* RE MessageBox ([de3fac0](https://github.com/alandtse/CommonLibVR/commit/de3fac052bf1570320849c605dd2b79eac1dc526))

## [4.26.2](https://github.com/alandtse/CommonLibVR/compare/v4.26.1...v4.26.2) (2026-06-06)

### Bug Fixes

* MenuEventHandler VR vtable shift ([#177](https://github.com/alandtse/CommonLibVR/issues/177)) ([6b48ca9](https://github.com/alandtse/CommonLibVR/commit/6b48ca992424b3fa9b1a8c61758244da531b6ed1))
* remove phantom ISGraphicsTextureFilterMode IS effect ([#178](https://github.com/alandtse/CommonLibVR/issues/178)) ([5126c68](https://github.com/alandtse/CommonLibVR/commit/5126c68e8610b1b24a6a4ca092912e4b0afebf17))

## [4.26.1](https://github.com/alandtse/CommonLibVR/compare/v4.26.0...v4.26.1) (2026-06-05)

### Bug Fixes

* **prebuilt:** support multi-config generators ([#175](https://github.com/alandtse/CommonLibVR/issues/175)) ([3b7207a](https://github.com/alandtse/CommonLibVR/commit/3b7207a02f250cecdebbcac8c31292ff00c6c0e7))

## [4.26.0](https://github.com/alandtse/CommonLibVR/compare/v4.25.2...v4.26.0) (2026-06-05)

### Features

* **prebuilt:** superset, multi-config, CRT guard ([#174](https://github.com/alandtse/CommonLibVR/issues/174)) ([66f257a](https://github.com/alandtse/CommonLibVR/commit/66f257a44ba4041871730803ef8df4d8fe905932)), closes [#173](https://github.com/alandtse/CommonLibVR/issues/173) [#173](https://github.com/alandtse/CommonLibVR/issues/173) [open-shaders#103](https://github.com/alandtse/open-shaders/issues/103) [EngineFixesSkyrim64#10](https://github.com/alandtse/EngineFixesSkyrim64/issues/10)

## [4.25.2](https://github.com/alandtse/CommonLibVR/compare/v4.25.1...v4.25.2) (2026-06-04)

### Bug Fixes

* allocate correct size in Create() ([#172](https://github.com/alandtse/CommonLibVR/issues/172)) ([e85f13b](https://github.com/alandtse/CommonLibVR/commit/e85f13b9a0655f5d24bc532c90dbd392a613a07a)), closes [#120](https://github.com/alandtse/CommonLibVR/issues/120)

## [4.25.1](https://github.com/alandtse/CommonLibVR/compare/v4.25.0...v4.25.1) (2026-06-04)

### Bug Fixes

* **prebuilt:** auto-fetch in CI; relax options gate ([#171](https://github.com/alandtse/CommonLibVR/issues/171)) ([a988eaa](https://github.com/alandtse/CommonLibVR/commit/a988eaac26746c93f19df2bb0bfd7736a6d6d6d5))

## [4.25.0](https://github.com/alandtse/CommonLibVR/compare/v4.24.0...v4.25.0) (2026-06-04)

### Features

* add hkpProcessCollisionInput + hkpAgent3ProcessInput ([#165](https://github.com/alandtse/CommonLibVR/issues/165)) ([5da20d8](https://github.com/alandtse/CommonLibVR/commit/5da20d8e70d8222f299d802fffae02f772646a55))

## [4.24.0](https://github.com/alandtse/CommonLibVR/compare/v4.23.0...v4.24.0) (2026-06-04)

### Features

* **build:** auto-fetch prebuilt CommonLib on clean release tags (cmake) ([#170](https://github.com/alandtse/CommonLibVR/issues/170)) ([47c49c2](https://github.com/alandtse/CommonLibVR/commit/47c49c20570017f51abd698fd6171b18fedfd3e1)), closes [#169](https://github.com/alandtse/CommonLibVR/issues/169)

## [4.23.0](https://github.com/alandtse/CommonLibVR/compare/v4.22.0...v4.23.0) (2026-06-04)

### Features

* **build:** auto-fetch prebuilt CommonLib on clean release tags (xmake) ([#169](https://github.com/alandtse/CommonLibVR/issues/169)) ([e6dea13](https://github.com/alandtse/CommonLibVR/commit/e6dea1319a21f2d8f0a0e051076275bc7f93b4e0)), closes [#167](https://github.com/alandtse/CommonLibVR/issues/167)

## [4.22.0](https://github.com/alandtse/CommonLibVR/compare/v4.21.1...v4.22.0) (2026-06-03)

### Features

* **build:** publish prebuilt static-library bundles for xmake consumers ([#167](https://github.com/alandtse/CommonLibVR/issues/167)) ([32e1826](https://github.com/alandtse/CommonLibVR/commit/32e182628ad14d00d1f5a64d6ab6c9ede8be2e97))

## [4.21.1](https://github.com/alandtse/CommonLibVR/compare/v4.21.0...v4.21.1) (2026-06-01)

### Bug Fixes

* **vr:** niskindata and bsgeometry runtime layouts ([#162](https://github.com/alandtse/CommonLibVR/issues/162)) ([2f53553](https://github.com/alandtse/CommonLibVR/commit/2f535530072827b8e8961f853232bec6b219ecff))

## [4.21.0](https://github.com/alandtse/CommonLibVR/compare/v4.20.0...v4.21.0) (2026-05-31)

### Features

* MessageBoxMenu API + LoadGameMissingContentCallBack ([#160](https://github.com/alandtse/CommonLibVR/issues/160)) ([bb2c5c0](https://github.com/alandtse/CommonLibVR/commit/bb2c5c0072811f4dd40b8fb172f7fe3d892b2730))

## [4.20.0](https://github.com/alandtse/CommonLibVR/compare/v4.19.0...v4.20.0) (2026-05-30)

### Features

* **navmesh:** name path-builder and navmesh-search class hierarchy ([#151](https://github.com/alandtse/CommonLibVR/issues/151)) ([d191aec](https://github.com/alandtse/CommonLibVR/commit/d191aec7babedbe62c37d1da938d2cf8ad188ae0))
* **PlayerCharacter:** name VR layout, AE direct access, and VRPlayerHandData ([#152](https://github.com/alandtse/CommonLibVR/issues/152)) ([70d898a](https://github.com/alandtse/CommonLibVR/commit/70d898a31c1232f3de7bd45005883c98674376e6))

### Bug Fixes

* MagicTarget offsets ([#157](https://github.com/alandtse/CommonLibVR/issues/157)) ([2bedea6](https://github.com/alandtse/CommonLibVR/commit/2bedea60fe6db3e7bfde5b1488a506ece07dd8bd))
* remove redundant hkMemoryRouter.cpp ([#156](https://github.com/alandtse/CommonLibVR/issues/156)) ([2091b97](https://github.com/alandtse/CommonLibVR/commit/2091b97620b6e9bc1402ca3e114f57146beab696))

## [4.19.0](https://github.com/alandtse/CommonLibVR/compare/v4.18.0...v4.19.0) (2026-05-29)

### Features

* **BSEffectShaderProperty:** name emittanceColor and render passes ([#154](https://github.com/alandtse/CommonLibVR/issues/154)) ([adcd35c](https://github.com/alandtse/CommonLibVR/commit/adcd35cbd1bbf14a61a0767a5f72bd04d952662f))

## [4.18.0](https://github.com/alandtse/CommonLibVR/compare/v4.17.1...v4.18.0) (2026-05-10)

### Features

* **BSShaderRenderTargets:** name VR slot 114 ([#150](https://github.com/alandtse/CommonLibVR/issues/150)) ([02565ab](https://github.com/alandtse/CommonLibVR/commit/02565ab9d01dd250745ab0894aedff6a288c2f2a))

## [4.17.1](https://github.com/alandtse/CommonLibVR/compare/v4.17.0...v4.17.1) (2026-05-08)

### Bug Fixes

* **BSShadowLight:** GetIsDirectionalLight return ([#149](https://github.com/alandtse/CommonLibVR/issues/149)) ([2a5c01b](https://github.com/alandtse/CommonLibVR/commit/2a5c01b614078de99d3fa832063fa5177ea6f217))

## [4.17.0](https://github.com/alandtse/CommonLibVR/compare/v4.16.0...v4.17.0) (2026-05-02)

### Features

* merge po3 ([529d8f2](https://github.com/alandtse/CommonLibVR/commit/529d8f27a218bcd6f8f02acf9a26b847d545cf9b))

### Bug Fixes

* Missing include in TutorialMenu.cpp ([34a6cec](https://github.com/alandtse/CommonLibVR/commit/34a6cecffce5abe5fcf5b36aab1339e7bd77d6bb))

## [4.16.0](https://github.com/alandtse/CommonLibVR/compare/v4.15.1...v4.16.0) (2026-05-02)

### Features

* **VR:** identify BSVRInterface/BSOpenVR vtable ([#148](https://github.com/alandtse/CommonLibVR/issues/148)) ([24f7c39](https://github.com/alandtse/CommonLibVR/commit/24f7c39b93600e83f35615bfc2ded3cb9b717910))

## [4.15.1](https://github.com/alandtse/CommonLibVR/compare/v4.15.0...v4.15.1) (2026-05-01)

### Bug Fixes

* add runtime data acessor for bssubindextrishape ([#147](https://github.com/alandtse/CommonLibVR/issues/147)) ([c3c3849](https://github.com/alandtse/CommonLibVR/commit/c3c3849900cb7604f71d6095799f75c88a403e4f))

## [4.15.0](https://github.com/alandtse/CommonLibVR/compare/v4.14.0...v4.15.0) (2026-04-27)

### Features

* add GetSettingRef accessor ([b5b6ed3](https://github.com/alandtse/CommonLibVR/commit/b5b6ed35a9c04fade3ee391054eda64c048e57e0))

## [4.14.0](https://github.com/alandtse/CommonLibVR/compare/v4.13.1...v4.14.0) (2026-04-12)

### Features

* add Actor::CalculateLOS ([#143](https://github.com/alandtse/CommonLibVR/issues/143)) ([04857f5](https://github.com/alandtse/CommonLibVR/commit/04857f53a5250d915ef9b8d9d20480be97e4c5eb))

## [4.13.1](https://github.com/alandtse/CommonLibVR/compare/v4.13.0...v4.13.1) (2026-04-12)

### Bug Fixes

* Main members ([#144](https://github.com/alandtse/CommonLibVR/issues/144)) ([4e8a9d5](https://github.com/alandtse/CommonLibVR/commit/4e8a9d585d5182e8b5293477c52b174793c7e1fe))

## [4.13.0](https://github.com/alandtse/CommonLibVR/compare/v4.12.0...v4.13.0) (2026-04-09)

### Features

* add re from enginefixes ng porting ([#142](https://github.com/alandtse/CommonLibVR/issues/142)) ([e4e8609](https://github.com/alandtse/CommonLibVR/commit/e4e8609af47c75045b7345434064edf42397975f))

### Bug Fixes

* handle includeLength<0 context hooks with correct public RIP ([#139](https://github.com/alandtse/CommonLibVR/issues/139)) ([01d2af7](https://github.com/alandtse/CommonLibVR/commit/01d2af79d2cf0f9b7fe2944213acdc06c8e6e9ac))
* **VR:** use atomics for lazy esl ([#141](https://github.com/alandtse/CommonLibVR/issues/141)) ([bbe0f49](https://github.com/alandtse/CommonLibVR/commit/bbe0f4911313a884e535d7d3bf45ed5ec4f0ba9d))

## [4.12.0](https://github.com/alandtse/CommonLibVR/compare/v4.11.0...v4.12.0) (2026-04-08)

### Features

* **VR:** allow lazy loading of esl datahandler ([#140](https://github.com/alandtse/CommonLibVR/issues/140)) ([7df3e9c](https://github.com/alandtse/CommonLibVR/commit/7df3e9cb88f4285fccc6b9342cef48b52055fa0f))

## [4.11.0](https://github.com/alandtse/CommonLibVR/compare/v4.10.0...v4.11.0) (2026-04-02)

### Features

* RE ImageSpaceManager and TESWaterSystem ([41fa218](https://github.com/alandtse/CommonLibVR/commit/41fa2184cd99c1676015c0afead70db1f450c9df))
* RE NavMesh ([bae6765](https://github.com/alandtse/CommonLibVR/commit/bae6765d340d07c30e0b2230d7c613e61f937e5f))

## [4.10.0](https://github.com/alandtse/CommonLibVR/compare/v4.9.0...v4.10.0) (2026-03-26)

### Features

* Improved NiPick a bit more, added helpful comments to some members ([bb18ccd](https://github.com/alandtse/CommonLibVR/commit/bb18ccdba4760b749a0bd7f6659e5495b6cfca38))
* merge po3 ([1160f62](https://github.com/alandtse/CommonLibVR/commit/1160f628e01c6db386071e8642c56add36fdd8c9))
* RE NiPick more ([a3829d4](https://github.com/alandtse/CommonLibVR/commit/a3829d497258bcbc90b8858fc2b5fb1d057ec549))

## [4.9.0](https://github.com/alandtse/CommonLibVR/compare/v4.8.2...v4.9.0) (2026-03-23)

### Features

* add contexthook ([90a8f2f](https://github.com/alandtse/CommonLibVR/commit/90a8f2fe590025ccfeee5a7e1d33c352ea1764d8))

## [4.8.2](https://github.com/alandtse/CommonLibVR/compare/v4.8.1...v4.8.2) (2026-03-22)

### Bug Fixes

* shadowscenenode multiruntime support ([f9734d9](https://github.com/alandtse/CommonLibVR/commit/f9734d9df06ac4b2c5bb069a17ca5081c882919b))

## [4.8.1](https://github.com/alandtse/CommonLibVR/compare/v4.8.0...v4.8.1) (2026-03-22)

### Bug Fixes

* **VR:** BSInputDevice offsets ([#135](https://github.com/alandtse/CommonLibVR/issues/135)) ([cf14a90](https://github.com/alandtse/CommonLibVR/commit/cf14a90c47c4f44b5b7874b11261a9feddda3965)), closes [#134](https://github.com/alandtse/CommonLibVR/issues/134) [#86](https://github.com/alandtse/CommonLibVR/issues/86)

## [4.8.0](https://github.com/alandtse/CommonLibVR/compare/v4.7.1...v4.8.0) (2026-03-19)

### Features

* add more RE for shadow rendering ([fcbbd51](https://github.com/alandtse/CommonLibVR/commit/fcbbd515fef472447e6b77e06a53453529e1c322))

## [4.7.1](https://github.com/alandtse/CommonLibVR/compare/v4.7.0...v4.7.1) (2026-03-15)

### Bug Fixes

* **VR:** update ShadowmapDescriptor ([1ba6ce7](https://github.com/alandtse/CommonLibVR/commit/1ba6ce7e5cd9695c3027e0907e42e445027a89f9))

## [4.7.0](https://github.com/alandtse/CommonLibVR/compare/v4.6.1...v4.7.0) (2026-03-12)

### Features

* add NiSourceTexture::resourceStream ([e34303c](https://github.com/alandtse/CommonLibVR/commit/e34303c7a88e2065d4da475f208c776e8be79500))

## [4.6.1](https://github.com/alandtse/CommonLibVR/compare/v4.6.0...v4.6.1) (2026-03-06)

### Bug Fixes

* BSShader, Renderer, RendererShadowState ([9cf0f72](https://github.com/alandtse/CommonLibVR/commit/9cf0f72222664d1a6d9d131196cd93e3df91081d))

## [4.6.0](https://github.com/alandtse/CommonLibVR/compare/v4.5.1...v4.6.0) (2026-03-06)

### Features

* add hkaSkeleton, hkaBone, and BSFlattenedBoneTree classes ([86d00ed](https://github.com/alandtse/CommonLibVR/commit/86d00ed7009176e536543aceb871b48305a150b6))
* add hkLocalFrame classes and hkaSkeleton destructor ([1b9e5ce](https://github.com/alandtse/CommonLibVR/commit/1b9e5ceff16c9866aaf72503ccbd24e544dfda26))
* add hkLocalFrame headers to Skyrim.h (woops) ([3e5675c](https://github.com/alandtse/CommonLibVR/commit/3e5675c5933c75116a6f4341cc0fe056d6409a06))
* merge po3 ([a57a760](https://github.com/alandtse/CommonLibVR/commit/a57a760c4b4ad970c567261afd2c0753f67daeb9))

## [4.5.1](https://github.com/alandtse/CommonLibVR/compare/v4.5.0...v4.5.1) (2026-03-05)

### Bug Fixes

* **VR:** light Accumulate signature ([9ce75a5](https://github.com/alandtse/CommonLibVR/commit/9ce75a538af8990d6f2b02304cbb58540fb77a4c))
* **VR:** NiCamera RE ([00b0142](https://github.com/alandtse/CommonLibVR/commit/00b01426962634a98f5f0044aa1dd1a9141b6fc9))

## [4.5.0](https://github.com/alandtse/CommonLibVR/compare/v4.4.0...v4.5.0) (2026-03-03)

### Features

* update BSStorage, IVMSaveLoadInterface, VM ([7275c85](https://github.com/alandtse/CommonLibVR/commit/7275c852736683f2ceab9d47f7a50adf8f295293))

### Bug Fixes

* accumulate signature ([c02cf2a](https://github.com/alandtse/CommonLibVR/commit/c02cf2a997b324dc78cfa9c60630b6224c576554))

## [4.4.0](https://github.com/alandtse/CommonLibVR/compare/v4.3.0...v4.4.0) (2026-02-24)

### Features

* sync with max-su-2019 ([#124](https://github.com/alandtse/CommonLibVR/issues/124)) ([31c5709](https://github.com/alandtse/CommonLibVR/commit/31c570903da426e87f3180d4d0eb6edf4db3f047))

## [4.3.0](https://github.com/alandtse/CommonLibVR/compare/v4.2.0...v4.3.0) (2026-02-22)

### Features

* merge po3 ([d3e2a39](https://github.com/alandtse/CommonLibVR/commit/d3e2a3931bd7119932b86e633b18d9b44561626b))

## [4.2.0](https://github.com/alandtse/CommonLibVR/compare/v4.1.3...v4.2.0) (2026-02-05)

### Features

* sync with po3 ([61e5172](https://github.com/alandtse/CommonLibVR/commit/61e51729a2f793c86ba85b2b4b8545aeeebc769e))

## [4.1.3](https://github.com/alandtse/CommonLibVR/compare/v4.1.2...v4.1.3) (2026-01-28)

### Bug Fixes

* GetActiveEffectList and Actor inheritance([#117](https://github.com/alandtse/CommonLibVR/issues/117)) ([f039dcf](https://github.com/alandtse/CommonLibVR/commit/f039dcf97d2e6d0fa7bffd8f1f71f137749ea6df))

## [4.1.2](https://github.com/alandtse/CommonLibVR/compare/v4.1.1...v4.1.2) (2026-01-26)

### Bug Fixes

* **xmake:** Add preprocessor flag ([#116](https://github.com/alandtse/CommonLibVR/issues/116)) ([ad86065](https://github.com/alandtse/CommonLibVR/commit/ad8606599fc7347c9cccefe2da75f9d1ebb4ff20))

## [4.1.1](https://github.com/alandtse/CommonLibVR/compare/v4.1.0...v4.1.1) (2026-01-25)

### Bug Fixes

* remove deprecated Actor::GetRider ([cd43719](https://github.com/alandtse/CommonLibVR/commit/cd437192789620935eb8652bb39b89e915a92959))

## [4.1.0](https://github.com/alandtse/CommonLibVR/compare/v4.0.0...v4.1.0) (2026-01-25)

### Features

* **VR:** add GetActiveEffectList shim ([#115](https://github.com/alandtse/CommonLibVR/issues/115)) ([7450dcf](https://github.com/alandtse/CommonLibVR/commit/7450dcfb37f7ba68043fe3833fdbfba97f3fd489))

## [4.0.0](https://github.com/alandtse/CommonLibVR/compare/v3.7.0...v4.0.0) (2026-01-24)

### ⚠ BREAKING CHANGES

* Fixed incorrect macro usage in State.h that caused VR to use wrong offset (0x58 instead of 0x60).

The commit 1fc569596 incorrectly used RUNTIME_DATA_ACCESSOR_VERSIONED instead of
RUNTIME_MEMBER_ACCESSOR_VERSIONED for State::GetRuntimeData(). This caused VR builds
to access data at the wrong memory offset, leading to crashes.

This is marked as breaking to signify the fork from upstream CommonLibSSE-NG with
critical VR fixes applied.

### Features

* `REX` ([cd17f79](https://github.com/alandtse/CommonLibVR/commit/cd17f79a030de4d35e0d890f2358cfcb79674d81))
* `REX` ([29b9ca1](https://github.com/alandtse/CommonLibVR/commit/29b9ca1ff4ef76e3ea5845da4fb80071be72f8b3))
* `SerializationInterface` ([fcbf923](https://github.com/alandtse/CommonLibVR/commit/fcbf923552073182340fcf12681b8b771bd05d61))
* `SerializationInterface` ([323dfa9](https://github.com/alandtse/CommonLibVR/commit/323dfa9ae968e857c2513a4c0cdfc86e5cad7ccd))
* actor funcs ([651afe9](https://github.com/alandtse/CommonLibVR/commit/651afe978f7fd4616b5d66eb57d2ba3ee01f9c87))
* Add `KEEP_FOR_RE` macro to CLIB-VR ([#26](https://github.com/alandtse/CommonLibVR/issues/26)) ([06182ef](https://github.com/alandtse/CommonLibVR/commit/06182ef6913131eb477a6dbf92b4c97b7f446a4a))
* add 1.5.97 IDs if possible ([5655a1a](https://github.com/alandtse/CommonLibVR/commit/5655a1af859478470b24ad05a2ecd6c706525ba2))
* add arrestTarget to AIProcess ([f080217](https://github.com/alandtse/CommonLibVR/commit/f080217bc29f98063f824261d78cae9a29d8ca78))
* add BSGraphics::State::SetCameraData function ([8c8780b](https://github.com/alandtse/CommonLibVR/commit/8c8780b6d78c06e882cb34060d88e197a7008fe1))
* add BSOpenVR::GetCleanIVROverlay ([24bd3ac](https://github.com/alandtse/CommonLibVR/commit/24bd3ac4f53b16af9a0741cf5bdfe3089d5774d5))
* add BSOpenVR::GetRenderTargetSize ([8726ee9](https://github.com/alandtse/CommonLibVR/commit/8726ee9dea1bb57b1e22bfa7fd033467e2391825))
* add CreateDuplicateForm param ([3531be6](https://github.com/alandtse/CommonLibVR/commit/3531be6ab759812cb970d223e466817dc786157f))
* add defines to CMakeLists ([c679be1](https://github.com/alandtse/CommonLibVR/commit/c679be1b674f4c7d7b5dc172c2dcf5085d68b7b8))
* add formatters for NiColor and NiColorA ([2987d13](https://github.com/alandtse/CommonLibVR/commit/2987d13270710db75b0cb99c7f75fa228887a398))
* add GetBodyImpl() ([7880df5](https://github.com/alandtse/CommonLibVR/commit/7880df58607aa0327789c9b2df716ec32ed13be0))
* add getters for BSShaderProperty ([cd3362a](https://github.com/alandtse/CommonLibVR/commit/cd3362a875628d808df242d447f0e22bdea56d45))
* add initial skyrimvresl support ([ad83b61](https://github.com/alandtse/CommonLibVR/commit/ad83b610df60bae67e13a1d1cbeb26d7ed197b9b))
* add initial skyrimvresl support ([fe699b1](https://github.com/alandtse/CommonLibVR/commit/fe699b180597b36d9914c0e88ff664ac33679f60))
* add missing story manager events ([560429c](https://github.com/alandtse/CommonLibVR/commit/560429c23f0b6f3fa8287f34ab6b7285226d43c6))
* add nipoint3 fmt ([4c552f8](https://github.com/alandtse/CommonLibVR/commit/4c552f8bd8015c651968283ee130e45b34854b07))
* add opt in to require minimal VR address lib version ([#48](https://github.com/alandtse/CommonLibVR/issues/48)) ([6b0750a](https://github.com/alandtse/CommonLibVR/commit/6b0750aa6c991b2f6b26b46033e0e51a655c824e))
* add opt in to require minimal VR address lib version ([#48](https://github.com/alandtse/CommonLibVR/issues/48)) ([#50](https://github.com/alandtse/CommonLibVR/issues/50)) ([735fa6d](https://github.com/alandtse/CommonLibVR/commit/735fa6dae8ec72966ee02673dd689c6516d49f71))
* add options to CMakeLists ([cf2128c](https://github.com/alandtse/CommonLibVR/commit/cf2128cff50a07e533d84cb267fb9a503fbd1863))
* add RE for some shader properties, utility shader and shader emitters ([4a90d92](https://github.com/alandtse/CommonLibVR/commit/4a90d92702d8bdc455c2b16e447d7940ab9eb3ca))
* add runtime HUD_MESSAGE_TYPE getters ([e0c1da7](https://github.com/alandtse/CommonLibVR/commit/e0c1da776dc3d0be0d41dcf70f3d788315e61f69))
* add SelectedRefHandle address for 1130 ([97b7f3c](https://github.com/alandtse/CommonLibVR/commit/97b7f3cf35f0a3858148cc0f0094064000391ad3))
* add Sky::IsDaytime ([8e237b5](https://github.com/alandtse/CommonLibVR/commit/8e237b5dfe2aaaf780b97dd61d6ca1c624d9e7a8))
* add some vtables ([990aa2c](https://github.com/alandtse/CommonLibVR/commit/990aa2c903abb4f3b992012b9f4616fac3f06f3c))
* add SSE 1170 ([c5d4f17](https://github.com/alandtse/CommonLibVR/commit/c5d4f170b7d37658d6988f201aaabaa973695e4a))
* add std::format specializations ([46b48f9](https://github.com/alandtse/CommonLibVR/commit/46b48f9ca601dcfec2046ed89bb113963561340b))
* add support for cs imgui ([cac175f](https://github.com/alandtse/CommonLibVR/commit/cac175fef91df22ae68f185040f093dae601add2))
* add support for plugin install and package ([13bd549](https://github.com/alandtse/CommonLibVR/commit/13bd5496df5ef969606883c9e54b53e83f6f0041))
* add terrain RE ([b944c26](https://github.com/alandtse/CommonLibVR/commit/b944c268414dd714a03dc54ab4a9b43eaa442a2a))
* add total member for NiFile ([c96f770](https://github.com/alandtse/CommonLibVR/commit/c96f770fc920864696e7d1524ce5c43c3b829fd0))
* add total member for NiFile ([6599897](https://github.com/alandtse/CommonLibVR/commit/6599897791e500d3a27c3c98b3d0b1a39f8e2bdc))
* add Vector3 fmt ([771a38a](https://github.com/alandtse/CommonLibVR/commit/771a38ae5510ac9cabd2be1b2d613ad756bd7d94))
* add verifying safe_write and safe_fill ([922ea16](https://github.com/alandtse/CommonLibVR/commit/922ea16222102251a2ab2d9143344526012189fc))
* add VR Bow State RE ([#46](https://github.com/alandtse/CommonLibVR/issues/46)) ([8e2e2fd](https://github.com/alandtse/CommonLibVR/commit/8e2e2fd8371ada5066215ca80aa4d5c4da06fb9d))
* Add VR Bow State RE ([#47](https://github.com/alandtse/CommonLibVR/issues/47)) ([2afe3d5](https://github.com/alandtse/CommonLibVR/commit/2afe3d5c56b17cf4e06612a316a5548c367d2769))
* add vr HUD_MESSAGE_TYPE ([9558939](https://github.com/alandtse/CommonLibVR/commit/9558939c7e748be3505a7bdad6ed3163417753c9))
* add vr HUD_MESSAGE_TYPE ([e09c17c](https://github.com/alandtse/CommonLibVR/commit/e09c17c33f6739492d4f1fc82fcd61bb76c08f9a))
* Additions for PBR. ([0d00e82](https://github.com/alandtse/CommonLibVR/commit/0d00e8275247e13fedca98d4a717ad2c7ed6a36e))
* BehaviourGraph activeNodes data. ([629a21f](https://github.com/alandtse/CommonLibVR/commit/629a21fe019ca567dd2a2caf023bc6a5136d7994))
* better handling of toml paths ([abce9f6](https://github.com/alandtse/CommonLibVR/commit/abce9f6bbad0610d36d02a8366cebc7f26d9cb98))
* bhkRigidBodyT ([cd83eb5](https://github.com/alandtse/CommonLibVR/commit/cd83eb52bcd4d930434838fe9c414d31640e3fe3))
* BSComputeShader and some improvements for BSImagespaceSahder. ([8938850](https://github.com/alandtse/CommonLibVR/commit/8938850441f46d1a5db5e606e6d327ee8b3e0709))
* BSImagespaceShader RE. ([73f288f](https://github.com/alandtse/CommonLibVR/commit/73f288fc13737f4f224bbbcb4065e7e05e91ccf6))
* change ShaderFlags to stl:enumeration ([2cce664](https://github.com/alandtse/CommonLibVR/commit/2cce664040e9338130ee4a51f87a2a1b6cba9f15))
* combat stuff ([9f67e4b](https://github.com/alandtse/CommonLibVR/commit/9f67e4b91d698e8591cb71dfd5fab8159e9c6b4d))
* convert stl::enumeration to REX::EnumSet ([7973641](https://github.com/alandtse/CommonLibVR/commit/797364141a3b2791392e6ce5399acb6039426438))
* don't build by default when subproject ([d01ae9b](https://github.com/alandtse/CommonLibVR/commit/d01ae9bb8127f106d29214bb1b62b7bf3a6ca7c8))
* even more combat RE ([ed7e087](https://github.com/alandtse/CommonLibVR/commit/ed7e087aa4501481ba23e3ba0707a8dec68ac273))
* expose VRcompiledFileCollection ([6089216](https://github.com/alandtse/CommonLibVR/commit/6089216a56af68f4527932ec96bf2f76ac864346))
* improve settings ([ebfda8b](https://github.com/alandtse/CommonLibVR/commit/ebfda8b7d4e085dbeb6f028286fa3c217826e019))
* inline all offsets and remove Offsets.h ([9f44259](https://github.com/alandtse/CommonLibVR/commit/9f44259eed6696b712a9290d9100572417c323af))
* make log default to true ([673d3da](https://github.com/alandtse/CommonLibVR/commit/673d3daee663eeae525834bb82cb5f6fde2143c2))
* migrate to toml11, add toml saving ([04d5a27](https://github.com/alandtse/CommonLibVR/commit/04d5a27b9cd8784b0563e193010068ec1ca353df))
* misc ([a371f83](https://github.com/alandtse/CommonLibVR/commit/a371f83d02be628b96de22d2e792c8c86169088d))
* misc ([93d73f1](https://github.com/alandtse/CommonLibVR/commit/93d73f18d24105067c5f5fbdf5e206b6539a6928))
* misc RE ([80bea41](https://github.com/alandtse/CommonLibVR/commit/80bea4161ee58fe3b0738ecd9f217cd3ee6cae80))
* misc RE ([2fa9e3c](https://github.com/alandtse/CommonLibVR/commit/2fa9e3cbb2182712640a8f65301aa77c2aa99065))
* misc RE ([97f711a](https://github.com/alandtse/CommonLibVR/commit/97f711a28c59b4b61a68c87dcbe2fd3f92fc11f7))
* Missing CameraStates. ([24537fb](https://github.com/alandtse/CommonLibVR/commit/24537fb74c3f4453d8a9ee85e8c9e6af35a75182))
* more ([978b93e](https://github.com/alandtse/CommonLibVR/commit/978b93e1abe60a809ff95bb0258dc20859e77f17))
* more combat ([baf0b07](https://github.com/alandtse/CommonLibVR/commit/baf0b074a8ef5324bf2cc127e3f2f90dd8cf68f9))
* more misc stuff ([060ab3f](https://github.com/alandtse/CommonLibVR/commit/060ab3f099874d845bad1456d9120d04cd93e296))
* more stuff ([8c2de4a](https://github.com/alandtse/CommonLibVR/commit/8c2de4aca4bc6703d85637537a027f82fef9c2e2))
* port api helpers from commonlibf4 ([692f213](https://github.com/alandtse/CommonLibVR/commit/692f213d79a2049fa7b1ad7dc46d47bf06ac8416))
* portals stuff RE. ([677e337](https://github.com/alandtse/CommonLibVR/commit/677e337d1f2473d112eaa44b335878977af2fec0))
* portals stuff RE. ([1ac5d9d](https://github.com/alandtse/CommonLibVR/commit/1ac5d9d12ca828300194be193b974818d208816c))
* RE BSOpenVR ([#22](https://github.com/alandtse/CommonLibVR/issues/22)) ([759b592](https://github.com/alandtse/CommonLibVR/commit/759b592de73f05cfac229bdbb03bf034aa66c1d2))
* RE BSOpenVR ([#45](https://github.com/alandtse/CommonLibVR/issues/45)) ([56938a9](https://github.com/alandtse/CommonLibVR/commit/56938a9cd74d8d76661dace91e373eef0418e966))
* re COpenVRContext ([ee8cd57](https://github.com/alandtse/CommonLibVR/commit/ee8cd57747630b8dd1059bd67f10d3ff9439d142))
* RE ImageSpaceManager rect members ([0acb02b](https://github.com/alandtse/CommonLibVR/commit/0acb02b7e09a63cf063dfb6a731c604969b9f593))
* RE NiPick ([711bae5](https://github.com/alandtse/CommonLibVR/commit/711bae55f0fe702992aba1c781b3e602a615fcf4))
* RE NiTriShape ([e906fbd](https://github.com/alandtse/CommonLibVR/commit/e906fbda7cfdbbef1c30935083a006cf3f48991a))
* Relocation::write_func ([76e826d](https://github.com/alandtse/CommonLibVR/commit/76e826dc759b95eed50f6c1b57f14a82b1a355b4))
* remove `stl::enumeration` ([37210f9](https://github.com/alandtse/CommonLibVR/commit/37210f94209f4fffc70a50ad3d4db933b367ab53))
* REX json impl ([5e597e8](https://github.com/alandtse/CommonLibVR/commit/5e597e86f93da31275781bc4b0dcc553dc441b72))
* REX: initial ini, toml support ([317481b](https://github.com/alandtse/CommonLibVR/commit/317481ba152f21fcc2cb120df4580b1016d51d33))
* separate REX defs; ini, toml, and json work ([cc0fe3c](https://github.com/alandtse/CommonLibVR/commit/cc0fe3cb1179ee9152387775b12e70cb676c49d3))
* shadow lights RE. ([c679dd8](https://github.com/alandtse/CommonLibVR/commit/c679dd8ecf72eb51a96a1d046d4d28d72dc014b4))
* simplify formatter's ([dcc6022](https://github.com/alandtse/CommonLibVR/commit/dcc6022f0950a31d2294228839d9bbe300b29562))
* swap renderTargets to use RENDER_TARGET ([0b92b1a](https://github.com/alandtse/CommonLibVR/commit/0b92b1aad79c22b9a0620c4bdd244e9f4ad94fea))
* terrain system, tesfile, console RE ([#87](https://github.com/alandtse/CommonLibVR/issues/87)) ([801ec29](https://github.com/alandtse/CommonLibVR/commit/801ec29d8dd19c553bafc14f77853dbe5cb5acb3))
* use `REX::EnumSet` + clang format ([163a507](https://github.com/alandtse/CommonLibVR/commit/163a507d947d45493aed684c24cf37069ba04266))
* **VR:** add bsshadowlight RE ([4833031](https://github.com/alandtse/CommonLibVR/commit/48330316d24baf2411577bcbb2c779e177c997ba))
* **VR:** add missing ISCopyDepthBuffer_DR ([f343b8c](https://github.com/alandtse/CommonLibVR/commit/f343b8cf75cace4ff942ef744ea34c406aa7f8e2))
* **VR:** add packed ImageSpaceEffectEnum ([d50cd96](https://github.com/alandtse/CommonLibVR/commit/d50cd96b8016a5ecf89c744abe860bfb0e23e98c))
* **VR:** add rendertargets ([784614c](https://github.com/alandtse/CommonLibVR/commit/784614c735040dde053ab5a9cd02f66ddbd40144))

### Bug Fixes

* add file nullptr check ([543c8e9](https://github.com/alandtse/CommonLibVR/commit/543c8e99ddea94cf109968e8f0839862f5e516a9)), closes [#9](https://github.com/alandtse/CommonLibVR/issues/9)
* add getters to BSShadowDirectionalLight ([#81](https://github.com/alandtse/CommonLibVR/issues/81)) ([379af33](https://github.com/alandtse/CommonLibVR/commit/379af33c1f391ed0e87da009044dedf20b030683))
* add includes, minor tweaks ([1b8dc45](https://github.com/alandtse/CommonLibVR/commit/1b8dc45fb0a13a0851571f7a57d4377232848f5f))
* add missing a_userEvent parameter to AddButtonEvent ([794e002](https://github.com/alandtse/CommonLibVR/commit/794e002091e1b8ee084ad3d4f2be3679111652c2))
* add missing BSShaderProperty funcs ([#58](https://github.com/alandtse/CommonLibVR/issues/58)) ([2f0735a](https://github.com/alandtse/CommonLibVR/commit/2f0735ad57b5cdbbfd427ce07ef92ca4f0249fc2))
* add missing ExtraLevCreaModifier destructor implementation ([53e7de3](https://github.com/alandtse/CommonLibVR/commit/53e7de3d3d03466f0c70de86903830191c54ba9b))
* add missing GetRuntimeData accessor to FaderMenu ([8f5cd17](https://github.com/alandtse/CommonLibVR/commit/8f5cd175b8e1f899732f38031003e79b3ec2e2a7))
* add missing handler ([4a4ffb9](https://github.com/alandtse/CommonLibVR/commit/4a4ffb96a6ef6856c53f3c51074c8fb83e7c14f0))
* add some runtime protection and fix some possible crashes ([d8cd383](https://github.com/alandtse/CommonLibVR/commit/d8cd38319725f8e0f312f146935a9c3730f75ce2))
* added WMR controller values to INPUT_DEVICE enum ([9b55449](https://github.com/alandtse/CommonLibVR/commit/9b554497a73312512f47c1c799d76bdd224046db))
* added WMR controller values to INPUT_DEVICE enum ([618db16](https://github.com/alandtse/CommonLibVR/commit/618db16f21d2ea4b99e2ff9940ff9bbe0240380f))
* adjust TESForm Recordflag enum ([21c1c39](https://github.com/alandtse/CommonLibVR/commit/21c1c3976998c584481f3a77ba62880355de2879))
* AE relocation ID for BGSFootstepManager::GetSingleton() ([#76](https://github.com/alandtse/CommonLibVR/issues/76)) ([52f49e8](https://github.com/alandtse/CommonLibVR/commit/52f49e8b8c01eed4a35e2b02b0d435c27e3cd217))
* BGSDefaultObjectManager::GetObject lookup failure ([#98](https://github.com/alandtse/CommonLibVR/issues/98)) ([c41cdb7](https://github.com/alandtse/CommonLibVR/commit/c41cdb7a16d90e061a2fae963d4d7eab70717bf4))
* BSSmallBlockAllocator.h ([#88](https://github.com/alandtse/CommonLibVR/issues/88)) ([8319090](https://github.com/alandtse/CommonLibVR/commit/8319090b0db4a9de6ffd920d16cdcec9a6cb769d))
* BSSmallBlockAllocator.h ([#89](https://github.com/alandtse/CommonLibVR/issues/89)) ([2c21b06](https://github.com/alandtse/CommonLibVR/commit/2c21b06f0222ba1a0947ee07b613ac652ee26b54))
* build and follow sse naming standard ([b191316](https://github.com/alandtse/CommonLibVR/commit/b19131697b9ffaa6e9c12f0b9df00349d50323e8))
* ButtonEvent inheritence ([7ce496a](https://github.com/alandtse/CommonLibVR/commit/7ce496a90b09e3e0e47b062a4fc954a972613cc7))
* camera states ([8a01918](https://github.com/alandtse/CommonLibVR/commit/8a0191840cb9b008aff2b5733da0419a3c74cad9))
* clang-cl ([65b9e19](https://github.com/alandtse/CommonLibVR/commit/65b9e1981d31e1afe1f01c49579c2391d0d5806e))
* clang-cl warnings ([#83](https://github.com/alandtse/CommonLibVR/issues/83)) ([6f2b8f6](https://github.com/alandtse/CommonLibVR/commit/6f2b8f699121714f6a96cd0f3d87576c2a5e00f8))
* clarify LocalMapCullingProcess cross-VR size assertion ([9228685](https://github.com/alandtse/CommonLibVR/commit/9228685cf7fce73f9d791aa969cba5bf53783724)), closes [#107](https://github.com/alandtse/CommonLibVR/issues/107)
* consistency ([af39065](https://github.com/alandtse/CommonLibVR/commit/af3906508198c355c614a7ce7edda6de63130b15))
* correct BSTimer size and Explosion members ([957c3b0](https://github.com/alandtse/CommonLibVR/commit/957c3b00d9237cd1010c5853ac838a09cdcb7268))
* correct control map AE version comparison ([#32](https://github.com/alandtse/CommonLibVR/issues/32)) ([a5859e4](https://github.com/alandtse/CommonLibVR/commit/a5859e42cbd83421527b5816054e346a78d52411))
* correct RUNTIME_DATA_ACCESSOR macro for State.h GetRuntimeData ([c1e2ef8](https://github.com/alandtse/CommonLibVR/commit/c1e2ef8ecfea7510e06131de69b22a5cda526d34))
* correct vrContext ([162c035](https://github.com/alandtse/CommonLibVR/commit/162c035f239a27e4ae76b4fb5c093569bacf56c5))
* disable REX toml Save functions ([e0d9e73](https://github.com/alandtse/CommonLibVR/commit/e0d9e739b427bf2c188827196a2bd7285676cfae))
* enable conforming preprocessor for STATIC_ASSERT_SIZE macro ([113c400](https://github.com/alandtse/CommonLibVR/commit/113c400d6cacf4605feb1b421a88cf2158c2e271))
* Fix `HUDMenu` name ([#61](https://github.com/alandtse/CommonLibVR/issues/61)) ([1fe0613](https://github.com/alandtse/CommonLibVR/commit/1fe061326d8875603b22d8d014d72abbd5368cac))
* fix 1130 offsets and flatrim config ([05d81a1](https://github.com/alandtse/CommonLibVR/commit/05d81a13693652bf63bd34fc6efd994a0d6644db))
* fix ActorMagicCaster::Update offset ([#75](https://github.com/alandtse/CommonLibVR/issues/75)) ([943c12e](https://github.com/alandtse/CommonLibVR/commit/943c12e7a5c8ba05b4867c568cb51022fe8e8530))
* fix ae ID ([#80](https://github.com/alandtse/CommonLibVR/issues/80)) ([539d4ce](https://github.com/alandtse/CommonLibVR/commit/539d4ce50969e8d23f4d507a7bc3dd955a4de93f))
* fix assignment of VRcompiledFileCollection ([21ef754](https://github.com/alandtse/CommonLibVR/commit/21ef754b4837a027f5a2b3c9879b75886dce721d))
* fix bad offset for VR NiAVObject userData ([a89eeb9](https://github.com/alandtse/CommonLibVR/commit/a89eeb96b1375dcdff2e0c0ed05eb4b505689e90))
* fix BGSDefaultObjectManager array iteration ([dfedc5e](https://github.com/alandtse/CommonLibVR/commit/dfedc5e3beef8703c1ad92c250a758d47345fa8b))
* fix BSGraphics::Renderer for AE1130 ([738afc4](https://github.com/alandtse/CommonLibVR/commit/738afc457fdeba050ce328f15225aa3cde674187))
* fix bsinputeventqueue static_asserts ([9341642](https://github.com/alandtse/CommonLibVR/commit/9341642fa25412cff407f4215686460f85868876))
* fix BSPCGamepadDeviceHandler runtime offsets ([e840bca](https://github.com/alandtse/CommonLibVR/commit/e840bca8fe345242ccfcef0b3ee7b0b3fe5028aa))
* fix BSShaderMaterial memory allocation ([a537473](https://github.com/alandtse/CommonLibVR/commit/a53747388e051060f3cbbf3e4a1e53049fb89fc1))
* fix BSTriShape runtime offsets ([e11ac6e](https://github.com/alandtse/CommonLibVR/commit/e11ac6e9d892c9d39857c477120aeb56fe6feaca))
* fix check for successful ID mapping ([#69](https://github.com/alandtse/CommonLibVR/issues/69)) ([4aac68c](https://github.com/alandtse/CommonLibVR/commit/4aac68cf2c8277be26975eafb22d1e1b947abc5a))
* fix compilation error ([3936bcb](https://github.com/alandtse/CommonLibVR/commit/3936bcb8cb2d97fad006597b5058c908aa7a036c))
* fix compilation error ([99f0393](https://github.com/alandtse/CommonLibVR/commit/99f03932f7451f23add1b54b8bf940074fe3700d))
* fix compilation errors ([9214fe7](https://github.com/alandtse/CommonLibVR/commit/9214fe709d78a1fedcc711b71ca37637378a1d40))
* fix compile errors ([5810743](https://github.com/alandtse/CommonLibVR/commit/581074333616630eae3318df4fbfaf59919066c1))
* fix compile errors ([612bf3d](https://github.com/alandtse/CommonLibVR/commit/612bf3d1a7eb0cc05029ee5d0eba3301b91e1c74))
* fix compile errors ([#63](https://github.com/alandtse/CommonLibVR/issues/63)) ([853cd7a](https://github.com/alandtse/CommonLibVR/commit/853cd7ae01113fb36850ba8a8c1635a34cc6fb81))
* fix ControlMap singleton ID ([9646bdb](https://github.com/alandtse/CommonLibVR/commit/9646bdb42a02ad8dc2d58c894013693a84ec2cc3))
* fix CTD on WorldSpaceMenu ([befa2de](https://github.com/alandtse/CommonLibVR/commit/befa2dec6e010cd608866331c5a60dedcc2d2026))
* fix exclusive build for FLAT or VR ([#57](https://github.com/alandtse/CommonLibVR/issues/57)) ([2a0f382](https://github.com/alandtse/CommonLibVR/commit/2a0f382515b27b0b7e433e28ee163679b10b9f68))
* fix fmt compile errors ([5949aa0](https://github.com/alandtse/CommonLibVR/commit/5949aa0542d0d8b7a2b564691de6923a47732e9a))
* fix location of vr alphaBlendModeExtra ([b17ee0a](https://github.com/alandtse/CommonLibVR/commit/b17ee0a896cb4235a44060b071fbb5f1a7ee34a5))
* fix logger directory for VR ([054e1e2](https://github.com/alandtse/CommonLibVR/commit/054e1e20b2a26ffa488e96bbc7862fab19ad4623))
* fix MapMenu getters ([#60](https://github.com/alandtse/CommonLibVR/issues/60)) ([34b59a3](https://github.com/alandtse/CommonLibVR/commit/34b59a398ca7e84c247d09712b77e780e4b0b40e))
* fix NiParticle runtime offsets for VR ([e3b7990](https://github.com/alandtse/CommonLibVR/commit/e3b7990827c3fe18b2f75921c2aafa59cb38ce2c))
* fix NPE in TypeInfo.cpp ([a62791c](https://github.com/alandtse/CommonLibVR/commit/a62791cbcb68bd796b303ae7d1a25829d49c6b12))
* fix offset for VR Player Runtime Data ([#85](https://github.com/alandtse/CommonLibVR/issues/85)) ([394b105](https://github.com/alandtse/CommonLibVR/commit/394b105e0ab1dbc249d9e848904118c04c125099))
* fix player struct alignment for AE ([#52](https://github.com/alandtse/CommonLibVR/issues/52)) ([9704d50](https://github.com/alandtse/CommonLibVR/commit/9704d50be5b5841541beaeaf9d615993c4a494db))
* fix playerCamera ([8b55358](https://github.com/alandtse/CommonLibVR/commit/8b553586220d842358059a34b2de8bdcc7d6a1e7))
* fix playercharacter and controlmap offsets ([cab9f74](https://github.com/alandtse/CommonLibVR/commit/cab9f743fe5a5c70db3ca9b1857ec079738b5ffa))
* fix PlayerCharacter inheritence and sizes ([c836485](https://github.com/alandtse/CommonLibVR/commit/c83648537df2beb4dd9649aa9817094ad3104cb5))
* fix PlayerCharacter::ByCharGenFlag enum size ([2637cd2](https://github.com/alandtse/CommonLibVR/commit/2637cd2f22ce40fec807406593363c37be3bcf3a))
* fix potential symbol conflict ([360f646](https://github.com/alandtse/CommonLibVR/commit/360f6463ed78c62678981a3494c5a3617535a466))
* fix relid regressions from merge ([c0c5131](https://github.com/alandtse/CommonLibVR/commit/c0c5131d6f5a70751cd972170e968ebde03684c1))
* fix renderer offsets ([6ccb57a](https://github.com/alandtse/CommonLibVR/commit/6ccb57a73fe025d441b1ed3c382710dd1fca2f4e))
* fix return path compile error ([e6eadfc](https://github.com/alandtse/CommonLibVR/commit/e6eadfc65fab424fb4b239c63eb8dfb930080943))
* fix runtime offsets for BSShadowLight ([c40cf40](https://github.com/alandtse/CommonLibVR/commit/c40cf40c464ad8a644175f131a06ceba3ea44ba2))
* fix runtime offsets for NiParticles ([1fab24c](https://github.com/alandtse/CommonLibVR/commit/1fab24cf7cdbfc7dd97f456f9ae464531b100f8c))
* fix skyrimvresl VRcompiledFileCollection ([0dc0343](https://github.com/alandtse/CommonLibVR/commit/0dc0343a70b46ef4815d8f03c2e493180575a0ac))
* fix support for fmt10 ([2b3e1f6](https://github.com/alandtse/CommonLibVR/commit/2b3e1f63e438f2cc0effdf207863edc7e12dc9f3))
* fix vfunc indexing for Flatrim ([d970ed2](https://github.com/alandtse/CommonLibVR/commit/d970ed21ea09ce80e34103fab0683457ef3ecdf6))
* fix virtual functions for VR ([fcf1b4c](https://github.com/alandtse/CommonLibVR/commit/fcf1b4c777aa732ae68f92e8cd0c88b7fd39ac9f))
* fix VR module detection lost during qudix refactor ([cf9a3b8](https://github.com/alandtse/CommonLibVR/commit/cf9a3b803bef6f6d07e5abc28af41b9c0e14f333))
* fix weather types ([a9bc9fe](https://github.com/alandtse/CommonLibVR/commit/a9bc9fe07ed912aeb0319a6c1992392d720e5592))
* fix`InputContext::GetNumDeviceMappings()` ([#39](https://github.com/alandtse/CommonLibVR/issues/39)) ([285bccf](https://github.com/alandtse/CommonLibVR/commit/285bccffe7f10884940444a2f6ad079d921127bd))
* fixed setting constant buffers in VR. ([#64](https://github.com/alandtse/CommonLibVR/issues/64)) ([89bc8b4](https://github.com/alandtse/CommonLibVR/commit/89bc8b425555cf4e6e7ce1079e5f6bdeac969e97))
* fmt to std if format lib is defined ([#82](https://github.com/alandtse/CommonLibVR/issues/82)) ([2e8e84e](https://github.com/alandtse/CommonLibVR/commit/2e8e84ec0801dc50ef1a8b9afec62f2e606e48c5))
* global logger name is case sensitive ([2839cb7](https://github.com/alandtse/CommonLibVR/commit/2839cb701544b2794f1454fcac0449dfaec49144))
* include ([0abd01b](https://github.com/alandtse/CommonLibVR/commit/0abd01b103991733f379327c2d84432abb992766))
* includes ([1eb1bd2](https://github.com/alandtse/CommonLibVR/commit/1eb1bd2668c3678aa48489b86e38f6e30bf486b2))
* init-ing logger too early ([0b0c1f8](https://github.com/alandtse/CommonLibVR/commit/0b0c1f898268fb64116130d83aba4d52963282d9))
* make shadowstate utils VR compatible ([#56](https://github.com/alandtse/CommonLibVR/issues/56)) ([4fba153](https://github.com/alandtse/CommonLibVR/commit/4fba153e75fa2941ab72b5e6da9f280494f52cbd))
* make xmake rex options consistent ([02a517e](https://github.com/alandtse/CommonLibVR/commit/02a517e6eab53852b4031d5fe07d949d2dc4a747))
* **MenuCursor:** fix runtime data use ([c1a2059](https://github.com/alandtse/CommonLibVR/commit/c1a20597dd68ae2397290a2b7fb40e1a73b82aca))
* missing includes ([dc4c411](https://github.com/alandtse/CommonLibVR/commit/dc4c4113b7ec728b2f679ddc41f9dc827dc0a2e2))
* move includes ([6cc6761](https://github.com/alandtse/CommonLibVR/commit/6cc67610c74c906962766b761aaae45f4d68b2b5))
* move REL::Module::reset outside of testing definition ([#53](https://github.com/alandtse/CommonLibVR/issues/53)) ([93d8b8f](https://github.com/alandtse/CommonLibVR/commit/93d8b8f05ae8f49d3463708cdcbe003964b06149))
* move utils to correct place ([813dd0a](https://github.com/alandtse/CommonLibVR/commit/813dd0ac817bc16d83b9116dbb83f30a0ad0597b))
* move utils to correct place ([#59](https://github.com/alandtse/CommonLibVR/issues/59)) ([d4e2b1e](https://github.com/alandtse/CommonLibVR/commit/d4e2b1e396791440a37fefe3db584cc429429eb0))
* only allow default log if 1.6.x support is enabled ([c34f51e](https://github.com/alandtse/CommonLibVR/commit/c34f51e203d0881d0bdc08de44c3fd6ad9e2a2af))
* pass by reference ([0615cc7](https://github.com/alandtse/CommonLibVR/commit/0615cc70ef78a1aba3f93428573f8e5f74c2fd7a))
* proper handling for long toml paths ([c160aa5](https://github.com/alandtse/CommonLibVR/commit/c160aa5d315aaca5dedd58410cdf7af26cd5bfa8))
* RE ImageSpaceManager for VR ([0f756f0](https://github.com/alandtse/CommonLibVR/commit/0f756f04088d6ce9fd005ab60d460754014feb10))
* remove const from EMPTY by Nukem ([#96](https://github.com/alandtse/CommonLibVR/issues/96)) ([994077a](https://github.com/alandtse/CommonLibVR/commit/994077ae42219692c812171a8de5e5939b78aff1))
* remove duplicate func ([d9647e9](https://github.com/alandtse/CommonLibVR/commit/d9647e99cffa6f33655ab9665bab93429bb8380a))
* remove temp debug output ([ee7778d](https://github.com/alandtse/CommonLibVR/commit/ee7778dff172368154835ce00b3b4596d356a11e))
* require use of GetRuntimeData methods ([e8ec7cc](https://github.com/alandtse/CommonLibVR/commit/e8ec7cc136bf59af0e7ef1bb45e5a3c946c8fe4f))
* resolve post-merge compilation issues ([1da4895](https://github.com/alandtse/CommonLibVR/commit/1da4895d5d71668407ad0d1e11bd8f22a8f5259e))
* revert ini library to simpleini ([402de93](https://github.com/alandtse/CommonLibVR/commit/402de9309a3013b7d0973a2a78f4e95f0b02bb28))
* revert key type change ([e1d1b0c](https://github.com/alandtse/CommonLibVR/commit/e1d1b0c7e790489cd529b82c5d2477f91a4435bd))
* Script::CompileAndRun_Impl and BSScaleformTranslator::GetCachedString for AE1130 ([f7dec1c](https://github.com/alandtse/CommonLibVR/commit/f7dec1cbe91473105f42d159f02b697b55b5dd63))
* sort xmake options ([30fe805](https://github.com/alandtse/CommonLibVR/commit/30fe80560f88860cc3591de38aa8bcb90ce947d3))
* support non-ae ([9fe9130](https://github.com/alandtse/CommonLibVR/commit/9fe9130d9e04f7e79740566efb2dbf3df428c113))
* switch to directx toolkit and simplemath ([bb1c575](https://github.com/alandtse/CommonLibVR/commit/bb1c575855c402dc6f064747938bc4f37d8a691f))
* sync Actor::Unk_117 with flat ([162af97](https://github.com/alandtse/CommonLibVR/commit/162af97a709b8d07e94d8966e6d355d044bbbca5))
* TESCameraState vfunc inheritance ([1117d28](https://github.com/alandtse/CommonLibVR/commit/1117d28d96fc744467e73b3b90d1bf267178f326))
* toml save improvements ([8b086e5](https://github.com/alandtse/CommonLibVR/commit/8b086e5e72d058ed079b6424c9fdbb8b384244b3))
* update INPUT_DEVICES ([687930b](https://github.com/alandtse/CommonLibVR/commit/687930b433091305a995744d57a287ae536a1192))
* update offsets for main.h in VR ([9487609](https://github.com/alandtse/CommonLibVR/commit/9487609ee5c03c405519a6944a6aeb6bb0cc8dd0))
* use FLAT size for SE/AE in static_assert ([5d341d4](https://github.com/alandtse/CommonLibVR/commit/5d341d47108de8f1e70de7db9fa8244d34544fd6))
* use REX::W32 instead of simplemath to fix BSShadowLight build issue ([#44](https://github.com/alandtse/CommonLibVR/issues/44)) ([8e42371](https://github.com/alandtse/CommonLibVR/commit/8e42371362b17770a6ad389f48f4a6fdca998e55))
* use runtime version of currentProcess ([3d05419](https://github.com/alandtse/CommonLibVR/commit/3d054198ecb4ef3ff9157a60fd080969f570a8ad))
* user config no longer overrides base config ([9c9e481](https://github.com/alandtse/CommonLibVR/commit/9c9e481472451d022c1218453e127c6c495f2e6e))
* vr specific changes with merge ([b75853e](https://github.com/alandtse/CommonLibVR/commit/b75853e0d0d247b82fb5336f34252401de13e288))
* **VR:** fix BGSShaderParticleGeometryData RE ([f77c621](https://github.com/alandtse/CommonLibVR/commit/f77c621758ce61f6b7ece0237c9517aa07332aab))
* **VR:** keycode inheritance in ButtonEvent ([7994cde](https://github.com/alandtse/CommonLibVR/commit/7994cdea317e8eea452c1fb7f85e79a7fb107daa))
* xmake merge ([#78](https://github.com/alandtse/CommonLibVR/issues/78)) ([8593e41](https://github.com/alandtse/CommonLibVR/commit/8593e41c1f780b5b16b227f4f62e574d01e0ac3d))

### Performance Improvements

* address ai suggestions ([80f72e4](https://github.com/alandtse/CommonLibVR/commit/80f72e442f080aa5a1840124a4abb6105f6343fe))
* make all relocations static ([f62a94d](https://github.com/alandtse/CommonLibVR/commit/f62a94d27a21d7747516a51a9d759424a222deee))
* make more relocations static ([c19a5b4](https://github.com/alandtse/CommonLibVR/commit/c19a5b46efb8d84e651df69cd10a47e981b5ed0a))
* make more relocations static ([bd9cb72](https://github.com/alandtse/CommonLibVR/commit/bd9cb721d5bbfef5a74e10dd677afb8fed584f5c))

### Reverts

* Revert "fix a bug with va_args" ([d478fdf](https://github.com/alandtse/CommonLibVR/commit/d478fdf9ba6145d0058ccf03c3cd73dff5339307))
