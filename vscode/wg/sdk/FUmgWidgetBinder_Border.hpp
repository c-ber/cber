#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_Border // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UBorder> CachedBorder; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_Border.CachedBorder */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_Border = sizeof(FUmgWidgetBinder_Border); // 32
    static_assert(sizeof(FUmgWidgetBinder_Border) == 0x20, "Size of FUmgWidgetBinder_Border is not correct.");
	auto constexpr FUmgWidgetBinder_Border_CachedBorder_Offset = offsetof(FUmgWidgetBinder_Border, CachedBorder);
	static_assert(FUmgWidgetBinder_Border_CachedBorder_Offset == 0x18, "FUmgWidgetBinder_Border::CachedBorder offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
