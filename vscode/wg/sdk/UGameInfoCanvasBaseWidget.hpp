#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_RetainerBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameInfoCanvasBaseWidget // Size: 0x3C0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UGameInfoCanvasBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1526); // id32("Class TslGame.GameInfoCanvasBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_WidgetSwitcher GamePlayInfoSwitcherBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.GameInfoCanvasBaseWidget.GamePlayInfoSwitcherBinder */
	FUmgWidgetBinder_WidgetSwitcher KillCountOrTeamCountSwitcherBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.GameInfoCanvasBaseWidget.KillCountOrTeamCountSwitcherBinder */
	FUmgWidgetBinder_UserWidget AlivePlayerWidgetBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.GameInfoCanvasBaseWidget.AlivePlayerWidgetBinder */
	FUmgWidgetBinder_RetainerBox AlivePlayerInfoRetainerBoxBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.GameInfoCanvasBaseWidget.AlivePlayerInfoRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget KillCountWidgetBinder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.GameInfoCanvasBaseWidget.KillCountWidgetBinder */
	FUmgWidgetBinder_RetainerBox KillCountWidgetRetainerBoxBinder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.GameInfoCanvasBaseWidget.KillCountWidgetRetainerBoxBinder */


	inline bool SetGamePlayInfoSwitcherBinder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x300, value); }
	inline bool SetKillCountOrTeamCountSwitcherBinder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x320, value); }
	inline bool SetAlivePlayerWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x340, value); }
	inline bool SetAlivePlayerInfoRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x360, value); }
	inline bool SetKillCountWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x380, value); }
	inline bool SetKillCountWidgetRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x3A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameInfoCanvasBaseWidget = sizeof(UGameInfoCanvasBaseWidget); // 960
    static_assert(sizeof(UGameInfoCanvasBaseWidget) == 0x3C0, "Size of UGameInfoCanvasBaseWidget is not correct.");
	auto constexpr UGameInfoCanvasBaseWidget_GamePlayInfoSwitcherBinder_Offset = offsetof(UGameInfoCanvasBaseWidget, GamePlayInfoSwitcherBinder);
	static_assert(UGameInfoCanvasBaseWidget_GamePlayInfoSwitcherBinder_Offset == 0x300, "UGameInfoCanvasBaseWidget::GamePlayInfoSwitcherBinder offset is not 300");
	auto constexpr UGameInfoCanvasBaseWidget_KillCountOrTeamCountSwitcherBinder_Offset = offsetof(UGameInfoCanvasBaseWidget, KillCountOrTeamCountSwitcherBinder);
	static_assert(UGameInfoCanvasBaseWidget_KillCountOrTeamCountSwitcherBinder_Offset == 0x320, "UGameInfoCanvasBaseWidget::KillCountOrTeamCountSwitcherBinder offset is not 320");
	auto constexpr UGameInfoCanvasBaseWidget_AlivePlayerWidgetBinder_Offset = offsetof(UGameInfoCanvasBaseWidget, AlivePlayerWidgetBinder);
	static_assert(UGameInfoCanvasBaseWidget_AlivePlayerWidgetBinder_Offset == 0x340, "UGameInfoCanvasBaseWidget::AlivePlayerWidgetBinder offset is not 340");
	auto constexpr UGameInfoCanvasBaseWidget_AlivePlayerInfoRetainerBoxBinder_Offset = offsetof(UGameInfoCanvasBaseWidget, AlivePlayerInfoRetainerBoxBinder);
	static_assert(UGameInfoCanvasBaseWidget_AlivePlayerInfoRetainerBoxBinder_Offset == 0x360, "UGameInfoCanvasBaseWidget::AlivePlayerInfoRetainerBoxBinder offset is not 360");
	auto constexpr UGameInfoCanvasBaseWidget_KillCountWidgetBinder_Offset = offsetof(UGameInfoCanvasBaseWidget, KillCountWidgetBinder);
	static_assert(UGameInfoCanvasBaseWidget_KillCountWidgetBinder_Offset == 0x380, "UGameInfoCanvasBaseWidget::KillCountWidgetBinder offset is not 380");
	auto constexpr UGameInfoCanvasBaseWidget_KillCountWidgetRetainerBoxBinder_Offset = offsetof(UGameInfoCanvasBaseWidget, KillCountWidgetRetainerBoxBinder);
	static_assert(UGameInfoCanvasBaseWidget_KillCountWidgetRetainerBoxBinder_Offset == 0x3a0, "UGameInfoCanvasBaseWidget::KillCountWidgetRetainerBoxBinder offset is not 3a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
