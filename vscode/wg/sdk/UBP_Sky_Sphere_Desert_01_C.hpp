#pragma once
#include "UActor.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Sky_Sphere_Desert_01_C // Size: 0x4B0
	: public UActor // Size: 0x410
{
private:
	typedef UBP_Sky_Sphere_Desert_01_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(162190); // id32("BlueprintGeneratedClass BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C")
		return ptr;
	}
	ExternalPtr<struct UStaticMeshComponent> Sky_Sphere_mesh; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Sky_Sphere_mesh */
	ExternalPtr<struct USceneComponent> Base; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Base */
	ExternalPtr<struct UMaterialInstanceDynamic> Sky_material; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Sky_material */
	uint8_t boolField428;
	uint8_t UnknownData429[0x7];
	ExternalPtr<struct UDirectionalLight> Directional_light_actor; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Directional_light_actor */
	uint8_t boolField438;
	uint8_t UnknownData439[0x3];
	float Sun_height; /* Ofs: 0x43C Size: 0x4 - FloatProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Sun_height */
	float Sun_brightness; /* Ofs: 0x440 Size: 0x4 - FloatProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Sun_brightness */
	float Horizon_falloff; /* Ofs: 0x444 Size: 0x4 - FloatProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Horizon_falloff */
	FLinearColor Zenith_color; /* Ofs: 0x448 Size: 0x10 - StructProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Zenith_color */
	FLinearColor Horizon_color; /* Ofs: 0x458 Size: 0x10 - StructProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Horizon_color */
	FLinearColor Cloud_color; /* Ofs: 0x468 Size: 0x10 - StructProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Cloud_color */
	FLinearColor Overall_Color; /* Ofs: 0x478 Size: 0x10 - StructProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Overall_Color */
	float Cloud_speed; /* Ofs: 0x488 Size: 0x4 - FloatProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Cloud_speed */
	float Cloud_opacity; /* Ofs: 0x48C Size: 0x4 - FloatProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Cloud_opacity */
	float Stars_brightness; /* Ofs: 0x490 Size: 0x4 - FloatProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Stars_brightness */
	uint8_t UnknownData494[0x4];
	ExternalPtr<struct UCurveLinearColor> Horizon_color_curve; /* Ofs: 0x498 Size: 0x8 - ObjectProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Horizon_color_curve */
	ExternalPtr<struct UCurveLinearColor> Zenith_color_curve; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Zenith_color_curve */
	ExternalPtr<struct UCurveLinearColor> Cloud_color_curve; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty BP_Sky_Sphere_Desert_01.BP_Sky_Sphere_Desert_01_C.Cloud_color_curve */


	inline bool SetSky_Sphere_mesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetBase(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSky_material(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x420, value); }
	inline bool Refresh_material()
	{
		return boolField428& 0x1;
	}
	inline bool SetRefresh_material(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x428, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDirectional_light_actor(t_structHelper inst, ExternalPtr<struct UDirectionalLight> value) { inst.WriteOffset(0x430, value); }
	inline bool Colors_determined_by_sun_position()
	{
		return boolField438& 0x1;
	}
	inline bool SetColors_determined_by_sun_position(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x438, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSun_height(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetSun_brightness(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetHorizon_falloff(t_structHelper inst, float value) { inst.WriteOffset(0x444, value); }
	inline bool SetZenith_color(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x448, value); }
	inline bool SetHorizon_color(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x458, value); }
	inline bool SetCloud_color(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x468, value); }
	inline bool SetOverall_Color(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x478, value); }
	inline bool SetCloud_speed(t_structHelper inst, float value) { inst.WriteOffset(0x488, value); }
	inline bool SetCloud_opacity(t_structHelper inst, float value) { inst.WriteOffset(0x48C, value); }
	inline bool SetStars_brightness(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetHorizon_color_curve(t_structHelper inst, ExternalPtr<struct UCurveLinearColor> value) { inst.WriteOffset(0x498, value); }
	inline bool SetZenith_color_curve(t_structHelper inst, ExternalPtr<struct UCurveLinearColor> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetCloud_color_curve(t_structHelper inst, ExternalPtr<struct UCurveLinearColor> value) { inst.WriteOffset(0x4A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Sky_Sphere_Desert_01_C = sizeof(UBP_Sky_Sphere_Desert_01_C); // 1200
    static_assert(sizeof(UBP_Sky_Sphere_Desert_01_C) == 0x4B0, "Size of UBP_Sky_Sphere_Desert_01_C is not correct.");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Sky_Sphere_mesh_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Sky_Sphere_mesh);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Sky_Sphere_mesh_Offset == 0x410, "UBP_Sky_Sphere_Desert_01_C::Sky_Sphere_mesh offset is not 410");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Base_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Base);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Base_Offset == 0x418, "UBP_Sky_Sphere_Desert_01_C::Base offset is not 418");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Sky_material_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Sky_material);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Sky_material_Offset == 0x420, "UBP_Sky_Sphere_Desert_01_C::Sky_material offset is not 420");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_boolField428_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, boolField428);
	static_assert(UBP_Sky_Sphere_Desert_01_C_boolField428_Offset == 0x428, "UBP_Sky_Sphere_Desert_01_C::boolField428 offset is not 428");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Directional_light_actor_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Directional_light_actor);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Directional_light_actor_Offset == 0x430, "UBP_Sky_Sphere_Desert_01_C::Directional_light_actor offset is not 430");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_boolField438_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, boolField438);
	static_assert(UBP_Sky_Sphere_Desert_01_C_boolField438_Offset == 0x438, "UBP_Sky_Sphere_Desert_01_C::boolField438 offset is not 438");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Sun_height_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Sun_height);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Sun_height_Offset == 0x43c, "UBP_Sky_Sphere_Desert_01_C::Sun_height offset is not 43c");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Sun_brightness_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Sun_brightness);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Sun_brightness_Offset == 0x440, "UBP_Sky_Sphere_Desert_01_C::Sun_brightness offset is not 440");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Horizon_falloff_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Horizon_falloff);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Horizon_falloff_Offset == 0x444, "UBP_Sky_Sphere_Desert_01_C::Horizon_falloff offset is not 444");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Zenith_color_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Zenith_color);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Zenith_color_Offset == 0x448, "UBP_Sky_Sphere_Desert_01_C::Zenith_color offset is not 448");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Horizon_color_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Horizon_color);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Horizon_color_Offset == 0x458, "UBP_Sky_Sphere_Desert_01_C::Horizon_color offset is not 458");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Cloud_color_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Cloud_color);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Cloud_color_Offset == 0x468, "UBP_Sky_Sphere_Desert_01_C::Cloud_color offset is not 468");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Overall_Color_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Overall_Color);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Overall_Color_Offset == 0x478, "UBP_Sky_Sphere_Desert_01_C::Overall_Color offset is not 478");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Cloud_speed_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Cloud_speed);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Cloud_speed_Offset == 0x488, "UBP_Sky_Sphere_Desert_01_C::Cloud_speed offset is not 488");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Cloud_opacity_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Cloud_opacity);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Cloud_opacity_Offset == 0x48c, "UBP_Sky_Sphere_Desert_01_C::Cloud_opacity offset is not 48c");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Stars_brightness_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Stars_brightness);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Stars_brightness_Offset == 0x490, "UBP_Sky_Sphere_Desert_01_C::Stars_brightness offset is not 490");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Horizon_color_curve_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Horizon_color_curve);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Horizon_color_curve_Offset == 0x498, "UBP_Sky_Sphere_Desert_01_C::Horizon_color_curve offset is not 498");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Zenith_color_curve_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Zenith_color_curve);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Zenith_color_curve_Offset == 0x4a0, "UBP_Sky_Sphere_Desert_01_C::Zenith_color_curve offset is not 4a0");
	auto constexpr UBP_Sky_Sphere_Desert_01_C_Cloud_color_curve_Offset = offsetof(UBP_Sky_Sphere_Desert_01_C, Cloud_color_curve);
	static_assert(UBP_Sky_Sphere_Desert_01_C_Cloud_color_curve_Offset == 0x4a8, "UBP_Sky_Sphere_Desert_01_C::Cloud_color_curve offset is not 4a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
