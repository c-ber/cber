#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_Aim // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_Aim t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1414); // id32("Class TslGame.TslKeyHintChecker_Aim")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_Aim = sizeof(UTslKeyHintChecker_Aim); // 56
    static_assert(sizeof(UTslKeyHintChecker_Aim) == 0x38, "Size of UTslKeyHintChecker_Aim is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
