#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FButtonStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_WeaponButton_C // Size: 0x520
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_WeaponButton_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91389); // id32("WidgetBlueprintGeneratedClass W_WeaponButton.W_WeaponButton_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_WeaponButton.W_WeaponButton_C.UberGraphFrame */
	ExternalPtr<struct UButton> ButtonGive; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_WeaponButton.W_WeaponButton_C.ButtonGive */
	ExternalPtr<struct UImage> ItemImg; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_WeaponButton.W_WeaponButton_C.ItemImg */
	ExternalPtr<struct UTextBlock> Text_Name; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_WeaponButton.W_WeaponButton_C.Text_Name */
	ExternalPtr<struct UClass> ClassVar; /* Ofs: 0x268 Size: 0x8 - ClassProperty W_WeaponButton.W_WeaponButton_C.ClassVar */
	FButtonStyle ButtonStyle; /* Ofs: 0x270 Size: 0x2A8 - StructProperty W_WeaponButton.W_WeaponButton_C.ButtonStyle */
	ExternalPtr<struct UW_WeaponMenu_C> MenuRef; /* Ofs: 0x518 Size: 0x8 - ObjectProperty W_WeaponButton.W_WeaponButton_C.MenuRef */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButtonGive(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetItemImg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetText_Name(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
	inline bool SetClassVar(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x268, value); }
	inline bool SetButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x270, value); }
	inline bool SetMenuRef(t_structHelper inst, ExternalPtr<struct UW_WeaponMenu_C> value) { inst.WriteOffset(0x518, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_WeaponButton_C = sizeof(UW_WeaponButton_C); // 1312
    static_assert(sizeof(UW_WeaponButton_C) == 0x520, "Size of UW_WeaponButton_C is not correct.");
	auto constexpr UW_WeaponButton_C_UberGraphFrame_Offset = offsetof(UW_WeaponButton_C, UberGraphFrame);
	static_assert(UW_WeaponButton_C_UberGraphFrame_Offset == 0x248, "UW_WeaponButton_C::UberGraphFrame offset is not 248");
	auto constexpr UW_WeaponButton_C_ButtonGive_Offset = offsetof(UW_WeaponButton_C, ButtonGive);
	static_assert(UW_WeaponButton_C_ButtonGive_Offset == 0x250, "UW_WeaponButton_C::ButtonGive offset is not 250");
	auto constexpr UW_WeaponButton_C_ItemImg_Offset = offsetof(UW_WeaponButton_C, ItemImg);
	static_assert(UW_WeaponButton_C_ItemImg_Offset == 0x258, "UW_WeaponButton_C::ItemImg offset is not 258");
	auto constexpr UW_WeaponButton_C_Text_Name_Offset = offsetof(UW_WeaponButton_C, Text_Name);
	static_assert(UW_WeaponButton_C_Text_Name_Offset == 0x260, "UW_WeaponButton_C::Text_Name offset is not 260");
	auto constexpr UW_WeaponButton_C_ClassVar_Offset = offsetof(UW_WeaponButton_C, ClassVar);
	static_assert(UW_WeaponButton_C_ClassVar_Offset == 0x268, "UW_WeaponButton_C::ClassVar offset is not 268");
	auto constexpr UW_WeaponButton_C_ButtonStyle_Offset = offsetof(UW_WeaponButton_C, ButtonStyle);
	static_assert(UW_WeaponButton_C_ButtonStyle_Offset == 0x270, "UW_WeaponButton_C::ButtonStyle offset is not 270");
	auto constexpr UW_WeaponButton_C_MenuRef_Offset = offsetof(UW_WeaponButton_C, MenuRef);
	static_assert(UW_WeaponButton_C_MenuRef_Offset == 0x518, "UW_WeaponButton_C::MenuRef offset is not 518");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
