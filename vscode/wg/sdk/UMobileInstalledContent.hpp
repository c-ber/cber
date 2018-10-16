#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMobileInstalledContent // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UMobileInstalledContent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2012); // id32("Class MobilePatchingUtils.MobileInstalledContent")
		return ptr;
	}
	uint8_t UnknownData30[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMobileInstalledContent = sizeof(UMobileInstalledContent); // 80
    static_assert(sizeof(UMobileInstalledContent) == 0x50, "Size of UMobileInstalledContent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
