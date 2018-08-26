#pragma once
#include "FTslWidgetConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslWidgetState // Size: 0x40
{
public:
    FTslWidgetConfig Config; /* Ofs: 0x0 Size: 0x20 StructProperty TslGame.TslWidgetState.Config */
    ExternalPtr<struct UUserWidget> Widget; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.TslWidgetState.Widget */
    uint8_t UnknownData28[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslWidgetState = sizeof(FTslWidgetState); // 64
    static_assert(sizeof(FTslWidgetState) == 0x40, "Size of FTslWidgetState is not correct.");
	auto constexpr FTslWidgetState_Config_Offset = offsetof(FTslWidgetState, Config);
	static_assert(FTslWidgetState_Config_Offset == 0x0, "FTslWidgetState::Config offset is not 0");
	auto constexpr FTslWidgetState_Widget_Offset = offsetof(FTslWidgetState, Widget);
	static_assert(FTslWidgetState_Widget_Offset == 0x20, "FTslWidgetState::Widget offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
