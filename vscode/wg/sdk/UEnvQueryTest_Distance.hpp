#pragma once
#include "UEnvQueryTest.hpp"
#include "EEnvTestDistance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_Distance // Size: 0x1D8
	: public UEnvQueryTest // Size: 0x1C8
{
private:
	typedef UEnvQueryTest_Distance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(640); // id32("Class AIModule.EnvQueryTest_Distance")
		return ptr;
	}
	TEnumAsByte<enum EEnvTestDistance> TestMode; /* Ofs: 0x1C8 Size: 0x1 - ByteProperty AIModule.EnvQueryTest_Distance.TestMode */
	uint8_t UnknownData1C9[0x7];
	ExternalPtr<struct UClass> DistanceTo; /* Ofs: 0x1D0 Size: 0x8 - ClassProperty AIModule.EnvQueryTest_Distance.DistanceTo */


	inline bool SetTestMode(t_structHelper inst, TEnumAsByte<enum EEnvTestDistance> value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetDistanceTo(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_Distance = sizeof(UEnvQueryTest_Distance); // 472
    static_assert(sizeof(UEnvQueryTest_Distance) == 0x1D8, "Size of UEnvQueryTest_Distance is not correct.");
	auto constexpr UEnvQueryTest_Distance_TestMode_Offset = offsetof(UEnvQueryTest_Distance, TestMode);
	static_assert(UEnvQueryTest_Distance_TestMode_Offset == 0x1c8, "UEnvQueryTest_Distance::TestMode offset is not 1c8");
	auto constexpr UEnvQueryTest_Distance_DistanceTo_Offset = offsetof(UEnvQueryTest_Distance, DistanceTo);
	static_assert(UEnvQueryTest_Distance_DistanceTo_Offset == 0x1d0, "UEnvQueryTest_Distance::DistanceTo offset is not 1d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
