#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeLayerInfoObject // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef ULandscapeLayerInfoObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1291); // id32("Class Landscape.LandscapeLayerInfoObject")
		return ptr;
	}
	FName LayerName; /* Ofs: 0x30 Size: 0x8 - NameProperty Landscape.LandscapeLayerInfoObject.LayerName */
	ExternalPtr<struct UPhysicalMaterial> PhysMaterial; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Landscape.LandscapeLayerInfoObject.PhysMaterial */
	float Hardness; /* Ofs: 0x40 Size: 0x4 - FloatProperty Landscape.LandscapeLayerInfoObject.Hardness */
	FLinearColor LayerUsageDebugColor; /* Ofs: 0x44 Size: 0x10 - StructProperty Landscape.LandscapeLayerInfoObject.LayerUsageDebugColor */
	uint8_t UnknownData54[0x4];


	inline bool SetLayerName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool SetPhysMaterial(t_structHelper inst, ExternalPtr<struct UPhysicalMaterial> value) { inst.WriteOffset(0x38, value); }
	inline bool SetHardness(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetLayerUsageDebugColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x44, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeLayerInfoObject = sizeof(ULandscapeLayerInfoObject); // 88
    static_assert(sizeof(ULandscapeLayerInfoObject) == 0x58, "Size of ULandscapeLayerInfoObject is not correct.");
	auto constexpr ULandscapeLayerInfoObject_LayerName_Offset = offsetof(ULandscapeLayerInfoObject, LayerName);
	static_assert(ULandscapeLayerInfoObject_LayerName_Offset == 0x30, "ULandscapeLayerInfoObject::LayerName offset is not 30");
	auto constexpr ULandscapeLayerInfoObject_PhysMaterial_Offset = offsetof(ULandscapeLayerInfoObject, PhysMaterial);
	static_assert(ULandscapeLayerInfoObject_PhysMaterial_Offset == 0x38, "ULandscapeLayerInfoObject::PhysMaterial offset is not 38");
	auto constexpr ULandscapeLayerInfoObject_Hardness_Offset = offsetof(ULandscapeLayerInfoObject, Hardness);
	static_assert(ULandscapeLayerInfoObject_Hardness_Offset == 0x40, "ULandscapeLayerInfoObject::Hardness offset is not 40");
	auto constexpr ULandscapeLayerInfoObject_LayerUsageDebugColor_Offset = offsetof(ULandscapeLayerInfoObject, LayerUsageDebugColor);
	static_assert(ULandscapeLayerInfoObject_LayerUsageDebugColor_Offset == 0x44, "ULandscapeLayerInfoObject::LayerUsageDebugColor offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
