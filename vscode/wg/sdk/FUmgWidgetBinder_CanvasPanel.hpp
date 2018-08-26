#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_CanvasPanel // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UCanvasPanel> CachedCanvasPanel; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_CanvasPanel.CachedCanvasPanel */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_CanvasPanel = sizeof(FUmgWidgetBinder_CanvasPanel); // 32
    static_assert(sizeof(FUmgWidgetBinder_CanvasPanel) == 0x20, "Size of FUmgWidgetBinder_CanvasPanel is not correct.");
	auto constexpr FUmgWidgetBinder_CanvasPanel_CachedCanvasPanel_Offset = offsetof(FUmgWidgetBinder_CanvasPanel, CachedCanvasPanel);
	static_assert(FUmgWidgetBinder_CanvasPanel_CachedCanvasPanel_Offset == 0x18, "FUmgWidgetBinder_CanvasPanel::CachedCanvasPanel offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
