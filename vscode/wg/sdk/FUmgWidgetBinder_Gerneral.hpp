#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_Gerneral // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UWidget> CachedWidget; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_Gerneral.CachedWidget */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_Gerneral = sizeof(FUmgWidgetBinder_Gerneral); // 32
    static_assert(sizeof(FUmgWidgetBinder_Gerneral) == 0x20, "Size of FUmgWidgetBinder_Gerneral is not correct.");
	auto constexpr FUmgWidgetBinder_Gerneral_CachedWidget_Offset = offsetof(FUmgWidgetBinder_Gerneral, CachedWidget);
	static_assert(FUmgWidgetBinder_Gerneral_CachedWidget_Offset == 0x18, "FUmgWidgetBinder_Gerneral::CachedWidget offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
