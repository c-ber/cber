#pragma once
#include "UEnvQueryGenerator_SimpleGrid.hpp"
#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_PathingGrid // Size: 0x158
	: public UEnvQueryGenerator_SimpleGrid // Size: 0xF0
{
private:
	typedef UEnvQueryGenerator_PathingGrid t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(638); // id32("Class AIModule.EnvQueryGenerator_PathingGrid")
		return ptr;
	}
	FAIDataProviderBoolValue PathToItem; /* Ofs: 0xF0 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_PathingGrid.PathToItem */
	ExternalPtr<struct UClass> NavigationFilter; /* Ofs: 0x120 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_PathingGrid.NavigationFilter */
	FAIDataProviderFloatValue ScanRangeMultiplier; /* Ofs: 0x128 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_PathingGrid.ScanRangeMultiplier */


	inline bool SetPathToItem(t_structHelper inst, FAIDataProviderBoolValue value) { inst.WriteOffset(0xF0, value); }
	inline bool SetNavigationFilter(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x120, value); }
	inline bool SetScanRangeMultiplier(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x128, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_PathingGrid = sizeof(UEnvQueryGenerator_PathingGrid); // 344
    static_assert(sizeof(UEnvQueryGenerator_PathingGrid) == 0x158, "Size of UEnvQueryGenerator_PathingGrid is not correct.");
	auto constexpr UEnvQueryGenerator_PathingGrid_PathToItem_Offset = offsetof(UEnvQueryGenerator_PathingGrid, PathToItem);
	static_assert(UEnvQueryGenerator_PathingGrid_PathToItem_Offset == 0xf0, "UEnvQueryGenerator_PathingGrid::PathToItem offset is not f0");
	auto constexpr UEnvQueryGenerator_PathingGrid_NavigationFilter_Offset = offsetof(UEnvQueryGenerator_PathingGrid, NavigationFilter);
	static_assert(UEnvQueryGenerator_PathingGrid_NavigationFilter_Offset == 0x120, "UEnvQueryGenerator_PathingGrid::NavigationFilter offset is not 120");
	auto constexpr UEnvQueryGenerator_PathingGrid_ScanRangeMultiplier_Offset = offsetof(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier);
	static_assert(UEnvQueryGenerator_PathingGrid_ScanRangeMultiplier_Offset == 0x128, "UEnvQueryGenerator_PathingGrid::ScanRangeMultiplier offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
