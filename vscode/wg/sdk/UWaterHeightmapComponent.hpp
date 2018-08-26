#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWaterHeightmapComponent // Size: 0x260
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UWaterHeightmapComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2062); // id32("Class OceanPlugin.WaterHeightmapComponent")
		return ptr;
	}
//	float DesiredCellSize; /* Ofs: 0x1E8 Size: 0x4 - FloatProperty OceanPlugin.WaterHeightmapComponent.DesiredCellSize */
//	uint8_t boolField1EC;
	float GridSizeMultiplier; /* Ofs: 0x1F0 Size: 0x4 - FloatProperty OceanPlugin.WaterHeightmapComponent.GridSizeMultiplier */
	uint8_t boolField1F4;
	uint8_t boolField1F5;
	uint8_t UnknownData1F6[0x62];
	ExternalPtr<struct UOceanManager> OceanManager; /* Ofs: 0x258 Size: 0x8 - ObjectProperty OceanPlugin.WaterHeightmapComponent.OceanManager */


//	inline bool SetDesiredCellSize(t_structHelper inst, float value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetGridSizeMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x1F0, value); }
	inline bool bDrawUsedTriangles()
	{
		return boolField1F4& 0x1;
	}
	inline bool SetbDrawUsedTriangles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1F4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawHeightmap()
	{
		return boolField1F5& 0x1;
	}
	inline bool SetbDrawHeightmap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1F5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOceanManager(t_structHelper inst, ExternalPtr<struct UOceanManager> value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWaterHeightmapComponent = sizeof(UWaterHeightmapComponent); // 608
    static_assert(sizeof(UWaterHeightmapComponent) == 0x260, "Size of UWaterHeightmapComponent is not correct.");
//	auto constexpr UWaterHeightmapComponent_DesiredCellSize_Offset = offsetof(UWaterHeightmapComponent, DesiredCellSize);
//	static_assert(UWaterHeightmapComponent_DesiredCellSize_Offset == 0x1e8, "UWaterHeightmapComponent::DesiredCellSize offset is not 1e8");
//	auto constexpr UWaterHeightmapComponent_boolField1EC_Offset = offsetof(UWaterHeightmapComponent, boolField1EC);
//	static_assert(UWaterHeightmapComponent_boolField1EC_Offset == 0x1ec, "UWaterHeightmapComponent::boolField1EC offset is not 1ec");
	auto constexpr UWaterHeightmapComponent_GridSizeMultiplier_Offset = offsetof(UWaterHeightmapComponent, GridSizeMultiplier);
	static_assert(UWaterHeightmapComponent_GridSizeMultiplier_Offset == 0x1f0, "UWaterHeightmapComponent::GridSizeMultiplier offset is not 1f0");
	auto constexpr UWaterHeightmapComponent_boolField1F4_Offset = offsetof(UWaterHeightmapComponent, boolField1F4);
	static_assert(UWaterHeightmapComponent_boolField1F4_Offset == 0x1f4, "UWaterHeightmapComponent::boolField1F4 offset is not 1f4");
	auto constexpr UWaterHeightmapComponent_boolField1F5_Offset = offsetof(UWaterHeightmapComponent, boolField1F5);
	static_assert(UWaterHeightmapComponent_boolField1F5_Offset == 0x1f5, "UWaterHeightmapComponent::boolField1F5 offset is not 1f5");
	auto constexpr UWaterHeightmapComponent_OceanManager_Offset = offsetof(UWaterHeightmapComponent, OceanManager);
	static_assert(UWaterHeightmapComponent_OceanManager_Offset == 0x258, "UWaterHeightmapComponent::OceanManager offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
