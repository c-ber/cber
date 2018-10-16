#pragma once
#include "UEnvQueryTest.hpp"
#include "FEnvOverlapData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_Overlap // Size: 0x1E8
	: public UEnvQueryTest // Size: 0x1C8
{
private:
	typedef UEnvQueryTest_Overlap t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(643); // id32("Class AIModule.EnvQueryTest_Overlap")
		return ptr;
	}
	FEnvOverlapData OverlapData; /* Ofs: 0x1C8 Size: 0x20 - StructProperty AIModule.EnvQueryTest_Overlap.OverlapData */


	inline bool SetOverlapData(t_structHelper inst, FEnvOverlapData value) { inst.WriteOffset(0x1C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_Overlap = sizeof(UEnvQueryTest_Overlap); // 488
    static_assert(sizeof(UEnvQueryTest_Overlap) == 0x1E8, "Size of UEnvQueryTest_Overlap is not correct.");
	auto constexpr UEnvQueryTest_Overlap_OverlapData_Offset = offsetof(UEnvQueryTest_Overlap, OverlapData);
	static_assert(UEnvQueryTest_Overlap_OverlapData_Offset == 0x1c8, "UEnvQueryTest_Overlap::OverlapData offset is not 1c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
