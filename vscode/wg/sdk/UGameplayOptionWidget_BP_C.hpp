#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayOptionWidget_BP_C // Size: 0x510
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef UGameplayOptionWidget_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(170023); // id32("WidgetBlueprintGeneratedClass GameplayOptionWidget_BP.GameplayOptionWidget_BP_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.UberGraphFrame */
	ExternalPtr<struct UQualityComboBox_C> ADS; /* Ofs: 0x400 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.ADS */
	ExternalPtr<struct UQualityComboBox_C> Aim; /* Ofs: 0x408 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.Aim */
	ExternalPtr<struct UQualityComboBox_C> Crouch; /* Ofs: 0x410 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.Crouch */
	ExternalPtr<struct UQualityComboBox_C> FreeLookInterp; /* Ofs: 0x418 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.FreeLookInterp */
	ExternalPtr<struct UQualityComboBox_C> HoldBreath; /* Ofs: 0x420 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.HoldBreath */
	ExternalPtr<struct UQualityComboBox_C> HoldRotation; /* Ofs: 0x428 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.HoldRotation */
	ExternalPtr<struct UQualityComboBox_C> Map; /* Ofs: 0x430 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.Map */
	ExternalPtr<struct UQualityComboBox_C> Peek; /* Ofs: 0x438 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.Peek */
	ExternalPtr<struct UQualityComboBox_C> PrelodingMap; /* Ofs: 0x440 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.PrelodingMap */
	ExternalPtr<struct UQualityComboBox_C> Prone; /* Ofs: 0x448 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.Prone */
	ExternalPtr<struct UReplaySettings_C> ReplaySettings; /* Ofs: 0x450 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.ReplaySettings */
	ExternalPtr<struct UQualityComboBox_C> Sprint; /* Ofs: 0x458 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.Sprint */
	ExternalPtr<struct UUiSettings_C> UiSettings; /* Ofs: 0x460 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.UiSettings */
	ExternalPtr<struct UQualityComboBox_C> Walk; /* Ofs: 0x468 Size: 0x8 - ObjectProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.Walk */
	TArray<ExternalPtr<struct UQualityComboBox_C>> ContentsForInputMode; /* Ofs: 0x470 Size: 0x10 - ArrayProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.ContentsForInputMode */
	FString StrToggle; /* Ofs: 0x480 Size: 0x10 - StrProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.StrToggle */
	FString StrDoubleTap; /* Ofs: 0x490 Size: 0x10 - StrProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.StrDoubleTap */
	FString StrHold; /* Ofs: 0x4A0 Size: 0x10 - StrProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.StrHold */
	TArray<ExternalPtr<struct UQualityComboBox_C>> ContentsForFunctionalities; /* Ofs: 0x4B0 Size: 0x10 - ArrayProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.ContentsForFunctionalities */
	FString StrEnable; /* Ofs: 0x4C0 Size: 0x10 - StrProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.StrEnable */
	FString StrDisable; /* Ofs: 0x4D0 Size: 0x10 - StrProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.StrDisable */
	FString StrOn; /* Ofs: 0x4E0 Size: 0x10 - StrProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.StrOn */
	FString StrOff; /* Ofs: 0x4F0 Size: 0x10 - StrProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.StrOff */
	TArray<ExternalPtr<struct UQualityComboBox_C>> ContentsForClientReplay; /* Ofs: 0x500 Size: 0x10 - ArrayProperty GameplayOptionWidget_BP.GameplayOptionWidget_BP_C.ContentsForClientReplay */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetADS(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetAim(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetCrouch(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetFreeLookInterp(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetHoldBreath(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x420, value); }
	inline bool SetHoldRotation(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x428, value); }
	inline bool SetMap(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x430, value); }
	inline bool SetPeek(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x438, value); }
	inline bool SetPrelodingMap(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x440, value); }
	inline bool SetProne(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x448, value); }
	inline bool SetReplaySettings(t_structHelper inst, ExternalPtr<struct UReplaySettings_C> value) { inst.WriteOffset(0x450, value); }
	inline bool SetSprint(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x458, value); }
	inline bool SetUiSettings(t_structHelper inst, ExternalPtr<struct UUiSettings_C> value) { inst.WriteOffset(0x460, value); }
	inline bool SetWalk(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x468, value); }
	inline bool SetContentsForInputMode(t_structHelper inst, TArray<ExternalPtr<struct UQualityComboBox_C>> value) { inst.WriteOffset(0x470, value); }
	inline bool SetStrToggle(t_structHelper inst, FString value) { inst.WriteOffset(0x480, value); }
	inline bool SetStrDoubleTap(t_structHelper inst, FString value) { inst.WriteOffset(0x490, value); }
	inline bool SetStrHold(t_structHelper inst, FString value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetContentsForFunctionalities(t_structHelper inst, TArray<ExternalPtr<struct UQualityComboBox_C>> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetStrEnable(t_structHelper inst, FString value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetStrDisable(t_structHelper inst, FString value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetStrOn(t_structHelper inst, FString value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetStrOff(t_structHelper inst, FString value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetContentsForClientReplay(t_structHelper inst, TArray<ExternalPtr<struct UQualityComboBox_C>> value) { inst.WriteOffset(0x500, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayOptionWidget_BP_C = sizeof(UGameplayOptionWidget_BP_C); // 1296
    static_assert(sizeof(UGameplayOptionWidget_BP_C) == 0x510, "Size of UGameplayOptionWidget_BP_C is not correct.");
	auto constexpr UGameplayOptionWidget_BP_C_UberGraphFrame_Offset = offsetof(UGameplayOptionWidget_BP_C, UberGraphFrame);
	static_assert(UGameplayOptionWidget_BP_C_UberGraphFrame_Offset == 0x3f8, "UGameplayOptionWidget_BP_C::UberGraphFrame offset is not 3f8");
	auto constexpr UGameplayOptionWidget_BP_C_ADS_Offset = offsetof(UGameplayOptionWidget_BP_C, ADS);
	static_assert(UGameplayOptionWidget_BP_C_ADS_Offset == 0x400, "UGameplayOptionWidget_BP_C::ADS offset is not 400");
	auto constexpr UGameplayOptionWidget_BP_C_Aim_Offset = offsetof(UGameplayOptionWidget_BP_C, Aim);
	static_assert(UGameplayOptionWidget_BP_C_Aim_Offset == 0x408, "UGameplayOptionWidget_BP_C::Aim offset is not 408");
	auto constexpr UGameplayOptionWidget_BP_C_Crouch_Offset = offsetof(UGameplayOptionWidget_BP_C, Crouch);
	static_assert(UGameplayOptionWidget_BP_C_Crouch_Offset == 0x410, "UGameplayOptionWidget_BP_C::Crouch offset is not 410");
	auto constexpr UGameplayOptionWidget_BP_C_FreeLookInterp_Offset = offsetof(UGameplayOptionWidget_BP_C, FreeLookInterp);
	static_assert(UGameplayOptionWidget_BP_C_FreeLookInterp_Offset == 0x418, "UGameplayOptionWidget_BP_C::FreeLookInterp offset is not 418");
	auto constexpr UGameplayOptionWidget_BP_C_HoldBreath_Offset = offsetof(UGameplayOptionWidget_BP_C, HoldBreath);
	static_assert(UGameplayOptionWidget_BP_C_HoldBreath_Offset == 0x420, "UGameplayOptionWidget_BP_C::HoldBreath offset is not 420");
	auto constexpr UGameplayOptionWidget_BP_C_HoldRotation_Offset = offsetof(UGameplayOptionWidget_BP_C, HoldRotation);
	static_assert(UGameplayOptionWidget_BP_C_HoldRotation_Offset == 0x428, "UGameplayOptionWidget_BP_C::HoldRotation offset is not 428");
	auto constexpr UGameplayOptionWidget_BP_C_Map_Offset = offsetof(UGameplayOptionWidget_BP_C, Map);
	static_assert(UGameplayOptionWidget_BP_C_Map_Offset == 0x430, "UGameplayOptionWidget_BP_C::Map offset is not 430");
	auto constexpr UGameplayOptionWidget_BP_C_Peek_Offset = offsetof(UGameplayOptionWidget_BP_C, Peek);
	static_assert(UGameplayOptionWidget_BP_C_Peek_Offset == 0x438, "UGameplayOptionWidget_BP_C::Peek offset is not 438");
	auto constexpr UGameplayOptionWidget_BP_C_PrelodingMap_Offset = offsetof(UGameplayOptionWidget_BP_C, PrelodingMap);
	static_assert(UGameplayOptionWidget_BP_C_PrelodingMap_Offset == 0x440, "UGameplayOptionWidget_BP_C::PrelodingMap offset is not 440");
	auto constexpr UGameplayOptionWidget_BP_C_Prone_Offset = offsetof(UGameplayOptionWidget_BP_C, Prone);
	static_assert(UGameplayOptionWidget_BP_C_Prone_Offset == 0x448, "UGameplayOptionWidget_BP_C::Prone offset is not 448");
	auto constexpr UGameplayOptionWidget_BP_C_ReplaySettings_Offset = offsetof(UGameplayOptionWidget_BP_C, ReplaySettings);
	static_assert(UGameplayOptionWidget_BP_C_ReplaySettings_Offset == 0x450, "UGameplayOptionWidget_BP_C::ReplaySettings offset is not 450");
	auto constexpr UGameplayOptionWidget_BP_C_Sprint_Offset = offsetof(UGameplayOptionWidget_BP_C, Sprint);
	static_assert(UGameplayOptionWidget_BP_C_Sprint_Offset == 0x458, "UGameplayOptionWidget_BP_C::Sprint offset is not 458");
	auto constexpr UGameplayOptionWidget_BP_C_UiSettings_Offset = offsetof(UGameplayOptionWidget_BP_C, UiSettings);
	static_assert(UGameplayOptionWidget_BP_C_UiSettings_Offset == 0x460, "UGameplayOptionWidget_BP_C::UiSettings offset is not 460");
	auto constexpr UGameplayOptionWidget_BP_C_Walk_Offset = offsetof(UGameplayOptionWidget_BP_C, Walk);
	static_assert(UGameplayOptionWidget_BP_C_Walk_Offset == 0x468, "UGameplayOptionWidget_BP_C::Walk offset is not 468");
	auto constexpr UGameplayOptionWidget_BP_C_ContentsForInputMode_Offset = offsetof(UGameplayOptionWidget_BP_C, ContentsForInputMode);
	static_assert(UGameplayOptionWidget_BP_C_ContentsForInputMode_Offset == 0x470, "UGameplayOptionWidget_BP_C::ContentsForInputMode offset is not 470");
	auto constexpr UGameplayOptionWidget_BP_C_StrToggle_Offset = offsetof(UGameplayOptionWidget_BP_C, StrToggle);
	static_assert(UGameplayOptionWidget_BP_C_StrToggle_Offset == 0x480, "UGameplayOptionWidget_BP_C::StrToggle offset is not 480");
	auto constexpr UGameplayOptionWidget_BP_C_StrDoubleTap_Offset = offsetof(UGameplayOptionWidget_BP_C, StrDoubleTap);
	static_assert(UGameplayOptionWidget_BP_C_StrDoubleTap_Offset == 0x490, "UGameplayOptionWidget_BP_C::StrDoubleTap offset is not 490");
	auto constexpr UGameplayOptionWidget_BP_C_StrHold_Offset = offsetof(UGameplayOptionWidget_BP_C, StrHold);
	static_assert(UGameplayOptionWidget_BP_C_StrHold_Offset == 0x4a0, "UGameplayOptionWidget_BP_C::StrHold offset is not 4a0");
	auto constexpr UGameplayOptionWidget_BP_C_ContentsForFunctionalities_Offset = offsetof(UGameplayOptionWidget_BP_C, ContentsForFunctionalities);
	static_assert(UGameplayOptionWidget_BP_C_ContentsForFunctionalities_Offset == 0x4b0, "UGameplayOptionWidget_BP_C::ContentsForFunctionalities offset is not 4b0");
	auto constexpr UGameplayOptionWidget_BP_C_StrEnable_Offset = offsetof(UGameplayOptionWidget_BP_C, StrEnable);
	static_assert(UGameplayOptionWidget_BP_C_StrEnable_Offset == 0x4c0, "UGameplayOptionWidget_BP_C::StrEnable offset is not 4c0");
	auto constexpr UGameplayOptionWidget_BP_C_StrDisable_Offset = offsetof(UGameplayOptionWidget_BP_C, StrDisable);
	static_assert(UGameplayOptionWidget_BP_C_StrDisable_Offset == 0x4d0, "UGameplayOptionWidget_BP_C::StrDisable offset is not 4d0");
	auto constexpr UGameplayOptionWidget_BP_C_StrOn_Offset = offsetof(UGameplayOptionWidget_BP_C, StrOn);
	static_assert(UGameplayOptionWidget_BP_C_StrOn_Offset == 0x4e0, "UGameplayOptionWidget_BP_C::StrOn offset is not 4e0");
	auto constexpr UGameplayOptionWidget_BP_C_StrOff_Offset = offsetof(UGameplayOptionWidget_BP_C, StrOff);
	static_assert(UGameplayOptionWidget_BP_C_StrOff_Offset == 0x4f0, "UGameplayOptionWidget_BP_C::StrOff offset is not 4f0");
	auto constexpr UGameplayOptionWidget_BP_C_ContentsForClientReplay_Offset = offsetof(UGameplayOptionWidget_BP_C, ContentsForClientReplay);
	static_assert(UGameplayOptionWidget_BP_C_ContentsForClientReplay_Offset == 0x500, "UGameplayOptionWidget_BP_C::ContentsForClientReplay offset is not 500");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
