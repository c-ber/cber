#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_Swimming // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_Swimming t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1418); // id32("Class TslGame.TslKeyHintChecker_Swimming")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_Swimming = sizeof(UTslKeyHintChecker_Swimming); // 56
    static_assert(sizeof(UTslKeyHintChecker_Swimming) == 0x38, "Size of UTslKeyHintChecker_Swimming is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
