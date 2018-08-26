#pragma once
#include "UEnvQueryTest.hpp"
#include "EEnvTestPathfinding.hpp"
#include "FAIDataProviderBoolValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_Pathfinding // Size: 0x240
	: public UEnvQueryTest // Size: 0x1C8
{
private:
	typedef UEnvQueryTest_Pathfinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(644); // id32("Class AIModule.EnvQueryTest_Pathfinding")
		return ptr;
	}
	TEnumAsByte<enum EEnvTestPathfinding> TestMode; /* Ofs: 0x1C8 Size: 0x1 - ByteProperty AIModule.EnvQueryTest_Pathfinding.TestMode */
	uint8_t UnknownData1C9[0x7];
	ExternalPtr<struct UClass> Context; /* Ofs: 0x1D0 Size: 0x8 - ClassProperty AIModule.EnvQueryTest_Pathfinding.Context */
	FAIDataProviderBoolValue PathFromContext; /* Ofs: 0x1D8 Size: 0x30 - StructProperty AIModule.EnvQueryTest_Pathfinding.PathFromContext */
	FAIDataProviderBoolValue SkipUnreachable; /* Ofs: 0x208 Size: 0x30 - StructProperty AIModule.EnvQueryTest_Pathfinding.SkipUnreachable */
	ExternalPtr<struct UClass> FilterClass; /* Ofs: 0x238 Size: 0x8 - ClassProperty AIModule.EnvQueryTest_Pathfinding.FilterClass */


	inline bool SetTestMode(t_structHelper inst, TEnumAsByte<enum EEnvTestPathfinding> value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetContext(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1D0, value); }
	inline bool SetPathFromContext(t_structHelper inst, FAIDataProviderBoolValue value) { inst.WriteOffset(0x1D8, value); }
	inline bool SetSkipUnreachable(t_structHelper inst, FAIDataProviderBoolValue value) { inst.WriteOffset(0x208, value); }
	inline bool SetFilterClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x238, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_Pathfinding = sizeof(UEnvQueryTest_Pathfinding); // 576
    static_assert(sizeof(UEnvQueryTest_Pathfinding) == 0x240, "Size of UEnvQueryTest_Pathfinding is not correct.");
	auto constexpr UEnvQueryTest_Pathfinding_TestMode_Offset = offsetof(UEnvQueryTest_Pathfinding, TestMode);
	static_assert(UEnvQueryTest_Pathfinding_TestMode_Offset == 0x1c8, "UEnvQueryTest_Pathfinding::TestMode offset is not 1c8");
	auto constexpr UEnvQueryTest_Pathfinding_Context_Offset = offsetof(UEnvQueryTest_Pathfinding, Context);
	static_assert(UEnvQueryTest_Pathfinding_Context_Offset == 0x1d0, "UEnvQueryTest_Pathfinding::Context offset is not 1d0");
	auto constexpr UEnvQueryTest_Pathfinding_PathFromContext_Offset = offsetof(UEnvQueryTest_Pathfinding, PathFromContext);
	static_assert(UEnvQueryTest_Pathfinding_PathFromContext_Offset == 0x1d8, "UEnvQueryTest_Pathfinding::PathFromContext offset is not 1d8");
	auto constexpr UEnvQueryTest_Pathfinding_SkipUnreachable_Offset = offsetof(UEnvQueryTest_Pathfinding, SkipUnreachable);
	static_assert(UEnvQueryTest_Pathfinding_SkipUnreachable_Offset == 0x208, "UEnvQueryTest_Pathfinding::SkipUnreachable offset is not 208");
	auto constexpr UEnvQueryTest_Pathfinding_FilterClass_Offset = offsetof(UEnvQueryTest_Pathfinding, FilterClass);
	static_assert(UEnvQueryTest_Pathfinding_FilterClass_Offset == 0x238, "UEnvQueryTest_Pathfinding::FilterClass offset is not 238");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
