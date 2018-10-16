#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeWidget // Size: 0x380
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UWarModeWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1599); // id32("Class TslGame.WarModeWidget")
		return ptr;
	}
	FScriptMulticastDelegate OnGoalScoreChanged; /* Ofs: 0x300 Size: 0x10 - MulticastDelegateProperty TslGame.WarModeWidget.OnGoalScoreChanged */
	FScriptMulticastDelegate OnMyTeamScoreChanged; /* Ofs: 0x310 Size: 0x10 - MulticastDelegateProperty TslGame.WarModeWidget.OnMyTeamScoreChanged */
	FScriptMulticastDelegate OnHighEnemyScoreChanged; /* Ofs: 0x320 Size: 0x10 - MulticastDelegateProperty TslGame.WarModeWidget.OnHighEnemyScoreChanged */
	FScriptMulticastDelegate OnMyTeamRankChanged; /* Ofs: 0x330 Size: 0x10 - MulticastDelegateProperty TslGame.WarModeWidget.OnMyTeamRankChanged */
	FScriptMulticastDelegate OnTimeLimitChanged; /* Ofs: 0x340 Size: 0x10 - MulticastDelegateProperty TslGame.WarModeWidget.OnTimeLimitChanged */
	FScriptMulticastDelegate OnTeamCountChanged; /* Ofs: 0x350 Size: 0x10 - MulticastDelegateProperty TslGame.WarModeWidget.OnTeamCountChanged */
	FScriptMulticastDelegate OnRespawnTimeChanged; /* Ofs: 0x360 Size: 0x10 - MulticastDelegateProperty TslGame.WarModeWidget.OnRespawnTimeChanged */
	FScriptMulticastDelegate OnMyGainedScoreChanged; /* Ofs: 0x370 Size: 0x10 - MulticastDelegateProperty TslGame.WarModeWidget.OnMyGainedScoreChanged */


	inline bool SetOnGoalScoreChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x300, value); }
	inline bool SetOnMyTeamScoreChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x310, value); }
	inline bool SetOnHighEnemyScoreChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x320, value); }
	inline bool SetOnMyTeamRankChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x330, value); }
	inline bool SetOnTimeLimitChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x340, value); }
	inline bool SetOnTeamCountChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x350, value); }
	inline bool SetOnRespawnTimeChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x360, value); }
	inline bool SetOnMyGainedScoreChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x370, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeWidget = sizeof(UWarModeWidget); // 896
    static_assert(sizeof(UWarModeWidget) == 0x380, "Size of UWarModeWidget is not correct.");
	auto constexpr UWarModeWidget_OnGoalScoreChanged_Offset = offsetof(UWarModeWidget, OnGoalScoreChanged);
	static_assert(UWarModeWidget_OnGoalScoreChanged_Offset == 0x300, "UWarModeWidget::OnGoalScoreChanged offset is not 300");
	auto constexpr UWarModeWidget_OnMyTeamScoreChanged_Offset = offsetof(UWarModeWidget, OnMyTeamScoreChanged);
	static_assert(UWarModeWidget_OnMyTeamScoreChanged_Offset == 0x310, "UWarModeWidget::OnMyTeamScoreChanged offset is not 310");
	auto constexpr UWarModeWidget_OnHighEnemyScoreChanged_Offset = offsetof(UWarModeWidget, OnHighEnemyScoreChanged);
	static_assert(UWarModeWidget_OnHighEnemyScoreChanged_Offset == 0x320, "UWarModeWidget::OnHighEnemyScoreChanged offset is not 320");
	auto constexpr UWarModeWidget_OnMyTeamRankChanged_Offset = offsetof(UWarModeWidget, OnMyTeamRankChanged);
	static_assert(UWarModeWidget_OnMyTeamRankChanged_Offset == 0x330, "UWarModeWidget::OnMyTeamRankChanged offset is not 330");
	auto constexpr UWarModeWidget_OnTimeLimitChanged_Offset = offsetof(UWarModeWidget, OnTimeLimitChanged);
	static_assert(UWarModeWidget_OnTimeLimitChanged_Offset == 0x340, "UWarModeWidget::OnTimeLimitChanged offset is not 340");
	auto constexpr UWarModeWidget_OnTeamCountChanged_Offset = offsetof(UWarModeWidget, OnTeamCountChanged);
	static_assert(UWarModeWidget_OnTeamCountChanged_Offset == 0x350, "UWarModeWidget::OnTeamCountChanged offset is not 350");
	auto constexpr UWarModeWidget_OnRespawnTimeChanged_Offset = offsetof(UWarModeWidget, OnRespawnTimeChanged);
	static_assert(UWarModeWidget_OnRespawnTimeChanged_Offset == 0x360, "UWarModeWidget::OnRespawnTimeChanged offset is not 360");
	auto constexpr UWarModeWidget_OnMyGainedScoreChanged_Offset = offsetof(UWarModeWidget, OnMyGainedScoreChanged);
	static_assert(UWarModeWidget_OnMyGainedScoreChanged_Offset == 0x370, "UWarModeWidget::OnMyGainedScoreChanged offset is not 370");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
