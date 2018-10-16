#pragma once
#include "UWarModeWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeWidgetBP_C // Size: 0x3E8
	: public UWarModeWidget // Size: 0x380
{
private:
	typedef UWarModeWidgetBP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193493); // id32("WidgetBlueprintGeneratedClass WarModeWidgetBP.WarModeWidgetBP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x380 Size: 0x8 - StructProperty WarModeWidgetBP.WarModeWidgetBP_C.UberGraphFrame */
	ExternalPtr<struct UBP_Warmode_EnemyScore_C> BP_Warmode_EnemyScore_21; /* Ofs: 0x388 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_EnemyScore_21 */
	ExternalPtr<struct UBP_Warmode_GameProgressBar_C> BP_Warmode_GameProgressBar_82; /* Ofs: 0x390 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_GameProgressBar_82 */
	ExternalPtr<struct UBP_Warmode_GameTimer_C> BP_Warmode_GameTimer_53; /* Ofs: 0x398 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_GameTimer_53 */
	ExternalPtr<struct UBP_Warmode_GoalScore_C> BP_Warmode_GoalScore; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_GoalScore */
	ExternalPtr<struct UBP_Warmode_MyTeamScore_C> BP_Warmode_MyTeamScore; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_MyTeamScore */
	ExternalPtr<struct UBP_Warmode_PointFeedback_C> BP_Warmode_PointFeedback_249; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_PointFeedback_249 */
	ExternalPtr<struct UBP_Warmode_RespawnTimer_C> BP_Warmode_RespawnTimer_134; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_RespawnTimer_134 */
	ExternalPtr<struct UBP_Warmode_RespawnTimer_C> BP_Warmode_RespawnTimer_C_1; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_RespawnTimer_C_1 */
	ExternalPtr<struct UBP_Warmode_SpectatorRespawnTimer_C> BP_Warmode_SpectatorRespawnTimer; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_SpectatorRespawnTimer */
	ExternalPtr<struct UBP_Warmode_TeamRank_C> BP_Warmode_TeamRank; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_TeamRank */
	ExternalPtr<struct UBP_Warmode_CurrentTeamScore_C> BP_Warmode_TeamScore_392; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.BP_Warmode_TeamScore_392 */
	ExternalPtr<struct UWidgetSwitcher> ScoreSwitcher; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty WarModeWidgetBP.WarModeWidgetBP_C.ScoreSwitcher */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x380, value); }
	inline bool SetBP_Warmode_EnemyScore_21(t_structHelper inst, ExternalPtr<struct UBP_Warmode_EnemyScore_C> value) { inst.WriteOffset(0x388, value); }
	inline bool SetBP_Warmode_GameProgressBar_82(t_structHelper inst, ExternalPtr<struct UBP_Warmode_GameProgressBar_C> value) { inst.WriteOffset(0x390, value); }
	inline bool SetBP_Warmode_GameTimer_53(t_structHelper inst, ExternalPtr<struct UBP_Warmode_GameTimer_C> value) { inst.WriteOffset(0x398, value); }
	inline bool SetBP_Warmode_GoalScore(t_structHelper inst, ExternalPtr<struct UBP_Warmode_GoalScore_C> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetBP_Warmode_MyTeamScore(t_structHelper inst, ExternalPtr<struct UBP_Warmode_MyTeamScore_C> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetBP_Warmode_PointFeedback_249(t_structHelper inst, ExternalPtr<struct UBP_Warmode_PointFeedback_C> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetBP_Warmode_RespawnTimer_134(t_structHelper inst, ExternalPtr<struct UBP_Warmode_RespawnTimer_C> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetBP_Warmode_RespawnTimer_C_1(t_structHelper inst, ExternalPtr<struct UBP_Warmode_RespawnTimer_C> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetBP_Warmode_SpectatorRespawnTimer(t_structHelper inst, ExternalPtr<struct UBP_Warmode_SpectatorRespawnTimer_C> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetBP_Warmode_TeamRank(t_structHelper inst, ExternalPtr<struct UBP_Warmode_TeamRank_C> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetBP_Warmode_TeamScore_392(t_structHelper inst, ExternalPtr<struct UBP_Warmode_CurrentTeamScore_C> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetScoreSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeWidgetBP_C = sizeof(UWarModeWidgetBP_C); // 1000
    static_assert(sizeof(UWarModeWidgetBP_C) == 0x3E8, "Size of UWarModeWidgetBP_C is not correct.");
	auto constexpr UWarModeWidgetBP_C_UberGraphFrame_Offset = offsetof(UWarModeWidgetBP_C, UberGraphFrame);
	static_assert(UWarModeWidgetBP_C_UberGraphFrame_Offset == 0x380, "UWarModeWidgetBP_C::UberGraphFrame offset is not 380");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_EnemyScore_21_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_EnemyScore_21);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_EnemyScore_21_Offset == 0x388, "UWarModeWidgetBP_C::BP_Warmode_EnemyScore_21 offset is not 388");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_GameProgressBar_82_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_GameProgressBar_82);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_GameProgressBar_82_Offset == 0x390, "UWarModeWidgetBP_C::BP_Warmode_GameProgressBar_82 offset is not 390");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_GameTimer_53_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_GameTimer_53);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_GameTimer_53_Offset == 0x398, "UWarModeWidgetBP_C::BP_Warmode_GameTimer_53 offset is not 398");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_GoalScore_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_GoalScore);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_GoalScore_Offset == 0x3a0, "UWarModeWidgetBP_C::BP_Warmode_GoalScore offset is not 3a0");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_MyTeamScore_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_MyTeamScore);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_MyTeamScore_Offset == 0x3a8, "UWarModeWidgetBP_C::BP_Warmode_MyTeamScore offset is not 3a8");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_PointFeedback_249_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_PointFeedback_249);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_PointFeedback_249_Offset == 0x3b0, "UWarModeWidgetBP_C::BP_Warmode_PointFeedback_249 offset is not 3b0");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_RespawnTimer_134_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_RespawnTimer_134);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_RespawnTimer_134_Offset == 0x3b8, "UWarModeWidgetBP_C::BP_Warmode_RespawnTimer_134 offset is not 3b8");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_RespawnTimer_C_1_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_RespawnTimer_C_1);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_RespawnTimer_C_1_Offset == 0x3c0, "UWarModeWidgetBP_C::BP_Warmode_RespawnTimer_C_1 offset is not 3c0");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_SpectatorRespawnTimer_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_SpectatorRespawnTimer);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_SpectatorRespawnTimer_Offset == 0x3c8, "UWarModeWidgetBP_C::BP_Warmode_SpectatorRespawnTimer offset is not 3c8");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_TeamRank_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_TeamRank);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_TeamRank_Offset == 0x3d0, "UWarModeWidgetBP_C::BP_Warmode_TeamRank offset is not 3d0");
	auto constexpr UWarModeWidgetBP_C_BP_Warmode_TeamScore_392_Offset = offsetof(UWarModeWidgetBP_C, BP_Warmode_TeamScore_392);
	static_assert(UWarModeWidgetBP_C_BP_Warmode_TeamScore_392_Offset == 0x3d8, "UWarModeWidgetBP_C::BP_Warmode_TeamScore_392 offset is not 3d8");
	auto constexpr UWarModeWidgetBP_C_ScoreSwitcher_Offset = offsetof(UWarModeWidgetBP_C, ScoreSwitcher);
	static_assert(UWarModeWidgetBP_C_ScoreSwitcher_Offset == 0x3e0, "UWarModeWidgetBP_C::ScoreSwitcher offset is not 3e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
