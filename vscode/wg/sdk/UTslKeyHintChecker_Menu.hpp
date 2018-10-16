#pragma once
#include "UTslKeyHintChecker.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker_Menu // Size: 0x38
	: public UTslKeyHintChecker // Size: 0x38
{
private:
	typedef UTslKeyHintChecker_Menu t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1406); // id32("Class TslGame.TslKeyHintChecker_Menu")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker_Menu = sizeof(UTslKeyHintChecker_Menu); // 56
    static_assert(sizeof(UTslKeyHintChecker_Menu) == 0x38, "Size of UTslKeyHintChecker_Menu is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
