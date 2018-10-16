#pragma once
#include "UTslPassArea.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPassCarePackageArea // Size: 0x420
	: public UTslPassArea // Size: 0x420
{
private:
	typedef UTslPassCarePackageArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1469); // id32("Class TslGame.TslPassCarePackageArea")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPassCarePackageArea = sizeof(UTslPassCarePackageArea); // 1056
    static_assert(sizeof(UTslPassCarePackageArea) == 0x420, "Size of UTslPassCarePackageArea is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
