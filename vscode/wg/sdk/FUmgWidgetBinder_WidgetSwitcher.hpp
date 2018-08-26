#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_WidgetSwitcher // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UWidgetSwitcher> CachedWidgetSwitcher; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_WidgetSwitcher.CachedWidgetSwitcher */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_WidgetSwitcher = sizeof(FUmgWidgetBinder_WidgetSwitcher); // 32
    static_assert(sizeof(FUmgWidgetBinder_WidgetSwitcher) == 0x20, "Size of FUmgWidgetBinder_WidgetSwitcher is not correct.");
	auto constexpr FUmgWidgetBinder_WidgetSwitcher_CachedWidgetSwitcher_Offset = offsetof(FUmgWidgetBinder_WidgetSwitcher, CachedWidgetSwitcher);
	static_assert(FUmgWidgetBinder_WidgetSwitcher_CachedWidgetSwitcher_Offset == 0x18, "FUmgWidgetBinder_WidgetSwitcher::CachedWidgetSwitcher offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
