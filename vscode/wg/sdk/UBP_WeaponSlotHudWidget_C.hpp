#pragma once
#include "UWeaponSlotHudBaseWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FWidgetTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_WeaponSlotHudWidget_C // Size: 0x509
	: public UWeaponSlotHudBaseWidget // Size: 0x478
{
private:
	typedef UBP_WeaponSlotHudWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69156); // id32("WidgetBlueprintGeneratedClass BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x478 Size: 0x8 - StructProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> NewFadeInSlotList; /* Ofs: 0x480 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.NewFadeInSlotList */
	ExternalPtr<struct UWidgetAnimation> NewFadeOutSlotList; /* Ofs: 0x488 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.NewFadeOutSlotList */
	ExternalPtr<struct UWidgetAnimation> FadeOutUnarmedWeaponSlot; /* Ofs: 0x490 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.FadeOutUnarmedWeaponSlot */
	ExternalPtr<struct UWidgetAnimation> FadeInUnarmedWeaponSlot; /* Ofs: 0x498 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.FadeInUnarmedWeaponSlot */
	ExternalPtr<struct UWidgetAnimation> FadeOutWeaponSlot; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.FadeOutWeaponSlot */
	ExternalPtr<struct UWidgetAnimation> FadeInWeaponSlot; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.FadeInWeaponSlot */
	ExternalPtr<struct UWidgetAnimation> FadeOutSlotList; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.FadeOutSlotList */
	ExternalPtr<struct UWidgetAnimation> FadeInSlotList; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.FadeInSlotList */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_1; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.CanvasPanel_1 */
	ExternalPtr<struct UBorder> CurrentWeaponSlotBorder; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.CurrentWeaponSlotBorder */
	FWidgetTransform TppWeaponSlotHudInitTransform; /* Ofs: 0x4D0 Size: 0x1C - StructProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.TppWeaponSlotHudInitTransform */
	FWidgetTransform TppWeaponSlotHudUpTransform; /* Ofs: 0x4EC Size: 0x1C - StructProperty BP_WeaponSlotHudWidget.BP_WeaponSlotHudWidget_C.TppWeaponSlotHudUpTransform */
	uint8_t boolField508;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x478, value); }
	inline bool SetNewFadeInSlotList(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x480, value); }
	inline bool SetNewFadeOutSlotList(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x488, value); }
	inline bool SetFadeOutUnarmedWeaponSlot(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x490, value); }
	inline bool SetFadeInUnarmedWeaponSlot(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x498, value); }
	inline bool SetFadeOutWeaponSlot(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetFadeInWeaponSlot(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetFadeOutSlotList(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetFadeInSlotList(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetCanvasPanel_1(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetCurrentWeaponSlotBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetTppWeaponSlotHudInitTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetTppWeaponSlotHudUpTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x4EC, value); }
	inline bool IsFirstConstruct()
	{
		return boolField508& 0x1;
	}
	inline bool SetIsFirstConstruct(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x508, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_WeaponSlotHudWidget_C = sizeof(UBP_WeaponSlotHudWidget_C); // 1289
    static_assert(sizeof(UBP_WeaponSlotHudWidget_C) == 0x509, "Size of UBP_WeaponSlotHudWidget_C is not correct.");
	auto constexpr UBP_WeaponSlotHudWidget_C_UberGraphFrame_Offset = offsetof(UBP_WeaponSlotHudWidget_C, UberGraphFrame);
	static_assert(UBP_WeaponSlotHudWidget_C_UberGraphFrame_Offset == 0x478, "UBP_WeaponSlotHudWidget_C::UberGraphFrame offset is not 478");
	auto constexpr UBP_WeaponSlotHudWidget_C_NewFadeInSlotList_Offset = offsetof(UBP_WeaponSlotHudWidget_C, NewFadeInSlotList);
	static_assert(UBP_WeaponSlotHudWidget_C_NewFadeInSlotList_Offset == 0x480, "UBP_WeaponSlotHudWidget_C::NewFadeInSlotList offset is not 480");
	auto constexpr UBP_WeaponSlotHudWidget_C_NewFadeOutSlotList_Offset = offsetof(UBP_WeaponSlotHudWidget_C, NewFadeOutSlotList);
	static_assert(UBP_WeaponSlotHudWidget_C_NewFadeOutSlotList_Offset == 0x488, "UBP_WeaponSlotHudWidget_C::NewFadeOutSlotList offset is not 488");
	auto constexpr UBP_WeaponSlotHudWidget_C_FadeOutUnarmedWeaponSlot_Offset = offsetof(UBP_WeaponSlotHudWidget_C, FadeOutUnarmedWeaponSlot);
	static_assert(UBP_WeaponSlotHudWidget_C_FadeOutUnarmedWeaponSlot_Offset == 0x490, "UBP_WeaponSlotHudWidget_C::FadeOutUnarmedWeaponSlot offset is not 490");
	auto constexpr UBP_WeaponSlotHudWidget_C_FadeInUnarmedWeaponSlot_Offset = offsetof(UBP_WeaponSlotHudWidget_C, FadeInUnarmedWeaponSlot);
	static_assert(UBP_WeaponSlotHudWidget_C_FadeInUnarmedWeaponSlot_Offset == 0x498, "UBP_WeaponSlotHudWidget_C::FadeInUnarmedWeaponSlot offset is not 498");
	auto constexpr UBP_WeaponSlotHudWidget_C_FadeOutWeaponSlot_Offset = offsetof(UBP_WeaponSlotHudWidget_C, FadeOutWeaponSlot);
	static_assert(UBP_WeaponSlotHudWidget_C_FadeOutWeaponSlot_Offset == 0x4a0, "UBP_WeaponSlotHudWidget_C::FadeOutWeaponSlot offset is not 4a0");
	auto constexpr UBP_WeaponSlotHudWidget_C_FadeInWeaponSlot_Offset = offsetof(UBP_WeaponSlotHudWidget_C, FadeInWeaponSlot);
	static_assert(UBP_WeaponSlotHudWidget_C_FadeInWeaponSlot_Offset == 0x4a8, "UBP_WeaponSlotHudWidget_C::FadeInWeaponSlot offset is not 4a8");
	auto constexpr UBP_WeaponSlotHudWidget_C_FadeOutSlotList_Offset = offsetof(UBP_WeaponSlotHudWidget_C, FadeOutSlotList);
	static_assert(UBP_WeaponSlotHudWidget_C_FadeOutSlotList_Offset == 0x4b0, "UBP_WeaponSlotHudWidget_C::FadeOutSlotList offset is not 4b0");
	auto constexpr UBP_WeaponSlotHudWidget_C_FadeInSlotList_Offset = offsetof(UBP_WeaponSlotHudWidget_C, FadeInSlotList);
	static_assert(UBP_WeaponSlotHudWidget_C_FadeInSlotList_Offset == 0x4b8, "UBP_WeaponSlotHudWidget_C::FadeInSlotList offset is not 4b8");
	auto constexpr UBP_WeaponSlotHudWidget_C_CanvasPanel_1_Offset = offsetof(UBP_WeaponSlotHudWidget_C, CanvasPanel_1);
	static_assert(UBP_WeaponSlotHudWidget_C_CanvasPanel_1_Offset == 0x4c0, "UBP_WeaponSlotHudWidget_C::CanvasPanel_1 offset is not 4c0");
	auto constexpr UBP_WeaponSlotHudWidget_C_CurrentWeaponSlotBorder_Offset = offsetof(UBP_WeaponSlotHudWidget_C, CurrentWeaponSlotBorder);
	static_assert(UBP_WeaponSlotHudWidget_C_CurrentWeaponSlotBorder_Offset == 0x4c8, "UBP_WeaponSlotHudWidget_C::CurrentWeaponSlotBorder offset is not 4c8");
	auto constexpr UBP_WeaponSlotHudWidget_C_TppWeaponSlotHudInitTransform_Offset = offsetof(UBP_WeaponSlotHudWidget_C, TppWeaponSlotHudInitTransform);
	static_assert(UBP_WeaponSlotHudWidget_C_TppWeaponSlotHudInitTransform_Offset == 0x4d0, "UBP_WeaponSlotHudWidget_C::TppWeaponSlotHudInitTransform offset is not 4d0");
	auto constexpr UBP_WeaponSlotHudWidget_C_TppWeaponSlotHudUpTransform_Offset = offsetof(UBP_WeaponSlotHudWidget_C, TppWeaponSlotHudUpTransform);
	static_assert(UBP_WeaponSlotHudWidget_C_TppWeaponSlotHudUpTransform_Offset == 0x4ec, "UBP_WeaponSlotHudWidget_C::TppWeaponSlotHudUpTransform offset is not 4ec");
	auto constexpr UBP_WeaponSlotHudWidget_C_boolField508_Offset = offsetof(UBP_WeaponSlotHudWidget_C, boolField508);
	static_assert(UBP_WeaponSlotHudWidget_C_boolField508_Offset == 0x508, "UBP_WeaponSlotHudWidget_C::boolField508 offset is not 508");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
