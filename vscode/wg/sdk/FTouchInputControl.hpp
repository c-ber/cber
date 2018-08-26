#pragma once
#include "FVector2D.hpp"
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTouchInputControl // Size: 0x68
{
public:
    ExternalPtr<struct UTexture2D> Image1; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.TouchInputControl.Image1 */
    ExternalPtr<struct UTexture2D> Image2; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.TouchInputControl.Image2 */
    FVector2D Center; /* Ofs: 0x10 Size: 0x8 StructProperty Engine.TouchInputControl.Center */
    FVector2D VisualSize; /* Ofs: 0x18 Size: 0x8 StructProperty Engine.TouchInputControl.VisualSize */
    FVector2D ThumbSize; /* Ofs: 0x20 Size: 0x8 StructProperty Engine.TouchInputControl.ThumbSize */
    FVector2D InteractionSize; /* Ofs: 0x28 Size: 0x8 StructProperty Engine.TouchInputControl.InteractionSize */
    FVector2D InputScale; /* Ofs: 0x30 Size: 0x8 StructProperty Engine.TouchInputControl.InputScale */
    FKey MainInputKey; /* Ofs: 0x38 Size: 0x18 StructProperty Engine.TouchInputControl.MainInputKey */
    FKey AltInputKey; /* Ofs: 0x50 Size: 0x18 StructProperty Engine.TouchInputControl.AltInputKey */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTouchInputControl = sizeof(FTouchInputControl); // 104
    static_assert(sizeof(FTouchInputControl) == 0x68, "Size of FTouchInputControl is not correct.");
	auto constexpr FTouchInputControl_Image1_Offset = offsetof(FTouchInputControl, Image1);
	static_assert(FTouchInputControl_Image1_Offset == 0x0, "FTouchInputControl::Image1 offset is not 0");
	auto constexpr FTouchInputControl_Image2_Offset = offsetof(FTouchInputControl, Image2);
	static_assert(FTouchInputControl_Image2_Offset == 0x8, "FTouchInputControl::Image2 offset is not 8");
	auto constexpr FTouchInputControl_Center_Offset = offsetof(FTouchInputControl, Center);
	static_assert(FTouchInputControl_Center_Offset == 0x10, "FTouchInputControl::Center offset is not 10");
	auto constexpr FTouchInputControl_VisualSize_Offset = offsetof(FTouchInputControl, VisualSize);
	static_assert(FTouchInputControl_VisualSize_Offset == 0x18, "FTouchInputControl::VisualSize offset is not 18");
	auto constexpr FTouchInputControl_ThumbSize_Offset = offsetof(FTouchInputControl, ThumbSize);
	static_assert(FTouchInputControl_ThumbSize_Offset == 0x20, "FTouchInputControl::ThumbSize offset is not 20");
	auto constexpr FTouchInputControl_InteractionSize_Offset = offsetof(FTouchInputControl, InteractionSize);
	static_assert(FTouchInputControl_InteractionSize_Offset == 0x28, "FTouchInputControl::InteractionSize offset is not 28");
	auto constexpr FTouchInputControl_InputScale_Offset = offsetof(FTouchInputControl, InputScale);
	static_assert(FTouchInputControl_InputScale_Offset == 0x30, "FTouchInputControl::InputScale offset is not 30");
	auto constexpr FTouchInputControl_MainInputKey_Offset = offsetof(FTouchInputControl, MainInputKey);
	static_assert(FTouchInputControl_MainInputKey_Offset == 0x38, "FTouchInputControl::MainInputKey offset is not 38");
	auto constexpr FTouchInputControl_AltInputKey_Offset = offsetof(FTouchInputControl, AltInputKey);
	static_assert(FTouchInputControl_AltInputKey_Offset == 0x50, "FTouchInputControl::AltInputKey offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
