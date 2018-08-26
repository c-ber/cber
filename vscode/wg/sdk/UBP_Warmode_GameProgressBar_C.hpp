#pragma once
#include "UWarModeScoreDelimiter.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Warmode_GameProgressBar_C // Size: 0x4A0
	: public UWarModeScoreDelimiter // Size: 0x420
{
private:
	typedef UBP_Warmode_GameProgressBar_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193376); // id32("WidgetBlueprintGeneratedClass BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x420 Size: 0x8 - StructProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> EnemyUpAnim; /* Ofs: 0x428 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.EnemyUpAnim */
	ExternalPtr<struct UWidgetAnimation> EnemyDownAnim; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.EnemyDownAnim */
	ExternalPtr<struct UWidgetAnimation> MyTeamUpAnim; /* Ofs: 0x438 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.MyTeamUpAnim */
	ExternalPtr<struct UWidgetAnimation> MyTeamDownAnim; /* Ofs: 0x440 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.MyTeamDownAnim */
	ExternalPtr<struct UHorizontalBox> IndicatorEnemy_down; /* Ofs: 0x448 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.IndicatorEnemy_down */
	ExternalPtr<struct UImage> IndicatorEnemyImage_down; /* Ofs: 0x450 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.IndicatorEnemyImage_down */
	ExternalPtr<struct UImage> IndicatorEnemyImage_up; /* Ofs: 0x458 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.IndicatorEnemyImage_up */
	ExternalPtr<struct UImage> IndicatorMyTeamImage_down; /* Ofs: 0x460 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.IndicatorMyTeamImage_down */
	ExternalPtr<struct UImage> IndicatorMyTeamImage_up; /* Ofs: 0x468 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.IndicatorMyTeamImage_up */
	ExternalPtr<struct UImage> ProgressBarBGImage; /* Ofs: 0x470 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.ProgressBarBGImage */
	ExternalPtr<struct UImage> ProgressBarBottomImage; /* Ofs: 0x478 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.ProgressBarBottomImage */
	ExternalPtr<struct UImage> ProgressBarEnemyImage; /* Ofs: 0x480 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.ProgressBarEnemyImage */
	ExternalPtr<struct UImage> ProgressBarMyTeamImage; /* Ofs: 0x488 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.ProgressBarMyTeamImage */
	ExternalPtr<struct UImage> ProgressBarTopImage; /* Ofs: 0x490 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.ProgressBarTopImage */
	ExternalPtr<struct UWidgetSwitcher> RankWidgetSwicher; /* Ofs: 0x498 Size: 0x8 - ObjectProperty BP_Warmode_GameProgressBar.BP_Warmode_GameProgressBar_C.RankWidgetSwicher */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x420, value); }
	inline bool SetEnemyUpAnim(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x428, value); }
	inline bool SetEnemyDownAnim(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x430, value); }
	inline bool SetMyTeamUpAnim(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x438, value); }
	inline bool SetMyTeamDownAnim(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x440, value); }
	inline bool SetIndicatorEnemy_down(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x448, value); }
	inline bool SetIndicatorEnemyImage_down(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x450, value); }
	inline bool SetIndicatorEnemyImage_up(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x458, value); }
	inline bool SetIndicatorMyTeamImage_down(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x460, value); }
	inline bool SetIndicatorMyTeamImage_up(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x468, value); }
	inline bool SetProgressBarBGImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x470, value); }
	inline bool SetProgressBarBottomImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x478, value); }
	inline bool SetProgressBarEnemyImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x480, value); }
	inline bool SetProgressBarMyTeamImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x488, value); }
	inline bool SetProgressBarTopImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x490, value); }
	inline bool SetRankWidgetSwicher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Warmode_GameProgressBar_C = sizeof(UBP_Warmode_GameProgressBar_C); // 1184
    static_assert(sizeof(UBP_Warmode_GameProgressBar_C) == 0x4A0, "Size of UBP_Warmode_GameProgressBar_C is not correct.");
	auto constexpr UBP_Warmode_GameProgressBar_C_UberGraphFrame_Offset = offsetof(UBP_Warmode_GameProgressBar_C, UberGraphFrame);
	static_assert(UBP_Warmode_GameProgressBar_C_UberGraphFrame_Offset == 0x420, "UBP_Warmode_GameProgressBar_C::UberGraphFrame offset is not 420");
	auto constexpr UBP_Warmode_GameProgressBar_C_EnemyUpAnim_Offset = offsetof(UBP_Warmode_GameProgressBar_C, EnemyUpAnim);
	static_assert(UBP_Warmode_GameProgressBar_C_EnemyUpAnim_Offset == 0x428, "UBP_Warmode_GameProgressBar_C::EnemyUpAnim offset is not 428");
	auto constexpr UBP_Warmode_GameProgressBar_C_EnemyDownAnim_Offset = offsetof(UBP_Warmode_GameProgressBar_C, EnemyDownAnim);
	static_assert(UBP_Warmode_GameProgressBar_C_EnemyDownAnim_Offset == 0x430, "UBP_Warmode_GameProgressBar_C::EnemyDownAnim offset is not 430");
	auto constexpr UBP_Warmode_GameProgressBar_C_MyTeamUpAnim_Offset = offsetof(UBP_Warmode_GameProgressBar_C, MyTeamUpAnim);
	static_assert(UBP_Warmode_GameProgressBar_C_MyTeamUpAnim_Offset == 0x438, "UBP_Warmode_GameProgressBar_C::MyTeamUpAnim offset is not 438");
	auto constexpr UBP_Warmode_GameProgressBar_C_MyTeamDownAnim_Offset = offsetof(UBP_Warmode_GameProgressBar_C, MyTeamDownAnim);
	static_assert(UBP_Warmode_GameProgressBar_C_MyTeamDownAnim_Offset == 0x440, "UBP_Warmode_GameProgressBar_C::MyTeamDownAnim offset is not 440");
	auto constexpr UBP_Warmode_GameProgressBar_C_IndicatorEnemy_down_Offset = offsetof(UBP_Warmode_GameProgressBar_C, IndicatorEnemy_down);
	static_assert(UBP_Warmode_GameProgressBar_C_IndicatorEnemy_down_Offset == 0x448, "UBP_Warmode_GameProgressBar_C::IndicatorEnemy_down offset is not 448");
	auto constexpr UBP_Warmode_GameProgressBar_C_IndicatorEnemyImage_down_Offset = offsetof(UBP_Warmode_GameProgressBar_C, IndicatorEnemyImage_down);
	static_assert(UBP_Warmode_GameProgressBar_C_IndicatorEnemyImage_down_Offset == 0x450, "UBP_Warmode_GameProgressBar_C::IndicatorEnemyImage_down offset is not 450");
	auto constexpr UBP_Warmode_GameProgressBar_C_IndicatorEnemyImage_up_Offset = offsetof(UBP_Warmode_GameProgressBar_C, IndicatorEnemyImage_up);
	static_assert(UBP_Warmode_GameProgressBar_C_IndicatorEnemyImage_up_Offset == 0x458, "UBP_Warmode_GameProgressBar_C::IndicatorEnemyImage_up offset is not 458");
	auto constexpr UBP_Warmode_GameProgressBar_C_IndicatorMyTeamImage_down_Offset = offsetof(UBP_Warmode_GameProgressBar_C, IndicatorMyTeamImage_down);
	static_assert(UBP_Warmode_GameProgressBar_C_IndicatorMyTeamImage_down_Offset == 0x460, "UBP_Warmode_GameProgressBar_C::IndicatorMyTeamImage_down offset is not 460");
	auto constexpr UBP_Warmode_GameProgressBar_C_IndicatorMyTeamImage_up_Offset = offsetof(UBP_Warmode_GameProgressBar_C, IndicatorMyTeamImage_up);
	static_assert(UBP_Warmode_GameProgressBar_C_IndicatorMyTeamImage_up_Offset == 0x468, "UBP_Warmode_GameProgressBar_C::IndicatorMyTeamImage_up offset is not 468");
	auto constexpr UBP_Warmode_GameProgressBar_C_ProgressBarBGImage_Offset = offsetof(UBP_Warmode_GameProgressBar_C, ProgressBarBGImage);
	static_assert(UBP_Warmode_GameProgressBar_C_ProgressBarBGImage_Offset == 0x470, "UBP_Warmode_GameProgressBar_C::ProgressBarBGImage offset is not 470");
	auto constexpr UBP_Warmode_GameProgressBar_C_ProgressBarBottomImage_Offset = offsetof(UBP_Warmode_GameProgressBar_C, ProgressBarBottomImage);
	static_assert(UBP_Warmode_GameProgressBar_C_ProgressBarBottomImage_Offset == 0x478, "UBP_Warmode_GameProgressBar_C::ProgressBarBottomImage offset is not 478");
	auto constexpr UBP_Warmode_GameProgressBar_C_ProgressBarEnemyImage_Offset = offsetof(UBP_Warmode_GameProgressBar_C, ProgressBarEnemyImage);
	static_assert(UBP_Warmode_GameProgressBar_C_ProgressBarEnemyImage_Offset == 0x480, "UBP_Warmode_GameProgressBar_C::ProgressBarEnemyImage offset is not 480");
	auto constexpr UBP_Warmode_GameProgressBar_C_ProgressBarMyTeamImage_Offset = offsetof(UBP_Warmode_GameProgressBar_C, ProgressBarMyTeamImage);
	static_assert(UBP_Warmode_GameProgressBar_C_ProgressBarMyTeamImage_Offset == 0x488, "UBP_Warmode_GameProgressBar_C::ProgressBarMyTeamImage offset is not 488");
	auto constexpr UBP_Warmode_GameProgressBar_C_ProgressBarTopImage_Offset = offsetof(UBP_Warmode_GameProgressBar_C, ProgressBarTopImage);
	static_assert(UBP_Warmode_GameProgressBar_C_ProgressBarTopImage_Offset == 0x490, "UBP_Warmode_GameProgressBar_C::ProgressBarTopImage offset is not 490");
	auto constexpr UBP_Warmode_GameProgressBar_C_RankWidgetSwicher_Offset = offsetof(UBP_Warmode_GameProgressBar_C, RankWidgetSwicher);
	static_assert(UBP_Warmode_GameProgressBar_C_RankWidgetSwicher_Offset == 0x498, "UBP_Warmode_GameProgressBar_C::RankWidgetSwicher offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
