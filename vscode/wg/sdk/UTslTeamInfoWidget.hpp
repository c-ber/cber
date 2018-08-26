#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_HorizontalBox.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FColorBlindColorSet.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslTeamInfoWidget // Size: 0x508
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslTeamInfoWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1586); // id32("Class TslGame.TslTeamInfoWidget")
		return ptr;
	}
	uint8_t boolField300;
	uint8_t boolField301;
	uint8_t boolField302;
	uint8_t UnknownData303[0x5];
	FUmgWidgetBinder_HorizontalBox TeamHpAreaBinder; /* Ofs: 0x308 Size: 0x20 - StructProperty TslGame.TslTeamInfoWidget.TeamHpAreaBinder */
	FUmgWidgetBinder_Border TeamInfoAreaBinder; /* Ofs: 0x328 Size: 0x20 - StructProperty TslGame.TslTeamInfoWidget.TeamInfoAreaBinder */
	FUmgWidgetBinder_Border InfoIconBorderBinder; /* Ofs: 0x348 Size: 0x20 - StructProperty TslGame.TslTeamInfoWidget.InfoIconBorderBinder */
	FUmgWidgetBinder_Image InfoIconBinder; /* Ofs: 0x368 Size: 0x28 - StructProperty TslGame.TslTeamInfoWidget.InfoIconBinder */
	FUmgWidgetBinder_Image SpeakingImageBinder; /* Ofs: 0x390 Size: 0x28 - StructProperty TslGame.TslTeamInfoWidget.SpeakingImageBinder */
	FUmgWidgetBinder_Border MarkerIconBorderBinder; /* Ofs: 0x3B8 Size: 0x20 - StructProperty TslGame.TslTeamInfoWidget.MarkerIconBorderBinder */
	FUmgWidgetBinder_Image MarkerImageBinder; /* Ofs: 0x3D8 Size: 0x28 - StructProperty TslGame.TslTeamInfoWidget.MarkerImageBinder */
	FUmgWidgetBinder_Image BoostImageBinder; /* Ofs: 0x400 Size: 0x28 - StructProperty TslGame.TslTeamInfoWidget.BoostImageBinder */
	uint8_t boolField428;
	uint8_t UnknownData429[0x7];
	FUmgWidgetBinder_TextBlock TeamNameBinder; /* Ofs: 0x430 Size: 0x20 - StructProperty TslGame.TslTeamInfoWidget.TeamNameBinder */
	FUmgWidgetBinder_Animation OnSpeakAnimBinder; /* Ofs: 0x450 Size: 0x20 - StructProperty TslGame.TslTeamInfoWidget.OnSpeakAnimBinder */
	FUmgWidgetBinder_UserWidget HealthGaugeWidgetBinder; /* Ofs: 0x470 Size: 0x20 - StructProperty TslGame.TslTeamInfoWidget.HealthGaugeWidgetBinder */
	FColorBlindColorSet ColorBlindColorSet; /* Ofs: 0x490 Size: 0x10 - StructProperty TslGame.TslTeamInfoWidget.ColorBlindColorSet */
	FUmgWidgetBinder_Image TeamMemberColorBinder; /* Ofs: 0x4A0 Size: 0x28 - StructProperty TslGame.TslTeamInfoWidget.TeamMemberColorBinder */
	FUmgWidgetBinder_Image PlayerIconImageBinder; /* Ofs: 0x4C8 Size: 0x28 - StructProperty TslGame.TslTeamInfoWidget.PlayerIconImageBinder */
	ExternalPtr<struct UTeam> Team; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty TslGame.TslTeamInfoWidget.Team */
	FLinearColor QuitColor; /* Ofs: 0x4F8 Size: 0x10 - StructProperty TslGame.TslTeamInfoWidget.QuitColor */


	inline bool bBindVoiceChatEvent()
	{
		return boolField300& 0x1;
	}
	inline bool SetbBindVoiceChatEvent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x300, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSpeaking()
	{
		return boolField301& 0x1;
	}
	inline bool SetbSpeaking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x301, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bMute()
	{
		return boolField302& 0x1;
	}
	inline bool SetbMute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x302, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsRestricted()
	{
		return boolField302& 0x2;
	}
	inline bool SetbIsRestricted(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x302, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetTeamHpAreaBinder(t_structHelper inst, FUmgWidgetBinder_HorizontalBox value) { inst.WriteOffset(0x308, value); }
	inline bool SetTeamInfoAreaBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x328, value); }
	inline bool SetInfoIconBorderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x348, value); }
	inline bool SetInfoIconBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x368, value); }
	inline bool SetSpeakingImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x390, value); }
	inline bool SetMarkerIconBorderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetMarkerImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetBoostImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x400, value); }
	inline bool bUdateTeamNameColor()
	{
		return boolField428& 0x1;
	}
	inline bool SetbUdateTeamNameColor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x428, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTeamNameBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x430, value); }
	inline bool SetOnSpeakAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x450, value); }
	inline bool SetHealthGaugeWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x470, value); }
	inline bool SetColorBlindColorSet(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x490, value); }
	inline bool SetTeamMemberColorBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetPlayerIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetTeam(t_structHelper inst, ExternalPtr<struct UTeam> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetQuitColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x4F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslTeamInfoWidget = sizeof(UTslTeamInfoWidget); // 1288
    static_assert(sizeof(UTslTeamInfoWidget) == 0x508, "Size of UTslTeamInfoWidget is not correct.");
	auto constexpr UTslTeamInfoWidget_boolField300_Offset = offsetof(UTslTeamInfoWidget, boolField300);
	static_assert(UTslTeamInfoWidget_boolField300_Offset == 0x300, "UTslTeamInfoWidget::boolField300 offset is not 300");
	auto constexpr UTslTeamInfoWidget_boolField301_Offset = offsetof(UTslTeamInfoWidget, boolField301);
	static_assert(UTslTeamInfoWidget_boolField301_Offset == 0x301, "UTslTeamInfoWidget::boolField301 offset is not 301");
	auto constexpr UTslTeamInfoWidget_boolField302_Offset = offsetof(UTslTeamInfoWidget, boolField302);
	static_assert(UTslTeamInfoWidget_boolField302_Offset == 0x302, "UTslTeamInfoWidget::boolField302 offset is not 302");
	auto constexpr UTslTeamInfoWidget_TeamHpAreaBinder_Offset = offsetof(UTslTeamInfoWidget, TeamHpAreaBinder);
	static_assert(UTslTeamInfoWidget_TeamHpAreaBinder_Offset == 0x308, "UTslTeamInfoWidget::TeamHpAreaBinder offset is not 308");
	auto constexpr UTslTeamInfoWidget_TeamInfoAreaBinder_Offset = offsetof(UTslTeamInfoWidget, TeamInfoAreaBinder);
	static_assert(UTslTeamInfoWidget_TeamInfoAreaBinder_Offset == 0x328, "UTslTeamInfoWidget::TeamInfoAreaBinder offset is not 328");
	auto constexpr UTslTeamInfoWidget_InfoIconBorderBinder_Offset = offsetof(UTslTeamInfoWidget, InfoIconBorderBinder);
	static_assert(UTslTeamInfoWidget_InfoIconBorderBinder_Offset == 0x348, "UTslTeamInfoWidget::InfoIconBorderBinder offset is not 348");
	auto constexpr UTslTeamInfoWidget_InfoIconBinder_Offset = offsetof(UTslTeamInfoWidget, InfoIconBinder);
	static_assert(UTslTeamInfoWidget_InfoIconBinder_Offset == 0x368, "UTslTeamInfoWidget::InfoIconBinder offset is not 368");
	auto constexpr UTslTeamInfoWidget_SpeakingImageBinder_Offset = offsetof(UTslTeamInfoWidget, SpeakingImageBinder);
	static_assert(UTslTeamInfoWidget_SpeakingImageBinder_Offset == 0x390, "UTslTeamInfoWidget::SpeakingImageBinder offset is not 390");
	auto constexpr UTslTeamInfoWidget_MarkerIconBorderBinder_Offset = offsetof(UTslTeamInfoWidget, MarkerIconBorderBinder);
	static_assert(UTslTeamInfoWidget_MarkerIconBorderBinder_Offset == 0x3b8, "UTslTeamInfoWidget::MarkerIconBorderBinder offset is not 3b8");
	auto constexpr UTslTeamInfoWidget_MarkerImageBinder_Offset = offsetof(UTslTeamInfoWidget, MarkerImageBinder);
	static_assert(UTslTeamInfoWidget_MarkerImageBinder_Offset == 0x3d8, "UTslTeamInfoWidget::MarkerImageBinder offset is not 3d8");
	auto constexpr UTslTeamInfoWidget_BoostImageBinder_Offset = offsetof(UTslTeamInfoWidget, BoostImageBinder);
	static_assert(UTslTeamInfoWidget_BoostImageBinder_Offset == 0x400, "UTslTeamInfoWidget::BoostImageBinder offset is not 400");
	auto constexpr UTslTeamInfoWidget_boolField428_Offset = offsetof(UTslTeamInfoWidget, boolField428);
	static_assert(UTslTeamInfoWidget_boolField428_Offset == 0x428, "UTslTeamInfoWidget::boolField428 offset is not 428");
	auto constexpr UTslTeamInfoWidget_TeamNameBinder_Offset = offsetof(UTslTeamInfoWidget, TeamNameBinder);
	static_assert(UTslTeamInfoWidget_TeamNameBinder_Offset == 0x430, "UTslTeamInfoWidget::TeamNameBinder offset is not 430");
	auto constexpr UTslTeamInfoWidget_OnSpeakAnimBinder_Offset = offsetof(UTslTeamInfoWidget, OnSpeakAnimBinder);
	static_assert(UTslTeamInfoWidget_OnSpeakAnimBinder_Offset == 0x450, "UTslTeamInfoWidget::OnSpeakAnimBinder offset is not 450");
	auto constexpr UTslTeamInfoWidget_HealthGaugeWidgetBinder_Offset = offsetof(UTslTeamInfoWidget, HealthGaugeWidgetBinder);
	static_assert(UTslTeamInfoWidget_HealthGaugeWidgetBinder_Offset == 0x470, "UTslTeamInfoWidget::HealthGaugeWidgetBinder offset is not 470");
	auto constexpr UTslTeamInfoWidget_ColorBlindColorSet_Offset = offsetof(UTslTeamInfoWidget, ColorBlindColorSet);
	static_assert(UTslTeamInfoWidget_ColorBlindColorSet_Offset == 0x490, "UTslTeamInfoWidget::ColorBlindColorSet offset is not 490");
	auto constexpr UTslTeamInfoWidget_TeamMemberColorBinder_Offset = offsetof(UTslTeamInfoWidget, TeamMemberColorBinder);
	static_assert(UTslTeamInfoWidget_TeamMemberColorBinder_Offset == 0x4a0, "UTslTeamInfoWidget::TeamMemberColorBinder offset is not 4a0");
	auto constexpr UTslTeamInfoWidget_PlayerIconImageBinder_Offset = offsetof(UTslTeamInfoWidget, PlayerIconImageBinder);
	static_assert(UTslTeamInfoWidget_PlayerIconImageBinder_Offset == 0x4c8, "UTslTeamInfoWidget::PlayerIconImageBinder offset is not 4c8");
	auto constexpr UTslTeamInfoWidget_Team_Offset = offsetof(UTslTeamInfoWidget, Team);
	static_assert(UTslTeamInfoWidget_Team_Offset == 0x4f0, "UTslTeamInfoWidget::Team offset is not 4f0");
	auto constexpr UTslTeamInfoWidget_QuitColor_Offset = offsetof(UTslTeamInfoWidget, QuitColor);
	static_assert(UTslTeamInfoWidget_QuitColor_Offset == 0x4f8, "UTslTeamInfoWidget::QuitColor offset is not 4f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
