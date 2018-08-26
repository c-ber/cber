#pragma once
#include "UTslPassArea.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPassBluezoneArea // Size: 0x420
	: public UTslPassArea // Size: 0x420
{
private:
	typedef UTslPassBluezoneArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1468); // id32("Class TslGame.TslPassBluezoneArea")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPassBluezoneArea = sizeof(UTslPassBluezoneArea); // 1056
    static_assert(sizeof(UTslPassBluezoneArea) == 0x420, "Size of UTslPassBluezoneArea is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
