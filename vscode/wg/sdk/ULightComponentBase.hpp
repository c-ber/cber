#pragma once
#include "USceneComponent.hpp"
#include "FGuid.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightComponentBase // Size: 0x4C0
	: public USceneComponent // Size: 0x490
{
private:
	typedef ULightComponentBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(186); // id32("Class Engine.LightComponentBase")
		return ptr;
	}
	FGuid LightGuid; /* Ofs: 0x490 Size: 0x10 - StructProperty Engine.LightComponentBase.LightGuid */
	float Brightness; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Engine.LightComponentBase.Brightness */
	float Intensity; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty Engine.LightComponentBase.Intensity */
	FColor LightColor; /* Ofs: 0x4A8 Size: 0x4 - StructProperty Engine.LightComponentBase.LightColor */
	uint8_t boolField4AC;
	uint8_t UnknownData4AD[0x3];
	float IndirectLightingIntensity; /* Ofs: 0x4B0 Size: 0x4 - FloatProperty Engine.LightComponentBase.IndirectLightingIntensity */
	float VolumetricScatteringIntensity; /* Ofs: 0x4B4 Size: 0x4 - FloatProperty Engine.LightComponentBase.VolumetricScatteringIntensity */
	uint8_t UnknownData4B8[0x8];


	inline bool SetLightGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x490, value); }
	inline bool SetBrightness(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetLightColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x4A8, value); }
	inline bool bAffectsWorld()
	{
		return boolField4AC& 0x1;
	}
	inline bool SetbAffectsWorld(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4AC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool CastShadows()
	{
		return boolField4AC& 0x2;
	}
	inline bool SetCastShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4AC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool CastStaticShadows()
	{
		return boolField4AC& 0x4;
	}
	inline bool SetCastStaticShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4AC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool CastDynamicShadows()
	{
		return boolField4AC& 0x8;
	}
	inline bool SetCastDynamicShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4AC, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bAffectTranslucentLighting()
	{
		return boolField4AC& 0x10;
	}
	inline bool SetbAffectTranslucentLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4AC, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bCastVolumetricShadow()
	{
		return boolField4AC& 0x20;
	}
	inline bool SetbCastVolumetricShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4AC, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetIndirectLightingIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetVolumetricScatteringIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x4B4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightComponentBase = sizeof(ULightComponentBase); // 1216
    static_assert(sizeof(ULightComponentBase) == 0x4C0, "Size of ULightComponentBase is not correct.");
	auto constexpr ULightComponentBase_LightGuid_Offset = offsetof(ULightComponentBase, LightGuid);
	static_assert(ULightComponentBase_LightGuid_Offset == 0x490, "ULightComponentBase::LightGuid offset is not 490");
	auto constexpr ULightComponentBase_Brightness_Offset = offsetof(ULightComponentBase, Brightness);
	static_assert(ULightComponentBase_Brightness_Offset == 0x4a0, "ULightComponentBase::Brightness offset is not 4a0");
	auto constexpr ULightComponentBase_Intensity_Offset = offsetof(ULightComponentBase, Intensity);
	static_assert(ULightComponentBase_Intensity_Offset == 0x4a4, "ULightComponentBase::Intensity offset is not 4a4");
	auto constexpr ULightComponentBase_LightColor_Offset = offsetof(ULightComponentBase, LightColor);
	static_assert(ULightComponentBase_LightColor_Offset == 0x4a8, "ULightComponentBase::LightColor offset is not 4a8");
	auto constexpr ULightComponentBase_boolField4AC_Offset = offsetof(ULightComponentBase, boolField4AC);
	static_assert(ULightComponentBase_boolField4AC_Offset == 0x4ac, "ULightComponentBase::boolField4AC offset is not 4ac");
	auto constexpr ULightComponentBase_IndirectLightingIntensity_Offset = offsetof(ULightComponentBase, IndirectLightingIntensity);
	static_assert(ULightComponentBase_IndirectLightingIntensity_Offset == 0x4b0, "ULightComponentBase::IndirectLightingIntensity offset is not 4b0");
	auto constexpr ULightComponentBase_VolumetricScatteringIntensity_Offset = offsetof(ULightComponentBase, VolumetricScatteringIntensity);
	static_assert(ULightComponentBase_VolumetricScatteringIntensity_Offset == 0x4b4, "ULightComponentBase::VolumetricScatteringIntensity offset is not 4b4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
