#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_VerticalBox // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UVerticalBox> CachedVerticalBox; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_VerticalBox.CachedVerticalBox */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_VerticalBox = sizeof(FUmgWidgetBinder_VerticalBox); // 32
    static_assert(sizeof(FUmgWidgetBinder_VerticalBox) == 0x20, "Size of FUmgWidgetBinder_VerticalBox is not correct.");
	auto constexpr FUmgWidgetBinder_VerticalBox_CachedVerticalBox_Offset = offsetof(FUmgWidgetBinder_VerticalBox, CachedVerticalBox);
	static_assert(FUmgWidgetBinder_VerticalBox_CachedVerticalBox_Offset == 0x18, "FUmgWidgetBinder_VerticalBox::CachedVerticalBox offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
