#pragma once
#include "UEnvQueryTest.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_Random // Size: 0x1C8
	: public UEnvQueryTest // Size: 0x1C8
{
private:
	typedef UEnvQueryTest_Random t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(647); // id32("Class AIModule.EnvQueryTest_Random")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_Random = sizeof(UEnvQueryTest_Random); // 456
    static_assert(sizeof(UEnvQueryTest_Random) == 0x1C8, "Size of UEnvQueryTest_Random is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
