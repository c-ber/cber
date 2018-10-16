#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_ADS_8x15x // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_ADS_8x15x t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1415); // id32("Class TslGame.TslKeyHintChecker_ADS_8x15x")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_ADS_8x15x = sizeof(UTslKeyHintChecker_ADS_8x15x); // 56
    static_assert(sizeof(UTslKeyHintChecker_ADS_8x15x) == 0x38, "Size of UTslKeyHintChecker_ADS_8x15x is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
