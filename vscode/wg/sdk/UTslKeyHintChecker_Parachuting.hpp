#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_Parachuting // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_Parachuting t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1407); // id32("Class TslGame.TslKeyHintChecker_Parachuting")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_Parachuting = sizeof(UTslKeyHintChecker_Parachuting); // 56
    static_assert(sizeof(UTslKeyHintChecker_Parachuting) == 0x38, "Size of UTslKeyHintChecker_Parachuting is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
