#pragma once
#include "UTslPassAreaRectangle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPassCarePackageAreaRectangle // Size: 0x420
	: public UTslPassAreaRectangle // Size: 0x420
{
private:
	typedef UTslPassCarePackageAreaRectangle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1472); // id32("Class TslGame.TslPassCarePackageAreaRectangle")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPassCarePackageAreaRectangle = sizeof(UTslPassCarePackageAreaRectangle); // 1056
    static_assert(sizeof(UTslPassCarePackageAreaRectangle) == 0x420, "Size of UTslPassCarePackageAreaRectangle is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
