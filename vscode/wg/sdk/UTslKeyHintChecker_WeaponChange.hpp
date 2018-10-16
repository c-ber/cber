#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_WeaponChange // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_WeaponChange t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1412); // id32("Class TslGame.TslKeyHintChecker_WeaponChange")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_WeaponChange = sizeof(UTslKeyHintChecker_WeaponChange); // 56
    static_assert(sizeof(UTslKeyHintChecker_WeaponChange) == 0x38, "Size of UTslKeyHintChecker_WeaponChange is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
