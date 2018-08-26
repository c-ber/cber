#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMediaOverlays // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef UMediaOverlays t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(345); // id32("Class MediaAssets.MediaOverlays")
		return ptr;
	}
	uint8_t UnknownData30[0x90];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMediaOverlays = sizeof(UMediaOverlays); // 192
    static_assert(sizeof(UMediaOverlays) == 0xC0, "Size of UMediaOverlays is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
