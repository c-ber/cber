#pragma once
#include "UFppWeaponSlotHudBaseWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FWidgetTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_FppWeaponSlotHudWidget_C // Size: 0x3D4
	: public UFppWeaponSlotHudBaseWidget // Size: 0x388
{
private:
	typedef UBP_FppWeaponSlotHudWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69256); // id32("WidgetBlueprintGeneratedClass BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x388 Size: 0x8 - StructProperty BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.UberGraphFrame */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_1; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.CanvasPanel_1 */
	uint8_t boolField398;
	uint8_t UnknownData399[0x3];
	FWidgetTransform FppWeaponSlotHudInitTransform; /* Ofs: 0x39C Size: 0x1C - StructProperty BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.FppWeaponSlotHudInitTransform */
	FWidgetTransform FppWeaponSlotHudUpTransform; /* Ofs: 0x3B8 Size: 0x1C - StructProperty BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.FppWeaponSlotHudUpTransform */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x388, value); }
	inline bool SetCanvasPanel_1(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x390, value); }
	inline bool IsFirstConstruct()
	{
		return boolField398& 0x1;
	}
	inline bool SetIsFirstConstruct(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x398, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFppWeaponSlotHudInitTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x39C, value); }
	inline bool SetFppWeaponSlotHudUpTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x3B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_FppWeaponSlotHudWidget_C = sizeof(UBP_FppWeaponSlotHudWidget_C); // 980
    static_assert(sizeof(UBP_FppWeaponSlotHudWidget_C) == 0x3D4, "Size of UBP_FppWeaponSlotHudWidget_C is not correct.");
	auto constexpr UBP_FppWeaponSlotHudWidget_C_UberGraphFrame_Offset = offsetof(UBP_FppWeaponSlotHudWidget_C, UberGraphFrame);
	static_assert(UBP_FppWeaponSlotHudWidget_C_UberGraphFrame_Offset == 0x388, "UBP_FppWeaponSlotHudWidget_C::UberGraphFrame offset is not 388");
	auto constexpr UBP_FppWeaponSlotHudWidget_C_CanvasPanel_1_Offset = offsetof(UBP_FppWeaponSlotHudWidget_C, CanvasPanel_1);
	static_assert(UBP_FppWeaponSlotHudWidget_C_CanvasPanel_1_Offset == 0x390, "UBP_FppWeaponSlotHudWidget_C::CanvasPanel_1 offset is not 390");
	auto constexpr UBP_FppWeaponSlotHudWidget_C_boolField398_Offset = offsetof(UBP_FppWeaponSlotHudWidget_C, boolField398);
	static_assert(UBP_FppWeaponSlotHudWidget_C_boolField398_Offset == 0x398, "UBP_FppWeaponSlotHudWidget_C::boolField398 offset is not 398");
	auto constexpr UBP_FppWeaponSlotHudWidget_C_FppWeaponSlotHudInitTransform_Offset = offsetof(UBP_FppWeaponSlotHudWidget_C, FppWeaponSlotHudInitTransform);
	static_assert(UBP_FppWeaponSlotHudWidget_C_FppWeaponSlotHudInitTransform_Offset == 0x39c, "UBP_FppWeaponSlotHudWidget_C::FppWeaponSlotHudInitTransform offset is not 39c");
	auto constexpr UBP_FppWeaponSlotHudWidget_C_FppWeaponSlotHudUpTransform_Offset = offsetof(UBP_FppWeaponSlotHudWidget_C, FppWeaponSlotHudUpTransform);
	static_assert(UBP_FppWeaponSlotHudWidget_C_FppWeaponSlotHudUpTransform_Offset == 0x3b8, "UBP_FppWeaponSlotHudWidget_C::FppWeaponSlotHudUpTransform offset is not 3b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
