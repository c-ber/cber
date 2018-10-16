#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeRankingItemWidget // Size: 0x368
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UWarModeRankingItemWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1595); // id32("Class TslGame.WarModeRankingItemWidget")
		return ptr;
	}
	FUmgWidgetBinder_TextBlock TeamRankTextBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.WarModeRankingItemWidget.TeamRankTextBinder */
	FUmgWidgetBinder_TextBlock TeamLeaderNameTextBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.WarModeRankingItemWidget.TeamLeaderNameTextBinder */
	FUmgWidgetBinder_TextBlock TeamScoreTextBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.WarModeRankingItemWidget.TeamScoreTextBinder */
	FColor MyTeamColor; /* Ofs: 0x360 Size: 0x4 - StructProperty TslGame.WarModeRankingItemWidget.MyTeamColor */
	FColor EnemyTeamColor; /* Ofs: 0x364 Size: 0x4 - StructProperty TslGame.WarModeRankingItemWidget.EnemyTeamColor */


	inline bool SetTeamRankTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x300, value); }
	inline bool SetTeamLeaderNameTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x320, value); }
	inline bool SetTeamScoreTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x340, value); }
	inline bool SetMyTeamColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x360, value); }
	inline bool SetEnemyTeamColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x364, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeRankingItemWidget = sizeof(UWarModeRankingItemWidget); // 872
    static_assert(sizeof(UWarModeRankingItemWidget) == 0x368, "Size of UWarModeRankingItemWidget is not correct.");
	auto constexpr UWarModeRankingItemWidget_TeamRankTextBinder_Offset = offsetof(UWarModeRankingItemWidget, TeamRankTextBinder);
	static_assert(UWarModeRankingItemWidget_TeamRankTextBinder_Offset == 0x300, "UWarModeRankingItemWidget::TeamRankTextBinder offset is not 300");
	auto constexpr UWarModeRankingItemWidget_TeamLeaderNameTextBinder_Offset = offsetof(UWarModeRankingItemWidget, TeamLeaderNameTextBinder);
	static_assert(UWarModeRankingItemWidget_TeamLeaderNameTextBinder_Offset == 0x320, "UWarModeRankingItemWidget::TeamLeaderNameTextBinder offset is not 320");
	auto constexpr UWarModeRankingItemWidget_TeamScoreTextBinder_Offset = offsetof(UWarModeRankingItemWidget, TeamScoreTextBinder);
	static_assert(UWarModeRankingItemWidget_TeamScoreTextBinder_Offset == 0x340, "UWarModeRankingItemWidget::TeamScoreTextBinder offset is not 340");
	auto constexpr UWarModeRankingItemWidget_MyTeamColor_Offset = offsetof(UWarModeRankingItemWidget, MyTeamColor);
	static_assert(UWarModeRankingItemWidget_MyTeamColor_Offset == 0x360, "UWarModeRankingItemWidget::MyTeamColor offset is not 360");
	auto constexpr UWarModeRankingItemWidget_EnemyTeamColor_Offset = offsetof(UWarModeRankingItemWidget, EnemyTeamColor);
	static_assert(UWarModeRankingItemWidget_EnemyTeamColor_Offset == 0x364, "UWarModeRankingItemWidget::EnemyTeamColor offset is not 364");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
