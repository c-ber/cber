#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarePackageInteractionWidget_C // Size: 0x261
	: public UUserWidget // Size: 0x248
{
private:
	typedef UCarePackageInteractionWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69690); // id32("WidgetBlueprintGeneratedClass CarePackageInteractionWidget.CarePackageInteractionWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty CarePackageInteractionWidget.CarePackageInteractionWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetSwitcher> InteractionInputMethodSwitcher; /* Ofs: 0x250 Size: 0x8 - ObjectProperty CarePackageInteractionWidget.CarePackageInteractionWidget_C.InteractionInputMethodSwitcher */
	ExternalPtr<struct UImage> KeyImage; /* Ofs: 0x258 Size: 0x8 - ObjectProperty CarePackageInteractionWidget.CarePackageInteractionWidget_C.KeyImage */
	uint8_t boolField260;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetInteractionInputMethodSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x250, value); }
	inline bool SetKeyImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool IsCanShowCarePackageList()
	{
		return boolField260& 0x1;
	}
	inline bool SetIsCanShowCarePackageList(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x260, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarePackageInteractionWidget_C = sizeof(UCarePackageInteractionWidget_C); // 609
    static_assert(sizeof(UCarePackageInteractionWidget_C) == 0x261, "Size of UCarePackageInteractionWidget_C is not correct.");
	auto constexpr UCarePackageInteractionWidget_C_UberGraphFrame_Offset = offsetof(UCarePackageInteractionWidget_C, UberGraphFrame);
	static_assert(UCarePackageInteractionWidget_C_UberGraphFrame_Offset == 0x248, "UCarePackageInteractionWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UCarePackageInteractionWidget_C_InteractionInputMethodSwitcher_Offset = offsetof(UCarePackageInteractionWidget_C, InteractionInputMethodSwitcher);
	static_assert(UCarePackageInteractionWidget_C_InteractionInputMethodSwitcher_Offset == 0x250, "UCarePackageInteractionWidget_C::InteractionInputMethodSwitcher offset is not 250");
	auto constexpr UCarePackageInteractionWidget_C_KeyImage_Offset = offsetof(UCarePackageInteractionWidget_C, KeyImage);
	static_assert(UCarePackageInteractionWidget_C_KeyImage_Offset == 0x258, "UCarePackageInteractionWidget_C::KeyImage offset is not 258");
	auto constexpr UCarePackageInteractionWidget_C_boolField260_Offset = offsetof(UCarePackageInteractionWidget_C, boolField260);
	static_assert(UCarePackageInteractionWidget_C_boolField260_Offset == 0x260, "UCarePackageInteractionWidget_C::boolField260 offset is not 260");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
