#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplayProblemBaseWidget // Size: 0x380
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UReplayProblemBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1543); // id32("Class TslGame.ReplayProblemBaseWidget")
		return ptr;
	}
	int32_t CheckElapsedTime; /* Ofs: 0x300 Size: 0x4 - IntProperty TslGame.ReplayProblemBaseWidget.CheckElapsedTime */
	uint8_t UnknownData304[0x4];
	FUmgWidgetBinder_Animation IconBlinkingAnimBinder; /* Ofs: 0x308 Size: 0x20 - StructProperty TslGame.ReplayProblemBaseWidget.IconBlinkingAnimBinder */
	FUmgWidgetBinder_TextBlock DisplayTextBlock; /* Ofs: 0x328 Size: 0x20 - StructProperty TslGame.ReplayProblemBaseWidget.DisplayTextBlock */
	FText DefaultFailureText; /* Ofs: 0x348 Size: 0x18 - TextProperty TslGame.ReplayProblemBaseWidget.DefaultFailureText */
	FText KillcamUnusualMovementText; /* Ofs: 0x360 Size: 0x18 - TextProperty TslGame.ReplayProblemBaseWidget.KillcamUnusualMovementText */
	uint8_t UnknownData378[0x8];


	inline bool SetCheckElapsedTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x300, value); }
	inline bool SetIconBlinkingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x308, value); }
	inline bool SetDisplayTextBlock(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x328, value); }
	inline bool SetDefaultFailureText(t_structHelper inst, FText value) { inst.WriteOffset(0x348, value); }
	inline bool SetKillcamUnusualMovementText(t_structHelper inst, FText value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplayProblemBaseWidget = sizeof(UReplayProblemBaseWidget); // 896
    static_assert(sizeof(UReplayProblemBaseWidget) == 0x380, "Size of UReplayProblemBaseWidget is not correct.");
	auto constexpr UReplayProblemBaseWidget_CheckElapsedTime_Offset = offsetof(UReplayProblemBaseWidget, CheckElapsedTime);
	static_assert(UReplayProblemBaseWidget_CheckElapsedTime_Offset == 0x300, "UReplayProblemBaseWidget::CheckElapsedTime offset is not 300");
	auto constexpr UReplayProblemBaseWidget_IconBlinkingAnimBinder_Offset = offsetof(UReplayProblemBaseWidget, IconBlinkingAnimBinder);
	static_assert(UReplayProblemBaseWidget_IconBlinkingAnimBinder_Offset == 0x308, "UReplayProblemBaseWidget::IconBlinkingAnimBinder offset is not 308");
	auto constexpr UReplayProblemBaseWidget_DisplayTextBlock_Offset = offsetof(UReplayProblemBaseWidget, DisplayTextBlock);
	static_assert(UReplayProblemBaseWidget_DisplayTextBlock_Offset == 0x328, "UReplayProblemBaseWidget::DisplayTextBlock offset is not 328");
	auto constexpr UReplayProblemBaseWidget_DefaultFailureText_Offset = offsetof(UReplayProblemBaseWidget, DefaultFailureText);
	static_assert(UReplayProblemBaseWidget_DefaultFailureText_Offset == 0x348, "UReplayProblemBaseWidget::DefaultFailureText offset is not 348");
	auto constexpr UReplayProblemBaseWidget_KillcamUnusualMovementText_Offset = offsetof(UReplayProblemBaseWidget, KillcamUnusualMovementText);
	static_assert(UReplayProblemBaseWidget_KillcamUnusualMovementText_Offset == 0x360, "UReplayProblemBaseWidget::KillcamUnusualMovementText offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
