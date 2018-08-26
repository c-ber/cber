#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_RecoilRotation_Row_C // Size: 0x294
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_RecoilRotation_Row_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90768); // id32("WidgetBlueprintGeneratedClass W_RecoilRotation_Row.W_RecoilRotation_Row_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.UberGraphFrame */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.Image_1 */
	ExternalPtr<struct UTextBlock> TextBlock_ID; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.TextBlock_ID */
	ExternalPtr<struct UTextBlock> TextBlock_RH; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.TextBlock_RH */
	ExternalPtr<struct UTextBlock> TextBlock_RTV; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.TextBlock_RTV */
	ExternalPtr<struct UTextBlock> TextBlock_RV; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.TextBlock_RV */
	ExternalPtr<struct UTextBlock> TextBlock_RVal; /* Ofs: 0x278 Size: 0x8 - ObjectProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.TextBlock_RVal */
	int32_t ID; /* Ofs: 0x280 Size: 0x4 - IntProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.ID */
	float CharX; /* Ofs: 0x284 Size: 0x4 - FloatProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.CharX */
	float CharY; /* Ofs: 0x288 Size: 0x4 - FloatProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.CharY */
	float WeapX; /* Ofs: 0x28C Size: 0x4 - FloatProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.WeapX */
	float WeapY; /* Ofs: 0x290 Size: 0x4 - FloatProperty W_RecoilRotation_Row.W_RecoilRotation_Row_C.WeapY */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTextBlock_ID(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetTextBlock_RH(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
	inline bool SetTextBlock_RTV(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetTextBlock_RV(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetTextBlock_RVal(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetID(t_structHelper inst, int32_t value) { inst.WriteOffset(0x280, value); }
	inline bool SetCharX(t_structHelper inst, float value) { inst.WriteOffset(0x284, value); }
	inline bool SetCharY(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetWeapX(t_structHelper inst, float value) { inst.WriteOffset(0x28C, value); }
	inline bool SetWeapY(t_structHelper inst, float value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_RecoilRotation_Row_C = sizeof(UW_RecoilRotation_Row_C); // 660
    static_assert(sizeof(UW_RecoilRotation_Row_C) == 0x294, "Size of UW_RecoilRotation_Row_C is not correct.");
	auto constexpr UW_RecoilRotation_Row_C_UberGraphFrame_Offset = offsetof(UW_RecoilRotation_Row_C, UberGraphFrame);
	static_assert(UW_RecoilRotation_Row_C_UberGraphFrame_Offset == 0x248, "UW_RecoilRotation_Row_C::UberGraphFrame offset is not 248");
	auto constexpr UW_RecoilRotation_Row_C_Image_1_Offset = offsetof(UW_RecoilRotation_Row_C, Image_1);
	static_assert(UW_RecoilRotation_Row_C_Image_1_Offset == 0x250, "UW_RecoilRotation_Row_C::Image_1 offset is not 250");
	auto constexpr UW_RecoilRotation_Row_C_TextBlock_ID_Offset = offsetof(UW_RecoilRotation_Row_C, TextBlock_ID);
	static_assert(UW_RecoilRotation_Row_C_TextBlock_ID_Offset == 0x258, "UW_RecoilRotation_Row_C::TextBlock_ID offset is not 258");
	auto constexpr UW_RecoilRotation_Row_C_TextBlock_RH_Offset = offsetof(UW_RecoilRotation_Row_C, TextBlock_RH);
	static_assert(UW_RecoilRotation_Row_C_TextBlock_RH_Offset == 0x260, "UW_RecoilRotation_Row_C::TextBlock_RH offset is not 260");
	auto constexpr UW_RecoilRotation_Row_C_TextBlock_RTV_Offset = offsetof(UW_RecoilRotation_Row_C, TextBlock_RTV);
	static_assert(UW_RecoilRotation_Row_C_TextBlock_RTV_Offset == 0x268, "UW_RecoilRotation_Row_C::TextBlock_RTV offset is not 268");
	auto constexpr UW_RecoilRotation_Row_C_TextBlock_RV_Offset = offsetof(UW_RecoilRotation_Row_C, TextBlock_RV);
	static_assert(UW_RecoilRotation_Row_C_TextBlock_RV_Offset == 0x270, "UW_RecoilRotation_Row_C::TextBlock_RV offset is not 270");
	auto constexpr UW_RecoilRotation_Row_C_TextBlock_RVal_Offset = offsetof(UW_RecoilRotation_Row_C, TextBlock_RVal);
	static_assert(UW_RecoilRotation_Row_C_TextBlock_RVal_Offset == 0x278, "UW_RecoilRotation_Row_C::TextBlock_RVal offset is not 278");
	auto constexpr UW_RecoilRotation_Row_C_ID_Offset = offsetof(UW_RecoilRotation_Row_C, ID);
	static_assert(UW_RecoilRotation_Row_C_ID_Offset == 0x280, "UW_RecoilRotation_Row_C::ID offset is not 280");
	auto constexpr UW_RecoilRotation_Row_C_CharX_Offset = offsetof(UW_RecoilRotation_Row_C, CharX);
	static_assert(UW_RecoilRotation_Row_C_CharX_Offset == 0x284, "UW_RecoilRotation_Row_C::CharX offset is not 284");
	auto constexpr UW_RecoilRotation_Row_C_CharY_Offset = offsetof(UW_RecoilRotation_Row_C, CharY);
	static_assert(UW_RecoilRotation_Row_C_CharY_Offset == 0x288, "UW_RecoilRotation_Row_C::CharY offset is not 288");
	auto constexpr UW_RecoilRotation_Row_C_WeapX_Offset = offsetof(UW_RecoilRotation_Row_C, WeapX);
	static_assert(UW_RecoilRotation_Row_C_WeapX_Offset == 0x28c, "UW_RecoilRotation_Row_C::WeapX offset is not 28c");
	auto constexpr UW_RecoilRotation_Row_C_WeapY_Offset = offsetof(UW_RecoilRotation_Row_C, WeapY);
	static_assert(UW_RecoilRotation_Row_C_WeapY_Offset == 0x290, "UW_RecoilRotation_Row_C::WeapY offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
