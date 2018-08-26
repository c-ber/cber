#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_SizeBox // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct USizeBox> CachedSizeBox; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_SizeBox.CachedSizeBox */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_SizeBox = sizeof(FUmgWidgetBinder_SizeBox); // 32
    static_assert(sizeof(FUmgWidgetBinder_SizeBox) == 0x20, "Size of FUmgWidgetBinder_SizeBox is not correct.");
	auto constexpr FUmgWidgetBinder_SizeBox_CachedSizeBox_Offset = offsetof(FUmgWidgetBinder_SizeBox, CachedSizeBox);
	static_assert(FUmgWidgetBinder_SizeBox_CachedSizeBox_Offset == 0x18, "FUmgWidgetBinder_SizeBox::CachedSizeBox offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
