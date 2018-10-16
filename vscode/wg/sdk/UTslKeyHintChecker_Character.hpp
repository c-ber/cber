#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_Character // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_Character t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1408); // id32("Class TslGame.TslKeyHintChecker_Character")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_Character = sizeof(UTslKeyHintChecker_Character); // 56
    static_assert(sizeof(UTslKeyHintChecker_Character) == 0x38, "Size of UTslKeyHintChecker_Character is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
