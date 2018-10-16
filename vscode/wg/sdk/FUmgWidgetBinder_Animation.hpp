#pragma once
#include "FUmgWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder_Animation // Size: 0x20
 : public FUmgWidgetBinder // Size: 0x18
{
public:
    ExternalPtr<struct UWidgetAnimation> CachedAnimation; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder_Animation.CachedAnimation */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder_Animation = sizeof(FUmgWidgetBinder_Animation); // 32
    static_assert(sizeof(FUmgWidgetBinder_Animation) == 0x20, "Size of FUmgWidgetBinder_Animation is not correct.");
	auto constexpr FUmgWidgetBinder_Animation_CachedAnimation_Offset = offsetof(FUmgWidgetBinder_Animation, CachedAnimation);
	static_assert(FUmgWidgetBinder_Animation_CachedAnimation_Offset == 0x18, "FUmgWidgetBinder_Animation::CachedAnimation offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
