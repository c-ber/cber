#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_RetainerBox // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct URetainerBox> CachedRetainerBox; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_RetainerBox.CachedRetainerBox */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_RetainerBox = sizeof(FUmgWidgetBinder_RetainerBox); // 32
    static_assert(sizeof(FUmgWidgetBinder_RetainerBox) == 0x20, "Size of FUmgWidgetBinder_RetainerBox is not correct.");
	auto constexpr FUmgWidgetBinder_RetainerBox_CachedRetainerBox_Offset = offsetof(FUmgWidgetBinder_RetainerBox, CachedRetainerBox);
	static_assert(FUmgWidgetBinder_RetainerBox_CachedRetainerBox_Offset == 0x18, "FUmgWidgetBinder_RetainerBox::CachedRetainerBox offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
