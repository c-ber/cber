#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_HorizontalBox.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeScoreDelimiter // Size: 0x420
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UWarModeScoreDelimiter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1598); // id32("Class TslGame.WarModeScoreDelimiter")
		return ptr;
	}
	FUmgWidgetBinder_WidgetSwitcher RankWidgetSwitcher; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.WarModeScoreDelimiter.RankWidgetSwitcher */
	FUmgWidgetBinder_Animation MyTeamUpAnimationBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.WarModeScoreDelimiter.MyTeamUpAnimationBinder */
	FUmgWidgetBinder_Animation MyTeamDownAnimationBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.WarModeScoreDelimiter.MyTeamDownAnimationBinder */
	FUmgWidgetBinder_Animation EnemyTeamUpAnimationBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.WarModeScoreDelimiter.EnemyTeamUpAnimationBinder */
	FUmgWidgetBinder_Animation EnemyTeamDownAnimationBinder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.WarModeScoreDelimiter.EnemyTeamDownAnimationBinder */
	FUmgWidgetBinder_HorizontalBox EnemyDownWidgetBinder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.WarModeScoreDelimiter.EnemyDownWidgetBinder */
	FUmgWidgetBinder_Image MyTeamGaugeBinder; /* Ofs: 0x3C0 Size: 0x28 - StructProperty TslGame.WarModeScoreDelimiter.MyTeamGaugeBinder */
	FUmgWidgetBinder_Image EnemyGaugeBinder; /* Ofs: 0x3E8 Size: 0x28 - StructProperty TslGame.WarModeScoreDelimiter.EnemyGaugeBinder */
	int32_t LastMyTeamRank; /* Ofs: 0x410 Size: 0x4 - IntProperty TslGame.WarModeScoreDelimiter.LastMyTeamRank */
	int32_t LastMyTeamScore; /* Ofs: 0x414 Size: 0x4 - IntProperty TslGame.WarModeScoreDelimiter.LastMyTeamScore */
	int32_t LastEnemyHighScore; /* Ofs: 0x418 Size: 0x4 - IntProperty TslGame.WarModeScoreDelimiter.LastEnemyHighScore */
	uint8_t boolField41C;
	uint8_t UnknownData41D[0x3];


	inline bool SetRankWidgetSwitcher(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x300, value); }
	inline bool SetMyTeamUpAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x320, value); }
	inline bool SetMyTeamDownAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x340, value); }
	inline bool SetEnemyTeamUpAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x360, value); }
	inline bool SetEnemyTeamDownAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x380, value); }
	inline bool SetEnemyDownWidgetBinder(t_structHelper inst, FUmgWidgetBinder_HorizontalBox value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetMyTeamGaugeBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetEnemyGaugeBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetLastMyTeamRank(t_structHelper inst, int32_t value) { inst.WriteOffset(0x410, value); }
	inline bool SetLastMyTeamScore(t_structHelper inst, int32_t value) { inst.WriteOffset(0x414, value); }
	inline bool SetLastEnemyHighScore(t_structHelper inst, int32_t value) { inst.WriteOffset(0x418, value); }
	inline bool bNeedDraw()
	{
		return boolField41C& 0x1;
	}
	inline bool SetbNeedDraw(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeScoreDelimiter = sizeof(UWarModeScoreDelimiter); // 1056
    static_assert(sizeof(UWarModeScoreDelimiter) == 0x420, "Size of UWarModeScoreDelimiter is not correct.");
	auto constexpr UWarModeScoreDelimiter_RankWidgetSwitcher_Offset = offsetof(UWarModeScoreDelimiter, RankWidgetSwitcher);
	static_assert(UWarModeScoreDelimiter_RankWidgetSwitcher_Offset == 0x300, "UWarModeScoreDelimiter::RankWidgetSwitcher offset is not 300");
	auto constexpr UWarModeScoreDelimiter_MyTeamUpAnimationBinder_Offset = offsetof(UWarModeScoreDelimiter, MyTeamUpAnimationBinder);
	static_assert(UWarModeScoreDelimiter_MyTeamUpAnimationBinder_Offset == 0x320, "UWarModeScoreDelimiter::MyTeamUpAnimationBinder offset is not 320");
	auto constexpr UWarModeScoreDelimiter_MyTeamDownAnimationBinder_Offset = offsetof(UWarModeScoreDelimiter, MyTeamDownAnimationBinder);
	static_assert(UWarModeScoreDelimiter_MyTeamDownAnimationBinder_Offset == 0x340, "UWarModeScoreDelimiter::MyTeamDownAnimationBinder offset is not 340");
	auto constexpr UWarModeScoreDelimiter_EnemyTeamUpAnimationBinder_Offset = offsetof(UWarModeScoreDelimiter, EnemyTeamUpAnimationBinder);
	static_assert(UWarModeScoreDelimiter_EnemyTeamUpAnimationBinder_Offset == 0x360, "UWarModeScoreDelimiter::EnemyTeamUpAnimationBinder offset is not 360");
	auto constexpr UWarModeScoreDelimiter_EnemyTeamDownAnimationBinder_Offset = offsetof(UWarModeScoreDelimiter, EnemyTeamDownAnimationBinder);
	static_assert(UWarModeScoreDelimiter_EnemyTeamDownAnimationBinder_Offset == 0x380, "UWarModeScoreDelimiter::EnemyTeamDownAnimationBinder offset is not 380");
	auto constexpr UWarModeScoreDelimiter_EnemyDownWidgetBinder_Offset = offsetof(UWarModeScoreDelimiter, EnemyDownWidgetBinder);
	static_assert(UWarModeScoreDelimiter_EnemyDownWidgetBinder_Offset == 0x3a0, "UWarModeScoreDelimiter::EnemyDownWidgetBinder offset is not 3a0");
	auto constexpr UWarModeScoreDelimiter_MyTeamGaugeBinder_Offset = offsetof(UWarModeScoreDelimiter, MyTeamGaugeBinder);
	static_assert(UWarModeScoreDelimiter_MyTeamGaugeBinder_Offset == 0x3c0, "UWarModeScoreDelimiter::MyTeamGaugeBinder offset is not 3c0");
	auto constexpr UWarModeScoreDelimiter_EnemyGaugeBinder_Offset = offsetof(UWarModeScoreDelimiter, EnemyGaugeBinder);
	static_assert(UWarModeScoreDelimiter_EnemyGaugeBinder_Offset == 0x3e8, "UWarModeScoreDelimiter::EnemyGaugeBinder offset is not 3e8");
	auto constexpr UWarModeScoreDelimiter_LastMyTeamRank_Offset = offsetof(UWarModeScoreDelimiter, LastMyTeamRank);
	static_assert(UWarModeScoreDelimiter_LastMyTeamRank_Offset == 0x410, "UWarModeScoreDelimiter::LastMyTeamRank offset is not 410");
	auto constexpr UWarModeScoreDelimiter_LastMyTeamScore_Offset = offsetof(UWarModeScoreDelimiter, LastMyTeamScore);
	static_assert(UWarModeScoreDelimiter_LastMyTeamScore_Offset == 0x414, "UWarModeScoreDelimiter::LastMyTeamScore offset is not 414");
	auto constexpr UWarModeScoreDelimiter_LastEnemyHighScore_Offset = offsetof(UWarModeScoreDelimiter, LastEnemyHighScore);
	static_assert(UWarModeScoreDelimiter_LastEnemyHighScore_Offset == 0x418, "UWarModeScoreDelimiter::LastEnemyHighScore offset is not 418");
	auto constexpr UWarModeScoreDelimiter_boolField41C_Offset = offsetof(UWarModeScoreDelimiter, boolField41C);
	static_assert(UWarModeScoreDelimiter_boolField41C_Offset == 0x41c, "UWarModeScoreDelimiter::boolField41C offset is not 41c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
