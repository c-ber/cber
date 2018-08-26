#pragma once
#include "UTslTeamInfoWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_TeamInfoWidget_new_test_C // Size: 0x578
	: public UTslTeamInfoWidget // Size: 0x508
{
private:
	typedef UBP_TeamInfoWidget_new_test_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(186879); // id32("WidgetBlueprintGeneratedClass BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> OnSpeak; /* Ofs: 0x508 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.OnSpeak */
	ExternalPtr<struct UImage> InfoIcon; /* Ofs: 0x510 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.InfoIcon */
	ExternalPtr<struct UBP_LifeGaugeTemplateWidget2_C> LifeGaugeWidget; /* Ofs: 0x518 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.LifeGaugeWidget */
	ExternalPtr<struct UImage> LINE; /* Ofs: 0x520 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.LINE */
	ExternalPtr<struct UBorder> MakerBorder; /* Ofs: 0x528 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.MakerBorder */
	ExternalPtr<struct UImage> MarkerImage; /* Ofs: 0x530 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.MarkerImage */
	ExternalPtr<struct UImage> Panel; /* Ofs: 0x538 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.Panel */
	ExternalPtr<struct UImage> Panel02; /* Ofs: 0x540 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.Panel02 */
	ExternalPtr<struct UImage> PlayerIcon; /* Ofs: 0x548 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.PlayerIcon */
	ExternalPtr<struct UImage> SpeakingImage; /* Ofs: 0x550 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.SpeakingImage */
	ExternalPtr<struct UHorizontalBox> TeamMateHPArea; /* Ofs: 0x558 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.TeamMateHPArea */
	ExternalPtr<struct UBorder> TeamMateInfoArea; /* Ofs: 0x560 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.TeamMateInfoArea */
	ExternalPtr<struct UTextBlock> TeamName; /* Ofs: 0x568 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.TeamName */
	ExternalPtr<struct UBorder> TeamNameBorder; /* Ofs: 0x570 Size: 0x8 - ObjectProperty BP_TeamInfoWidget_new_test.BP_TeamInfoWidget_new_test_C.TeamNameBorder */


	inline bool SetOnSpeak(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x508, value); }
	inline bool SetInfoIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x510, value); }
	inline bool SetLifeGaugeWidget(t_structHelper inst, ExternalPtr<struct UBP_LifeGaugeTemplateWidget2_C> value) { inst.WriteOffset(0x518, value); }
	inline bool SetLINE(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x520, value); }
	inline bool SetMakerBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x528, value); }
	inline bool SetMarkerImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x530, value); }
	inline bool SetPanel(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x538, value); }
	inline bool SetPanel02(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x540, value); }
	inline bool SetPlayerIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x548, value); }
	inline bool SetSpeakingImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x550, value); }
	inline bool SetTeamMateHPArea(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x558, value); }
	inline bool SetTeamMateInfoArea(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x560, value); }
	inline bool SetTeamName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x568, value); }
	inline bool SetTeamNameBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x570, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_TeamInfoWidget_new_test_C = sizeof(UBP_TeamInfoWidget_new_test_C); // 1400
    static_assert(sizeof(UBP_TeamInfoWidget_new_test_C) == 0x578, "Size of UBP_TeamInfoWidget_new_test_C is not correct.");
	auto constexpr UBP_TeamInfoWidget_new_test_C_OnSpeak_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, OnSpeak);
	static_assert(UBP_TeamInfoWidget_new_test_C_OnSpeak_Offset == 0x508, "UBP_TeamInfoWidget_new_test_C::OnSpeak offset is not 508");
	auto constexpr UBP_TeamInfoWidget_new_test_C_InfoIcon_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, InfoIcon);
	static_assert(UBP_TeamInfoWidget_new_test_C_InfoIcon_Offset == 0x510, "UBP_TeamInfoWidget_new_test_C::InfoIcon offset is not 510");
	auto constexpr UBP_TeamInfoWidget_new_test_C_LifeGaugeWidget_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, LifeGaugeWidget);
	static_assert(UBP_TeamInfoWidget_new_test_C_LifeGaugeWidget_Offset == 0x518, "UBP_TeamInfoWidget_new_test_C::LifeGaugeWidget offset is not 518");
	auto constexpr UBP_TeamInfoWidget_new_test_C_LINE_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, LINE);
	static_assert(UBP_TeamInfoWidget_new_test_C_LINE_Offset == 0x520, "UBP_TeamInfoWidget_new_test_C::LINE offset is not 520");
	auto constexpr UBP_TeamInfoWidget_new_test_C_MakerBorder_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, MakerBorder);
	static_assert(UBP_TeamInfoWidget_new_test_C_MakerBorder_Offset == 0x528, "UBP_TeamInfoWidget_new_test_C::MakerBorder offset is not 528");
	auto constexpr UBP_TeamInfoWidget_new_test_C_MarkerImage_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, MarkerImage);
	static_assert(UBP_TeamInfoWidget_new_test_C_MarkerImage_Offset == 0x530, "UBP_TeamInfoWidget_new_test_C::MarkerImage offset is not 530");
	auto constexpr UBP_TeamInfoWidget_new_test_C_Panel_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, Panel);
	static_assert(UBP_TeamInfoWidget_new_test_C_Panel_Offset == 0x538, "UBP_TeamInfoWidget_new_test_C::Panel offset is not 538");
	auto constexpr UBP_TeamInfoWidget_new_test_C_Panel02_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, Panel02);
	static_assert(UBP_TeamInfoWidget_new_test_C_Panel02_Offset == 0x540, "UBP_TeamInfoWidget_new_test_C::Panel02 offset is not 540");
	auto constexpr UBP_TeamInfoWidget_new_test_C_PlayerIcon_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, PlayerIcon);
	static_assert(UBP_TeamInfoWidget_new_test_C_PlayerIcon_Offset == 0x548, "UBP_TeamInfoWidget_new_test_C::PlayerIcon offset is not 548");
	auto constexpr UBP_TeamInfoWidget_new_test_C_SpeakingImage_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, SpeakingImage);
	static_assert(UBP_TeamInfoWidget_new_test_C_SpeakingImage_Offset == 0x550, "UBP_TeamInfoWidget_new_test_C::SpeakingImage offset is not 550");
	auto constexpr UBP_TeamInfoWidget_new_test_C_TeamMateHPArea_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, TeamMateHPArea);
	static_assert(UBP_TeamInfoWidget_new_test_C_TeamMateHPArea_Offset == 0x558, "UBP_TeamInfoWidget_new_test_C::TeamMateHPArea offset is not 558");
	auto constexpr UBP_TeamInfoWidget_new_test_C_TeamMateInfoArea_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, TeamMateInfoArea);
	static_assert(UBP_TeamInfoWidget_new_test_C_TeamMateInfoArea_Offset == 0x560, "UBP_TeamInfoWidget_new_test_C::TeamMateInfoArea offset is not 560");
	auto constexpr UBP_TeamInfoWidget_new_test_C_TeamName_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, TeamName);
	static_assert(UBP_TeamInfoWidget_new_test_C_TeamName_Offset == 0x568, "UBP_TeamInfoWidget_new_test_C::TeamName offset is not 568");
	auto constexpr UBP_TeamInfoWidget_new_test_C_TeamNameBorder_Offset = offsetof(UBP_TeamInfoWidget_new_test_C, TeamNameBorder);
	static_assert(UBP_TeamInfoWidget_new_test_C_TeamNameBorder_Offset == 0x570, "UBP_TeamInfoWidget_new_test_C::TeamNameBorder offset is not 570");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
