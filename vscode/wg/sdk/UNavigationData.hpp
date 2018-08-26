#pragma once
#include "UActor.hpp"
#include "FNavDataConfig.hpp"
#include "ERuntimeGenerationType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationData // Size: 0x5B0
	: public UActor // Size: 0x410
{
private:
	typedef UNavigationData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1758); // id32("Class Engine.NavigationData")
		return ptr;
	}
//	ExternalPtr<struct UPrimitiveComponent> RenderingComp; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.NavigationData.RenderingComp */
	FNavDataConfig NavDataConfig; /* Ofs: 0x410 Size: 0x50 - StructProperty Engine.NavigationData.NavDataConfig */
	uint8_t boolField460;
	uint8_t UnknownData461[0x3];
	TEnumAsByte<enum ERuntimeGenerationType> RuntimeGeneration; /* Ofs: 0x464 Size: 0x1 - EnumProperty Engine.NavigationData.RuntimeGeneration */
	uint8_t UnknownData465[0x3];
	float ObservedPathsTickInterval; /* Ofs: 0x468 Size: 0x4 - FloatProperty Engine.NavigationData.ObservedPathsTickInterval */
	uint32_t DataVersion; /* Ofs: 0x46C Size: 0x4 - UInt32Property Engine.NavigationData.DataVersion */
	uint8_t UnknownData470[0xD0];
	TArray<struct FSupportedAreaData> SupportedAreas; /* Ofs: 0x540 Size: 0x10 - ArrayProperty Engine.NavigationData.SupportedAreas */
	uint8_t UnknownData550[0x60];


//	inline bool SetRenderingComp(t_structHelper inst, ExternalPtr<struct UPrimitiveComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetNavDataConfig(t_structHelper inst, FNavDataConfig value) { inst.WriteOffset(0x410, value); }
	inline bool bEnableDrawing()
	{
		return boolField460& 0x1;
	}
	inline bool SetbEnableDrawing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x460, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bForceRebuildOnLoad()
	{
		return boolField460& 0x2;
	}
	inline bool SetbForceRebuildOnLoad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x460, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCanBeMainNavData()
	{
		return boolField460& 0x4;
	}
	inline bool SetbCanBeMainNavData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x460, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bCanSpawnOnRebuild()
	{
		return boolField460& 0x8;
	}
	inline bool SetbCanSpawnOnRebuild(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x460, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bRebuildAtRuntime()
	{
		return boolField460& 0x10;
	}
	inline bool SetbRebuildAtRuntime(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x460, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetRuntimeGeneration(t_structHelper inst, TEnumAsByte<enum ERuntimeGenerationType> value) { inst.WriteOffset(0x464, value); }
	inline bool SetObservedPathsTickInterval(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool SetDataVersion(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x46C, value); }
	inline bool SetSupportedAreas(t_structHelper inst, TArray<struct FSupportedAreaData> value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationData = sizeof(UNavigationData); // 1456
    static_assert(sizeof(UNavigationData) == 0x5B0, "Size of UNavigationData is not correct.");
//	auto constexpr UNavigationData_RenderingComp_Offset = offsetof(UNavigationData, RenderingComp);
//	static_assert(UNavigationData_RenderingComp_Offset == 0x408, "UNavigationData::RenderingComp offset is not 408");
	auto constexpr UNavigationData_NavDataConfig_Offset = offsetof(UNavigationData, NavDataConfig);
	static_assert(UNavigationData_NavDataConfig_Offset == 0x410, "UNavigationData::NavDataConfig offset is not 410");
	auto constexpr UNavigationData_boolField460_Offset = offsetof(UNavigationData, boolField460);
	static_assert(UNavigationData_boolField460_Offset == 0x460, "UNavigationData::boolField460 offset is not 460");
	auto constexpr UNavigationData_RuntimeGeneration_Offset = offsetof(UNavigationData, RuntimeGeneration);
	static_assert(UNavigationData_RuntimeGeneration_Offset == 0x464, "UNavigationData::RuntimeGeneration offset is not 464");
	auto constexpr UNavigationData_ObservedPathsTickInterval_Offset = offsetof(UNavigationData, ObservedPathsTickInterval);
	static_assert(UNavigationData_ObservedPathsTickInterval_Offset == 0x468, "UNavigationData::ObservedPathsTickInterval offset is not 468");
	auto constexpr UNavigationData_DataVersion_Offset = offsetof(UNavigationData, DataVersion);
	static_assert(UNavigationData_DataVersion_Offset == 0x46c, "UNavigationData::DataVersion offset is not 46c");
	auto constexpr UNavigationData_SupportedAreas_Offset = offsetof(UNavigationData, SupportedAreas);
	static_assert(UNavigationData_SupportedAreas_Offset == 0x540, "UNavigationData::SupportedAreas offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
