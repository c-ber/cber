#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_Driver // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_Driver t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1409); // id32("Class TslGame.TslKeyHintChecker_Driver")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_Driver = sizeof(UTslKeyHintChecker_Driver); // 56
    static_assert(sizeof(UTslKeyHintChecker_Driver) == 0x38, "Size of UTslKeyHintChecker_Driver is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
