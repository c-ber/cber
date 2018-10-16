#pragma once
#include "UCameraComponent.hpp"
#include "FCameraFilmbackSettings.hpp"
#include "FCameraLensSettings.hpp"
#include "FCameraFocusSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCineCameraComponent // Size: 0xB00
	: public UCameraComponent // Size: 0xA40
{
private:
	typedef UCineCameraComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1271); // id32("Class CinematicCamera.CineCameraComponent")
		return ptr;
	}
	FCameraFilmbackSettings FilmbackSettings; /* Ofs: 0xA40 Size: 0xC - StructProperty CinematicCamera.CineCameraComponent.FilmbackSettings */
	FCameraLensSettings LensSettings; /* Ofs: 0xA4C Size: 0x14 - StructProperty CinematicCamera.CineCameraComponent.LensSettings */
	FCameraFocusSettings FocusSettings; /* Ofs: 0xA60 Size: 0x38 - StructProperty CinematicCamera.CineCameraComponent.FocusSettings */
	float CurrentFocalLength; /* Ofs: 0xA98 Size: 0x4 - FloatProperty CinematicCamera.CineCameraComponent.CurrentFocalLength */
	float CurrentAperture; /* Ofs: 0xA9C Size: 0x4 - FloatProperty CinematicCamera.CineCameraComponent.CurrentAperture */
	float CurrentFocusDistance; /* Ofs: 0xAA0 Size: 0x4 - FloatProperty CinematicCamera.CineCameraComponent.CurrentFocusDistance */
	uint8_t UnknownDataAA4[0xC];
	TArray<struct FNamedFilmbackPreset> FilmbackPresets; /* Ofs: 0xAB0 Size: 0x10 - ArrayProperty CinematicCamera.CineCameraComponent.FilmbackPresets */
	TArray<struct FNamedLensPreset> LensPresets; /* Ofs: 0xAC0 Size: 0x10 - ArrayProperty CinematicCamera.CineCameraComponent.LensPresets */
	FString DefaultFilmbackPresetName; /* Ofs: 0xAD0 Size: 0x10 - StrProperty CinematicCamera.CineCameraComponent.DefaultFilmbackPresetName */
	FString DefaultLensPresetName; /* Ofs: 0xAE0 Size: 0x10 - StrProperty CinematicCamera.CineCameraComponent.DefaultLensPresetName */
	float DefaultLensFocalLength; /* Ofs: 0xAF0 Size: 0x4 - FloatProperty CinematicCamera.CineCameraComponent.DefaultLensFocalLength */
	float DefaultLensFStop; /* Ofs: 0xAF4 Size: 0x4 - FloatProperty CinematicCamera.CineCameraComponent.DefaultLensFStop */
	uint8_t UnknownDataAF8[0x8];


	inline bool SetFilmbackSettings(t_structHelper inst, FCameraFilmbackSettings value) { inst.WriteOffset(0xA40, value); }
	inline bool SetLensSettings(t_structHelper inst, FCameraLensSettings value) { inst.WriteOffset(0xA4C, value); }
	inline bool SetFocusSettings(t_structHelper inst, FCameraFocusSettings value) { inst.WriteOffset(0xA60, value); }
	inline bool SetCurrentFocalLength(t_structHelper inst, float value) { inst.WriteOffset(0xA98, value); }
	inline bool SetCurrentAperture(t_structHelper inst, float value) { inst.WriteOffset(0xA9C, value); }
	inline bool SetCurrentFocusDistance(t_structHelper inst, float value) { inst.WriteOffset(0xAA0, value); }
	inline bool SetFilmbackPresets(t_structHelper inst, TArray<struct FNamedFilmbackPreset> value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetLensPresets(t_structHelper inst, TArray<struct FNamedLensPreset> value) { inst.WriteOffset(0xAC0, value); }
	inline bool SetDefaultFilmbackPresetName(t_structHelper inst, FString value) { inst.WriteOffset(0xAD0, value); }
	inline bool SetDefaultLensPresetName(t_structHelper inst, FString value) { inst.WriteOffset(0xAE0, value); }
	inline bool SetDefaultLensFocalLength(t_structHelper inst, float value) { inst.WriteOffset(0xAF0, value); }
	inline bool SetDefaultLensFStop(t_structHelper inst, float value) { inst.WriteOffset(0xAF4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCineCameraComponent = sizeof(UCineCameraComponent); // 2816
    static_assert(sizeof(UCineCameraComponent) == 0xB00, "Size of UCineCameraComponent is not correct.");
	auto constexpr UCineCameraComponent_FilmbackSettings_Offset = offsetof(UCineCameraComponent, FilmbackSettings);
	static_assert(UCineCameraComponent_FilmbackSettings_Offset == 0xa40, "UCineCameraComponent::FilmbackSettings offset is not a40");
	auto constexpr UCineCameraComponent_LensSettings_Offset = offsetof(UCineCameraComponent, LensSettings);
	static_assert(UCineCameraComponent_LensSettings_Offset == 0xa4c, "UCineCameraComponent::LensSettings offset is not a4c");
	auto constexpr UCineCameraComponent_FocusSettings_Offset = offsetof(UCineCameraComponent, FocusSettings);
	static_assert(UCineCameraComponent_FocusSettings_Offset == 0xa60, "UCineCameraComponent::FocusSettings offset is not a60");
	auto constexpr UCineCameraComponent_CurrentFocalLength_Offset = offsetof(UCineCameraComponent, CurrentFocalLength);
	static_assert(UCineCameraComponent_CurrentFocalLength_Offset == 0xa98, "UCineCameraComponent::CurrentFocalLength offset is not a98");
	auto constexpr UCineCameraComponent_CurrentAperture_Offset = offsetof(UCineCameraComponent, CurrentAperture);
	static_assert(UCineCameraComponent_CurrentAperture_Offset == 0xa9c, "UCineCameraComponent::CurrentAperture offset is not a9c");
	auto constexpr UCineCameraComponent_CurrentFocusDistance_Offset = offsetof(UCineCameraComponent, CurrentFocusDistance);
	static_assert(UCineCameraComponent_CurrentFocusDistance_Offset == 0xaa0, "UCineCameraComponent::CurrentFocusDistance offset is not aa0");
	auto constexpr UCineCameraComponent_FilmbackPresets_Offset = offsetof(UCineCameraComponent, FilmbackPresets);
	static_assert(UCineCameraComponent_FilmbackPresets_Offset == 0xab0, "UCineCameraComponent::FilmbackPresets offset is not ab0");
	auto constexpr UCineCameraComponent_LensPresets_Offset = offsetof(UCineCameraComponent, LensPresets);
	static_assert(UCineCameraComponent_LensPresets_Offset == 0xac0, "UCineCameraComponent::LensPresets offset is not ac0");
	auto constexpr UCineCameraComponent_DefaultFilmbackPresetName_Offset = offsetof(UCineCameraComponent, DefaultFilmbackPresetName);
	static_assert(UCineCameraComponent_DefaultFilmbackPresetName_Offset == 0xad0, "UCineCameraComponent::DefaultFilmbackPresetName offset is not ad0");
	auto constexpr UCineCameraComponent_DefaultLensPresetName_Offset = offsetof(UCineCameraComponent, DefaultLensPresetName);
	static_assert(UCineCameraComponent_DefaultLensPresetName_Offset == 0xae0, "UCineCameraComponent::DefaultLensPresetName offset is not ae0");
	auto constexpr UCineCameraComponent_DefaultLensFocalLength_Offset = offsetof(UCineCameraComponent, DefaultLensFocalLength);
	static_assert(UCineCameraComponent_DefaultLensFocalLength_Offset == 0xaf0, "UCineCameraComponent::DefaultLensFocalLength offset is not af0");
	auto constexpr UCineCameraComponent_DefaultLensFStop_Offset = offsetof(UCineCameraComponent, DefaultLensFStop);
	static_assert(UCineCameraComponent_DefaultLensFStop_Offset == 0xaf4, "UCineCameraComponent::DefaultLensFStop offset is not af4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
