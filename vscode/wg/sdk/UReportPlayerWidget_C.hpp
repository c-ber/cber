#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "EReportCause.hpp"
#include "ESubjectToReport.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReportPlayerWidget_C // Size: 0x298
	: public UUserWidget // Size: 0x248
{
private:
	typedef UReportPlayerWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(176904); // id32("WidgetBlueprintGeneratedClass ReportPlayerWidget.ReportPlayerWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ReportPlayerWidget.ReportPlayerWidget_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ReportPlayerWidget.ReportPlayerWidget_C.Button_1 */
	ExternalPtr<struct UButton> ButtonClose; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ReportPlayerWidget.ReportPlayerWidget_C.ButtonClose */
	ExternalPtr<struct UDetailReportCauseManagerWidget_C> DetailReportManager; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ReportPlayerWidget.ReportPlayerWidget_C.DetailReportManager */
	ExternalPtr<struct UTextBlock> PlayerName; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ReportPlayerWidget.ReportPlayerWidget_C.PlayerName */
	ExternalPtr<struct UComboBoxString> ReportCausesComboBox; /* Ofs: 0x270 Size: 0x8 - ObjectProperty ReportPlayerWidget.ReportPlayerWidget_C.ReportCausesComboBox */
	ExternalPtr<struct UTextBlock> SubjectToReport; /* Ofs: 0x278 Size: 0x8 - ObjectProperty ReportPlayerWidget.ReportPlayerWidget_C.SubjectToReport */
	TEnumAsByte<enum EReportCause> SelectedReportCause; /* Ofs: 0x280 Size: 0x1 - EnumProperty ReportPlayerWidget.ReportPlayerWidget_C.SelectedReportCause */
	TEnumAsByte<enum ESubjectToReport> SubjectToReportType; /* Ofs: 0x281 Size: 0x1 - EnumProperty ReportPlayerWidget.ReportPlayerWidget_C.SubjectToReportType */
	uint8_t UnknownData282[0x6];
	FScriptMulticastDelegate ButtonEvent; /* Ofs: 0x288 Size: 0x10 - MulticastDelegateProperty ReportPlayerWidget.ReportPlayerWidget_C.ButtonEvent */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetButtonClose(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x258, value); }
	inline bool SetDetailReportManager(t_structHelper inst, ExternalPtr<struct UDetailReportCauseManagerWidget_C> value) { inst.WriteOffset(0x260, value); }
	inline bool SetPlayerName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetReportCausesComboBox(t_structHelper inst, ExternalPtr<struct UComboBoxString> value) { inst.WriteOffset(0x270, value); }
	inline bool SetSubjectToReport(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetSelectedReportCause(t_structHelper inst, TEnumAsByte<enum EReportCause> value) { inst.WriteOffset(0x280, value); }
	inline bool SetSubjectToReportType(t_structHelper inst, TEnumAsByte<enum ESubjectToReport> value) { inst.WriteOffset(0x281, value); }
	inline bool SetButtonEvent(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x288, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReportPlayerWidget_C = sizeof(UReportPlayerWidget_C); // 664
    static_assert(sizeof(UReportPlayerWidget_C) == 0x298, "Size of UReportPlayerWidget_C is not correct.");
	auto constexpr UReportPlayerWidget_C_UberGraphFrame_Offset = offsetof(UReportPlayerWidget_C, UberGraphFrame);
	static_assert(UReportPlayerWidget_C_UberGraphFrame_Offset == 0x248, "UReportPlayerWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UReportPlayerWidget_C_Button_1_Offset = offsetof(UReportPlayerWidget_C, Button_1);
	static_assert(UReportPlayerWidget_C_Button_1_Offset == 0x250, "UReportPlayerWidget_C::Button_1 offset is not 250");
	auto constexpr UReportPlayerWidget_C_ButtonClose_Offset = offsetof(UReportPlayerWidget_C, ButtonClose);
	static_assert(UReportPlayerWidget_C_ButtonClose_Offset == 0x258, "UReportPlayerWidget_C::ButtonClose offset is not 258");
	auto constexpr UReportPlayerWidget_C_DetailReportManager_Offset = offsetof(UReportPlayerWidget_C, DetailReportManager);
	static_assert(UReportPlayerWidget_C_DetailReportManager_Offset == 0x260, "UReportPlayerWidget_C::DetailReportManager offset is not 260");
	auto constexpr UReportPlayerWidget_C_PlayerName_Offset = offsetof(UReportPlayerWidget_C, PlayerName);
	static_assert(UReportPlayerWidget_C_PlayerName_Offset == 0x268, "UReportPlayerWidget_C::PlayerName offset is not 268");
	auto constexpr UReportPlayerWidget_C_ReportCausesComboBox_Offset = offsetof(UReportPlayerWidget_C, ReportCausesComboBox);
	static_assert(UReportPlayerWidget_C_ReportCausesComboBox_Offset == 0x270, "UReportPlayerWidget_C::ReportCausesComboBox offset is not 270");
	auto constexpr UReportPlayerWidget_C_SubjectToReport_Offset = offsetof(UReportPlayerWidget_C, SubjectToReport);
	static_assert(UReportPlayerWidget_C_SubjectToReport_Offset == 0x278, "UReportPlayerWidget_C::SubjectToReport offset is not 278");
	auto constexpr UReportPlayerWidget_C_SelectedReportCause_Offset = offsetof(UReportPlayerWidget_C, SelectedReportCause);
	static_assert(UReportPlayerWidget_C_SelectedReportCause_Offset == 0x280, "UReportPlayerWidget_C::SelectedReportCause offset is not 280");
	auto constexpr UReportPlayerWidget_C_SubjectToReportType_Offset = offsetof(UReportPlayerWidget_C, SubjectToReportType);
	static_assert(UReportPlayerWidget_C_SubjectToReportType_Offset == 0x281, "UReportPlayerWidget_C::SubjectToReportType offset is not 281");
	auto constexpr UReportPlayerWidget_C_ButtonEvent_Offset = offsetof(UReportPlayerWidget_C, ButtonEvent);
	static_assert(UReportPlayerWidget_C_ButtonEvent_Offset == 0x288, "UReportPlayerWidget_C::ButtonEvent offset is not 288");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
