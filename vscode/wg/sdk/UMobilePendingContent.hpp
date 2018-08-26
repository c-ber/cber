#pragma once
#include "UMobileInstalledContent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMobilePendingContent // Size: 0x90
	: public UMobileInstalledContent // Size: 0x50
{
private:
	typedef UMobilePendingContent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2013); // id32("Class MobilePatchingUtils.MobilePendingContent")
		return ptr;
	}
	uint8_t UnknownData50[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMobilePendingContent = sizeof(UMobilePendingContent); // 144
    static_assert(sizeof(UMobilePendingContent) == 0x90, "Size of UMobilePendingContent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
