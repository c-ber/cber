#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_Rider // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_Rider t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1410); // id32("Class TslGame.TslKeyHintChecker_Rider")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_Rider = sizeof(UTslKeyHintChecker_Rider); // 56
    static_assert(sizeof(UTslKeyHintChecker_Rider) == 0x38, "Size of UTslKeyHintChecker_Rider is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
