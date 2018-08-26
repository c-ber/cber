#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameUserSettings // Size: 0x110
	: public UObject // Size: 0x30
{
private:
	typedef UGameUserSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(777); // id32("Class Engine.GameUserSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x4F];
	uint32_t ResolutionSizeX; /* Ofs: 0x80 Size: 0x4 - UInt32Property Engine.GameUserSettings.ResolutionSizeX */
	uint32_t ResolutionSizeY; /* Ofs: 0x84 Size: 0x4 - UInt32Property Engine.GameUserSettings.ResolutionSizeY */
	uint32_t LastUserConfirmedResolutionSizeX; /* Ofs: 0x88 Size: 0x4 - UInt32Property Engine.GameUserSettings.LastUserConfirmedResolutionSizeX */
	uint32_t LastUserConfirmedResolutionSizeY; /* Ofs: 0x8C Size: 0x4 - UInt32Property Engine.GameUserSettings.LastUserConfirmedResolutionSizeY */
	int32_t WindowPosX; /* Ofs: 0x90 Size: 0x4 - IntProperty Engine.GameUserSettings.WindowPosX */
	int32_t WindowPosY; /* Ofs: 0x94 Size: 0x4 - IntProperty Engine.GameUserSettings.WindowPosY */
	int32_t FullscreenMode; /* Ofs: 0x98 Size: 0x4 - IntProperty Engine.GameUserSettings.FullscreenMode */
	int32_t LastConfirmedFullscreenMode; /* Ofs: 0x9C Size: 0x4 - IntProperty Engine.GameUserSettings.LastConfirmedFullscreenMode */
	int32_t PreferredFullscreenMode; /* Ofs: 0xA0 Size: 0x4 - IntProperty Engine.GameUserSettings.PreferredFullscreenMode */
	uint32_t Version; /* Ofs: 0xA4 Size: 0x4 - UInt32Property Engine.GameUserSettings.Version */
	int32_t AudioQualityLevel; /* Ofs: 0xA8 Size: 0x4 - IntProperty Engine.GameUserSettings.AudioQualityLevel */
	float FrameRateLimit; /* Ofs: 0xAC Size: 0x4 - FloatProperty Engine.GameUserSettings.FrameRateLimit */
	uint8_t UnknownDataB0[0x4];
	int32_t DesiredScreenWidth; /* Ofs: 0xB4 Size: 0x4 - IntProperty Engine.GameUserSettings.DesiredScreenWidth */
	uint8_t boolFieldB8;
	uint8_t UnknownDataB9[0x3];
	int32_t DesiredScreenHeight; /* Ofs: 0xBC Size: 0x4 - IntProperty Engine.GameUserSettings.DesiredScreenHeight */
	float LastRecommendedScreenWidth; /* Ofs: 0xC0 Size: 0x4 - FloatProperty Engine.GameUserSettings.LastRecommendedScreenWidth */
	float LastRecommendedScreenHeight; /* Ofs: 0xC4 Size: 0x4 - FloatProperty Engine.GameUserSettings.LastRecommendedScreenHeight */
	float LastCPUBenchmarkResult; /* Ofs: 0xC8 Size: 0x4 - FloatProperty Engine.GameUserSettings.LastCPUBenchmarkResult */
	float LastGPUBenchmarkResult; /* Ofs: 0xCC Size: 0x4 - FloatProperty Engine.GameUserSettings.LastGPUBenchmarkResult */
	TArray<float> LastCPUBenchmarkSteps; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty Engine.GameUserSettings.LastCPUBenchmarkSteps */
	TArray<float> LastGPUBenchmarkSteps; /* Ofs: 0xE0 Size: 0x10 - ArrayProperty Engine.GameUserSettings.LastGPUBenchmarkSteps */
	float LastGPUBenchmarkMultiplier; /* Ofs: 0xF0 Size: 0x4 - FloatProperty Engine.GameUserSettings.LastGPUBenchmarkMultiplier */
	uint8_t boolFieldF4;
	uint8_t UnknownDataF5[0x3];
	int32_t HDRDisplayOutputNits; /* Ofs: 0xF8 Size: 0x4 - IntProperty Engine.GameUserSettings.HDRDisplayOutputNits */
	uint8_t UnknownDataFC[0x4];
	FScriptMulticastDelegate OnGameUserSettingsUINeedsUpdate; /* Ofs: 0x100 Size: 0x10 - MulticastDelegateProperty Engine.GameUserSettings.OnGameUserSettingsUINeedsUpdate */


	inline bool bUseVSync()
	{
		return boolField30& 0x1;
	}
	inline bool SetbUseVSync(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetResolutionSizeX(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x80, value); }
	inline bool SetResolutionSizeY(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x84, value); }
	inline bool SetLastUserConfirmedResolutionSizeX(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x88, value); }
	inline bool SetLastUserConfirmedResolutionSizeY(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x8C, value); }
	inline bool SetWindowPosX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x90, value); }
	inline bool SetWindowPosY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x94, value); }
	inline bool SetFullscreenMode(t_structHelper inst, int32_t value) { inst.WriteOffset(0x98, value); }
	inline bool SetLastConfirmedFullscreenMode(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9C, value); }
	inline bool SetPreferredFullscreenMode(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA0, value); }
	inline bool SetVersion(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xA4, value); }
	inline bool SetAudioQualityLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA8, value); }
	inline bool SetFrameRateLimit(t_structHelper inst, float value) { inst.WriteOffset(0xAC, value); }
	inline bool SetDesiredScreenWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB4, value); }
	inline bool bUseDesiredScreenHeight()
	{
		return boolFieldB8& 0x1;
	}
	inline bool SetbUseDesiredScreenHeight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDesiredScreenHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0xBC, value); }
	inline bool SetLastRecommendedScreenWidth(t_structHelper inst, float value) { inst.WriteOffset(0xC0, value); }
	inline bool SetLastRecommendedScreenHeight(t_structHelper inst, float value) { inst.WriteOffset(0xC4, value); }
	inline bool SetLastCPUBenchmarkResult(t_structHelper inst, float value) { inst.WriteOffset(0xC8, value); }
	inline bool SetLastGPUBenchmarkResult(t_structHelper inst, float value) { inst.WriteOffset(0xCC, value); }
	inline bool SetLastCPUBenchmarkSteps(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetLastGPUBenchmarkSteps(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetLastGPUBenchmarkMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xF0, value); }
	inline bool bUseHDRDisplayOutput()
	{
		return boolFieldF4& 0x1;
	}
	inline bool SetbUseHDRDisplayOutput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHDRDisplayOutputNits(t_structHelper inst, int32_t value) { inst.WriteOffset(0xF8, value); }
	inline bool SetOnGameUserSettingsUINeedsUpdate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x100, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameUserSettings = sizeof(UGameUserSettings); // 272
    static_assert(sizeof(UGameUserSettings) == 0x110, "Size of UGameUserSettings is not correct.");
	auto constexpr UGameUserSettings_boolField30_Offset = offsetof(UGameUserSettings, boolField30);
	static_assert(UGameUserSettings_boolField30_Offset == 0x30, "UGameUserSettings::boolField30 offset is not 30");
	auto constexpr UGameUserSettings_ResolutionSizeX_Offset = offsetof(UGameUserSettings, ResolutionSizeX);
	static_assert(UGameUserSettings_ResolutionSizeX_Offset == 0x80, "UGameUserSettings::ResolutionSizeX offset is not 80");
	auto constexpr UGameUserSettings_ResolutionSizeY_Offset = offsetof(UGameUserSettings, ResolutionSizeY);
	static_assert(UGameUserSettings_ResolutionSizeY_Offset == 0x84, "UGameUserSettings::ResolutionSizeY offset is not 84");
	auto constexpr UGameUserSettings_LastUserConfirmedResolutionSizeX_Offset = offsetof(UGameUserSettings, LastUserConfirmedResolutionSizeX);
	static_assert(UGameUserSettings_LastUserConfirmedResolutionSizeX_Offset == 0x88, "UGameUserSettings::LastUserConfirmedResolutionSizeX offset is not 88");
	auto constexpr UGameUserSettings_LastUserConfirmedResolutionSizeY_Offset = offsetof(UGameUserSettings, LastUserConfirmedResolutionSizeY);
	static_assert(UGameUserSettings_LastUserConfirmedResolutionSizeY_Offset == 0x8c, "UGameUserSettings::LastUserConfirmedResolutionSizeY offset is not 8c");
	auto constexpr UGameUserSettings_WindowPosX_Offset = offsetof(UGameUserSettings, WindowPosX);
	static_assert(UGameUserSettings_WindowPosX_Offset == 0x90, "UGameUserSettings::WindowPosX offset is not 90");
	auto constexpr UGameUserSettings_WindowPosY_Offset = offsetof(UGameUserSettings, WindowPosY);
	static_assert(UGameUserSettings_WindowPosY_Offset == 0x94, "UGameUserSettings::WindowPosY offset is not 94");
	auto constexpr UGameUserSettings_FullscreenMode_Offset = offsetof(UGameUserSettings, FullscreenMode);
	static_assert(UGameUserSettings_FullscreenMode_Offset == 0x98, "UGameUserSettings::FullscreenMode offset is not 98");
	auto constexpr UGameUserSettings_LastConfirmedFullscreenMode_Offset = offsetof(UGameUserSettings, LastConfirmedFullscreenMode);
	static_assert(UGameUserSettings_LastConfirmedFullscreenMode_Offset == 0x9c, "UGameUserSettings::LastConfirmedFullscreenMode offset is not 9c");
	auto constexpr UGameUserSettings_PreferredFullscreenMode_Offset = offsetof(UGameUserSettings, PreferredFullscreenMode);
	static_assert(UGameUserSettings_PreferredFullscreenMode_Offset == 0xa0, "UGameUserSettings::PreferredFullscreenMode offset is not a0");
	auto constexpr UGameUserSettings_Version_Offset = offsetof(UGameUserSettings, Version);
	static_assert(UGameUserSettings_Version_Offset == 0xa4, "UGameUserSettings::Version offset is not a4");
	auto constexpr UGameUserSettings_AudioQualityLevel_Offset = offsetof(UGameUserSettings, AudioQualityLevel);
	static_assert(UGameUserSettings_AudioQualityLevel_Offset == 0xa8, "UGameUserSettings::AudioQualityLevel offset is not a8");
	auto constexpr UGameUserSettings_FrameRateLimit_Offset = offsetof(UGameUserSettings, FrameRateLimit);
	static_assert(UGameUserSettings_FrameRateLimit_Offset == 0xac, "UGameUserSettings::FrameRateLimit offset is not ac");
	auto constexpr UGameUserSettings_DesiredScreenWidth_Offset = offsetof(UGameUserSettings, DesiredScreenWidth);
	static_assert(UGameUserSettings_DesiredScreenWidth_Offset == 0xb4, "UGameUserSettings::DesiredScreenWidth offset is not b4");
	auto constexpr UGameUserSettings_boolFieldB8_Offset = offsetof(UGameUserSettings, boolFieldB8);
	static_assert(UGameUserSettings_boolFieldB8_Offset == 0xb8, "UGameUserSettings::boolFieldB8 offset is not b8");
	auto constexpr UGameUserSettings_DesiredScreenHeight_Offset = offsetof(UGameUserSettings, DesiredScreenHeight);
	static_assert(UGameUserSettings_DesiredScreenHeight_Offset == 0xbc, "UGameUserSettings::DesiredScreenHeight offset is not bc");
	auto constexpr UGameUserSettings_LastRecommendedScreenWidth_Offset = offsetof(UGameUserSettings, LastRecommendedScreenWidth);
	static_assert(UGameUserSettings_LastRecommendedScreenWidth_Offset == 0xc0, "UGameUserSettings::LastRecommendedScreenWidth offset is not c0");
	auto constexpr UGameUserSettings_LastRecommendedScreenHeight_Offset = offsetof(UGameUserSettings, LastRecommendedScreenHeight);
	static_assert(UGameUserSettings_LastRecommendedScreenHeight_Offset == 0xc4, "UGameUserSettings::LastRecommendedScreenHeight offset is not c4");
	auto constexpr UGameUserSettings_LastCPUBenchmarkResult_Offset = offsetof(UGameUserSettings, LastCPUBenchmarkResult);
	static_assert(UGameUserSettings_LastCPUBenchmarkResult_Offset == 0xc8, "UGameUserSettings::LastCPUBenchmarkResult offset is not c8");
	auto constexpr UGameUserSettings_LastGPUBenchmarkResult_Offset = offsetof(UGameUserSettings, LastGPUBenchmarkResult);
	static_assert(UGameUserSettings_LastGPUBenchmarkResult_Offset == 0xcc, "UGameUserSettings::LastGPUBenchmarkResult offset is not cc");
	auto constexpr UGameUserSettings_LastCPUBenchmarkSteps_Offset = offsetof(UGameUserSettings, LastCPUBenchmarkSteps);
	static_assert(UGameUserSettings_LastCPUBenchmarkSteps_Offset == 0xd0, "UGameUserSettings::LastCPUBenchmarkSteps offset is not d0");
	auto constexpr UGameUserSettings_LastGPUBenchmarkSteps_Offset = offsetof(UGameUserSettings, LastGPUBenchmarkSteps);
	static_assert(UGameUserSettings_LastGPUBenchmarkSteps_Offset == 0xe0, "UGameUserSettings::LastGPUBenchmarkSteps offset is not e0");
	auto constexpr UGameUserSettings_LastGPUBenchmarkMultiplier_Offset = offsetof(UGameUserSettings, LastGPUBenchmarkMultiplier);
	static_assert(UGameUserSettings_LastGPUBenchmarkMultiplier_Offset == 0xf0, "UGameUserSettings::LastGPUBenchmarkMultiplier offset is not f0");
	auto constexpr UGameUserSettings_boolFieldF4_Offset = offsetof(UGameUserSettings, boolFieldF4);
	static_assert(UGameUserSettings_boolFieldF4_Offset == 0xf4, "UGameUserSettings::boolFieldF4 offset is not f4");
	auto constexpr UGameUserSettings_HDRDisplayOutputNits_Offset = offsetof(UGameUserSettings, HDRDisplayOutputNits);
	static_assert(UGameUserSettings_HDRDisplayOutputNits_Offset == 0xf8, "UGameUserSettings::HDRDisplayOutputNits offset is not f8");
	auto constexpr UGameUserSettings_OnGameUserSettingsUINeedsUpdate_Offset = offsetof(UGameUserSettings, OnGameUserSettingsUINeedsUpdate);
	static_assert(UGameUserSettings_OnGameUserSettingsUINeedsUpdate_Offset == 0x100, "UGameUserSettings::OnGameUserSettingsUINeedsUpdate offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
