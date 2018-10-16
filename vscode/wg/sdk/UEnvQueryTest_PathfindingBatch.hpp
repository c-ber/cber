#pragma once
#include "UEnvQueryTest_Pathfinding.hpp"
#include "FAIDataProviderFloatValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_PathfindingBatch // Size: 0x270
	: public UEnvQueryTest_Pathfinding // Size: 0x240
{
private:
	typedef UEnvQueryTest_PathfindingBatch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(645); // id32("Class AIModule.EnvQueryTest_PathfindingBatch")
		return ptr;
	}
	FAIDataProviderFloatValue ScanRangeMultiplier; /* Ofs: 0x240 Size: 0x30 - StructProperty AIModule.EnvQueryTest_PathfindingBatch.ScanRangeMultiplier */


	inline bool SetScanRangeMultiplier(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x240, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_PathfindingBatch = sizeof(UEnvQueryTest_PathfindingBatch); // 624
    static_assert(sizeof(UEnvQueryTest_PathfindingBatch) == 0x270, "Size of UEnvQueryTest_PathfindingBatch is not correct.");
	auto constexpr UEnvQueryTest_PathfindingBatch_ScanRangeMultiplier_Offset = offsetof(UEnvQueryTest_PathfindingBatch, ScanRangeMultiplier);
	static_assert(UEnvQueryTest_PathfindingBatch_ScanRangeMultiplier_Offset == 0x240, "UEnvQueryTest_PathfindingBatch::ScanRangeMultiplier offset is not 240");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
