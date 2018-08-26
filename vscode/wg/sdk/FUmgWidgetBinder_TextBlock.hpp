#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_TextBlock // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UTextBlock> CachedTextBlock; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_TextBlock.CachedTextBlock */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_TextBlock = sizeof(FUmgWidgetBinder_TextBlock); // 32
    static_assert(sizeof(FUmgWidgetBinder_TextBlock) == 0x20, "Size of FUmgWidgetBinder_TextBlock is not correct.");
	auto constexpr FUmgWidgetBinder_TextBlock_CachedTextBlock_Offset = offsetof(FUmgWidgetBinder_TextBlock, CachedTextBlock);
	static_assert(FUmgWidgetBinder_TextBlock_CachedTextBlock_Offset == 0x18, "FUmgWidgetBinder_TextBlock::CachedTextBlock offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
