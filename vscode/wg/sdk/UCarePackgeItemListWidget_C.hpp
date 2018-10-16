#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarePackgeItemListWidget_C // Size: 0x2D0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UCarePackgeItemListWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69644); // id32("WidgetBlueprintGeneratedClass CarePackgeItemListWidget.CarePackgeItemListWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.UberGraphFrame */
	ExternalPtr<struct UScrollBox> CarePackageItemList; /* Ofs: 0x250 Size: 0x8 - ObjectProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.CarePackageItemList */
	ExternalPtr<struct UBorder> TextCarePackageEmptyBorder; /* Ofs: 0x258 Size: 0x8 - ObjectProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.TextCarePackageEmptyBorder */
	uint8_t boolField260;
	uint8_t UnknownData261[0x7];
	TArray<ExternalPtr<struct UItem>> Items; /* Ofs: 0x268 Size: 0x10 - ArrayProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.Items */
	FScriptMulticastDelegate EventDispatcher_ShowCarePackageItem; /* Ofs: 0x278 Size: 0x10 - MulticastDelegateProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.EventDispatcher_ShowCarePackageItem */
	uint8_t boolField288;
	uint8_t UnknownData289[0x7];
	TArray<struct FText> ArrName; /* Ofs: 0x290 Size: 0x10 - ArrayProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.ArrName */
	TArray<int32_t> ArrCount; /* Ofs: 0x2A0 Size: 0x10 - ArrayProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.ArrCount */
	int32_t CustomTickCount; /* Ofs: 0x2B0 Size: 0x4 - IntProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.CustomTickCount */
	uint8_t UnknownData2B4[0x4];
	TArray<ExternalPtr<struct UCarePackageItemSlotWidget_C>> ArrItemSlot; /* Ofs: 0x2B8 Size: 0x10 - ArrayProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.ArrItemSlot */
	FTimerHandle CustomTimerHandle; /* Ofs: 0x2C8 Size: 0x8 - StructProperty CarePackgeItemListWidget.CarePackgeItemListWidget_C.CustomTimerHandle */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetCarePackageItemList(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTextCarePackageEmptyBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x258, value); }
	inline bool IsShowCarePackageItemList()
	{
		return boolField260& 0x1;
	}
	inline bool SetIsShowCarePackageItemList(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x260, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetItems(t_structHelper inst, TArray<ExternalPtr<struct UItem>> value) { inst.WriteOffset(0x268, value); }
	inline bool SetEventDispatcher_ShowCarePackageItem(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x278, value); }
	inline bool IsLoop()
	{
		return boolField288& 0x1;
	}
	inline bool SetIsLoop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetArrName(t_structHelper inst, TArray<struct FText> value) { inst.WriteOffset(0x290, value); }
	inline bool SetArrCount(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetCustomTickCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetArrItemSlot(t_structHelper inst, TArray<ExternalPtr<struct UCarePackageItemSlotWidget_C>> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetCustomTimerHandle(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x2C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarePackgeItemListWidget_C = sizeof(UCarePackgeItemListWidget_C); // 720
    static_assert(sizeof(UCarePackgeItemListWidget_C) == 0x2D0, "Size of UCarePackgeItemListWidget_C is not correct.");
	auto constexpr UCarePackgeItemListWidget_C_UberGraphFrame_Offset = offsetof(UCarePackgeItemListWidget_C, UberGraphFrame);
	static_assert(UCarePackgeItemListWidget_C_UberGraphFrame_Offset == 0x248, "UCarePackgeItemListWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UCarePackgeItemListWidget_C_CarePackageItemList_Offset = offsetof(UCarePackgeItemListWidget_C, CarePackageItemList);
	static_assert(UCarePackgeItemListWidget_C_CarePackageItemList_Offset == 0x250, "UCarePackgeItemListWidget_C::CarePackageItemList offset is not 250");
	auto constexpr UCarePackgeItemListWidget_C_TextCarePackageEmptyBorder_Offset = offsetof(UCarePackgeItemListWidget_C, TextCarePackageEmptyBorder);
	static_assert(UCarePackgeItemListWidget_C_TextCarePackageEmptyBorder_Offset == 0x258, "UCarePackgeItemListWidget_C::TextCarePackageEmptyBorder offset is not 258");
	auto constexpr UCarePackgeItemListWidget_C_boolField260_Offset = offsetof(UCarePackgeItemListWidget_C, boolField260);
	static_assert(UCarePackgeItemListWidget_C_boolField260_Offset == 0x260, "UCarePackgeItemListWidget_C::boolField260 offset is not 260");
	auto constexpr UCarePackgeItemListWidget_C_Items_Offset = offsetof(UCarePackgeItemListWidget_C, Items);
	static_assert(UCarePackgeItemListWidget_C_Items_Offset == 0x268, "UCarePackgeItemListWidget_C::Items offset is not 268");
	auto constexpr UCarePackgeItemListWidget_C_EventDispatcher_ShowCarePackageItem_Offset = offsetof(UCarePackgeItemListWidget_C, EventDispatcher_ShowCarePackageItem);
	static_assert(UCarePackgeItemListWidget_C_EventDispatcher_ShowCarePackageItem_Offset == 0x278, "UCarePackgeItemListWidget_C::EventDispatcher_ShowCarePackageItem offset is not 278");
	auto constexpr UCarePackgeItemListWidget_C_boolField288_Offset = offsetof(UCarePackgeItemListWidget_C, boolField288);
	static_assert(UCarePackgeItemListWidget_C_boolField288_Offset == 0x288, "UCarePackgeItemListWidget_C::boolField288 offset is not 288");
	auto constexpr UCarePackgeItemListWidget_C_ArrName_Offset = offsetof(UCarePackgeItemListWidget_C, ArrName);
	static_assert(UCarePackgeItemListWidget_C_ArrName_Offset == 0x290, "UCarePackgeItemListWidget_C::ArrName offset is not 290");
	auto constexpr UCarePackgeItemListWidget_C_ArrCount_Offset = offsetof(UCarePackgeItemListWidget_C, ArrCount);
	static_assert(UCarePackgeItemListWidget_C_ArrCount_Offset == 0x2a0, "UCarePackgeItemListWidget_C::ArrCount offset is not 2a0");
	auto constexpr UCarePackgeItemListWidget_C_CustomTickCount_Offset = offsetof(UCarePackgeItemListWidget_C, CustomTickCount);
	static_assert(UCarePackgeItemListWidget_C_CustomTickCount_Offset == 0x2b0, "UCarePackgeItemListWidget_C::CustomTickCount offset is not 2b0");
	auto constexpr UCarePackgeItemListWidget_C_ArrItemSlot_Offset = offsetof(UCarePackgeItemListWidget_C, ArrItemSlot);
	static_assert(UCarePackgeItemListWidget_C_ArrItemSlot_Offset == 0x2b8, "UCarePackgeItemListWidget_C::ArrItemSlot offset is not 2b8");
	auto constexpr UCarePackgeItemListWidget_C_CustomTimerHandle_Offset = offsetof(UCarePackgeItemListWidget_C, CustomTimerHandle);
	static_assert(UCarePackgeItemListWidget_C_CustomTimerHandle_Offset == 0x2c8, "UCarePackgeItemListWidget_C::CustomTimerHandle offset is not 2c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
