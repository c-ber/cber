#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_UserWidget // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UUserWidget> CachedWidget; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_UserWidget.CachedWidget */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_UserWidget = sizeof(FUmgWidgetBinder_UserWidget); // 32
    static_assert(sizeof(FUmgWidgetBinder_UserWidget) == 0x20, "Size of FUmgWidgetBinder_UserWidget is not correct.");
	auto constexpr FUmgWidgetBinder_UserWidget_CachedWidget_Offset = offsetof(FUmgWidgetBinder_UserWidget, CachedWidget);
	static_assert(FUmgWidgetBinder_UserWidget_CachedWidget_Offset == 0x18, "FUmgWidgetBinder_UserWidget::CachedWidget offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
