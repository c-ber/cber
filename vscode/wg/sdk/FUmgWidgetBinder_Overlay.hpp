#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_Overlay // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UOverlay> CachedOverlay; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_Overlay.CachedOverlay */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_Overlay = sizeof(FUmgWidgetBinder_Overlay); // 32
    static_assert(sizeof(FUmgWidgetBinder_Overlay) == 0x20, "Size of FUmgWidgetBinder_Overlay is not correct.");
	auto constexpr FUmgWidgetBinder_Overlay_CachedOverlay_Offset = offsetof(FUmgWidgetBinder_Overlay, CachedOverlay);
	static_assert(FUmgWidgetBinder_Overlay_CachedOverlay_Offset == 0x18, "FUmgWidgetBinder_Overlay::CachedOverlay offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
