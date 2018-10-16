#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_HorizontalBox // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UHorizontalBox> CachedHorizontalBox; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_HorizontalBox.CachedHorizontalBox */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_HorizontalBox = sizeof(FUmgWidgetBinder_HorizontalBox); // 32
    static_assert(sizeof(FUmgWidgetBinder_HorizontalBox) == 0x20, "Size of FUmgWidgetBinder_HorizontalBox is not correct.");
	auto constexpr FUmgWidgetBinder_HorizontalBox_CachedHorizontalBox_Offset = offsetof(FUmgWidgetBinder_HorizontalBox, CachedHorizontalBox);
	static_assert(FUmgWidgetBinder_HorizontalBox_CachedHorizontalBox_Offset == 0x18, "FUmgWidgetBinder_HorizontalBox::CachedHorizontalBox offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
