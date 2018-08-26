#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_RecoilInfoRow_C // Size: 0x2C4
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_RecoilInfoRow_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90731); // id32("WidgetBlueprintGeneratedClass W_RecoilInfoRow.W_RecoilInfoRow_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_RecoilInfoRow.W_RecoilInfoRow_C.UberGraphFrame */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.Image_1 */
	ExternalPtr<struct UTextBlock> TextBlock_ID; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_ID */
	ExternalPtr<struct UTextBlock> TextBlock_RDH; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_RDH */
	ExternalPtr<struct UTextBlock> TextBlock_RDV; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_RDV */
	ExternalPtr<struct UTextBlock> TextBlock_RH; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_RH */
	ExternalPtr<struct UTextBlock> TextBlock_RRV; /* Ofs: 0x278 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_RRV */
	ExternalPtr<struct UTextBlock> TextBlock_RTH; /* Ofs: 0x280 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_RTH */
	ExternalPtr<struct UTextBlock> TextBlock_RTV; /* Ofs: 0x288 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_RTV */
	ExternalPtr<struct UTextBlock> TextBlock_RV; /* Ofs: 0x290 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_RV */
	ExternalPtr<struct UTextBlock> TextBlock_RVal; /* Ofs: 0x298 Size: 0x8 - ObjectProperty W_RecoilInfoRow.W_RecoilInfoRow_C.TextBlock_RVal */
	int32_t ID; /* Ofs: 0x2A0 Size: 0x4 - IntProperty W_RecoilInfoRow.W_RecoilInfoRow_C.ID */
	float RVal; /* Ofs: 0x2A4 Size: 0x4 - FloatProperty W_RecoilInfoRow.W_RecoilInfoRow_C.RVal */
	float RV; /* Ofs: 0x2A8 Size: 0x4 - FloatProperty W_RecoilInfoRow.W_RecoilInfoRow_C.RV */
	float RH; /* Ofs: 0x2AC Size: 0x4 - FloatProperty W_RecoilInfoRow.W_RecoilInfoRow_C.RH */
	float RTV; /* Ofs: 0x2B0 Size: 0x4 - FloatProperty W_RecoilInfoRow.W_RecoilInfoRow_C.RTV */
	float RTH; /* Ofs: 0x2B4 Size: 0x4 - FloatProperty W_RecoilInfoRow.W_RecoilInfoRow_C.RTH */
	float RRV; /* Ofs: 0x2B8 Size: 0x4 - FloatProperty W_RecoilInfoRow.W_RecoilInfoRow_C.RRV */
	float RDV; /* Ofs: 0x2BC Size: 0x4 - FloatProperty W_RecoilInfoRow.W_RecoilInfoRow_C.RDV */
	float RDH; /* Ofs: 0x2C0 Size: 0x4 - FloatProperty W_RecoilInfoRow.W_RecoilInfoRow_C.RDH */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTextBlock_ID(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetTextBlock_RDH(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
	inline bool SetTextBlock_RDV(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetTextBlock_RH(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetTextBlock_RRV(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetTextBlock_RTH(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x280, value); }
	inline bool SetTextBlock_RTV(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x288, value); }
	inline bool SetTextBlock_RV(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x290, value); }
	inline bool SetTextBlock_RVal(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x298, value); }
	inline bool SetID(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetRVal(t_structHelper inst, float value) { inst.WriteOffset(0x2A4, value); }
	inline bool SetRV(t_structHelper inst, float value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetRH(t_structHelper inst, float value) { inst.WriteOffset(0x2AC, value); }
	inline bool SetRTV(t_structHelper inst, float value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetRTH(t_structHelper inst, float value) { inst.WriteOffset(0x2B4, value); }
	inline bool SetRRV(t_structHelper inst, float value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetRDV(t_structHelper inst, float value) { inst.WriteOffset(0x2BC, value); }
	inline bool SetRDH(t_structHelper inst, float value) { inst.WriteOffset(0x2C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_RecoilInfoRow_C = sizeof(UW_RecoilInfoRow_C); // 708
    static_assert(sizeof(UW_RecoilInfoRow_C) == 0x2C4, "Size of UW_RecoilInfoRow_C is not correct.");
	auto constexpr UW_RecoilInfoRow_C_UberGraphFrame_Offset = offsetof(UW_RecoilInfoRow_C, UberGraphFrame);
	static_assert(UW_RecoilInfoRow_C_UberGraphFrame_Offset == 0x248, "UW_RecoilInfoRow_C::UberGraphFrame offset is not 248");
	auto constexpr UW_RecoilInfoRow_C_Image_1_Offset = offsetof(UW_RecoilInfoRow_C, Image_1);
	static_assert(UW_RecoilInfoRow_C_Image_1_Offset == 0x250, "UW_RecoilInfoRow_C::Image_1 offset is not 250");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_ID_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_ID);
	static_assert(UW_RecoilInfoRow_C_TextBlock_ID_Offset == 0x258, "UW_RecoilInfoRow_C::TextBlock_ID offset is not 258");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_RDH_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_RDH);
	static_assert(UW_RecoilInfoRow_C_TextBlock_RDH_Offset == 0x260, "UW_RecoilInfoRow_C::TextBlock_RDH offset is not 260");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_RDV_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_RDV);
	static_assert(UW_RecoilInfoRow_C_TextBlock_RDV_Offset == 0x268, "UW_RecoilInfoRow_C::TextBlock_RDV offset is not 268");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_RH_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_RH);
	static_assert(UW_RecoilInfoRow_C_TextBlock_RH_Offset == 0x270, "UW_RecoilInfoRow_C::TextBlock_RH offset is not 270");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_RRV_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_RRV);
	static_assert(UW_RecoilInfoRow_C_TextBlock_RRV_Offset == 0x278, "UW_RecoilInfoRow_C::TextBlock_RRV offset is not 278");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_RTH_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_RTH);
	static_assert(UW_RecoilInfoRow_C_TextBlock_RTH_Offset == 0x280, "UW_RecoilInfoRow_C::TextBlock_RTH offset is not 280");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_RTV_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_RTV);
	static_assert(UW_RecoilInfoRow_C_TextBlock_RTV_Offset == 0x288, "UW_RecoilInfoRow_C::TextBlock_RTV offset is not 288");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_RV_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_RV);
	static_assert(UW_RecoilInfoRow_C_TextBlock_RV_Offset == 0x290, "UW_RecoilInfoRow_C::TextBlock_RV offset is not 290");
	auto constexpr UW_RecoilInfoRow_C_TextBlock_RVal_Offset = offsetof(UW_RecoilInfoRow_C, TextBlock_RVal);
	static_assert(UW_RecoilInfoRow_C_TextBlock_RVal_Offset == 0x298, "UW_RecoilInfoRow_C::TextBlock_RVal offset is not 298");
	auto constexpr UW_RecoilInfoRow_C_ID_Offset = offsetof(UW_RecoilInfoRow_C, ID);
	static_assert(UW_RecoilInfoRow_C_ID_Offset == 0x2a0, "UW_RecoilInfoRow_C::ID offset is not 2a0");
	auto constexpr UW_RecoilInfoRow_C_RVal_Offset = offsetof(UW_RecoilInfoRow_C, RVal);
	static_assert(UW_RecoilInfoRow_C_RVal_Offset == 0x2a4, "UW_RecoilInfoRow_C::RVal offset is not 2a4");
	auto constexpr UW_RecoilInfoRow_C_RV_Offset = offsetof(UW_RecoilInfoRow_C, RV);
	static_assert(UW_RecoilInfoRow_C_RV_Offset == 0x2a8, "UW_RecoilInfoRow_C::RV offset is not 2a8");
	auto constexpr UW_RecoilInfoRow_C_RH_Offset = offsetof(UW_RecoilInfoRow_C, RH);
	static_assert(UW_RecoilInfoRow_C_RH_Offset == 0x2ac, "UW_RecoilInfoRow_C::RH offset is not 2ac");
	auto constexpr UW_RecoilInfoRow_C_RTV_Offset = offsetof(UW_RecoilInfoRow_C, RTV);
	static_assert(UW_RecoilInfoRow_C_RTV_Offset == 0x2b0, "UW_RecoilInfoRow_C::RTV offset is not 2b0");
	auto constexpr UW_RecoilInfoRow_C_RTH_Offset = offsetof(UW_RecoilInfoRow_C, RTH);
	static_assert(UW_RecoilInfoRow_C_RTH_Offset == 0x2b4, "UW_RecoilInfoRow_C::RTH offset is not 2b4");
	auto constexpr UW_RecoilInfoRow_C_RRV_Offset = offsetof(UW_RecoilInfoRow_C, RRV);
	static_assert(UW_RecoilInfoRow_C_RRV_Offset == 0x2b8, "UW_RecoilInfoRow_C::RRV offset is not 2b8");
	auto constexpr UW_RecoilInfoRow_C_RDV_Offset = offsetof(UW_RecoilInfoRow_C, RDV);
	static_assert(UW_RecoilInfoRow_C_RDV_Offset == 0x2bc, "UW_RecoilInfoRow_C::RDV offset is not 2bc");
	auto constexpr UW_RecoilInfoRow_C_RDH_Offset = offsetof(UW_RecoilInfoRow_C, RDH);
	static_assert(UW_RecoilInfoRow_C_RDH_Offset == 0x2c0, "UW_RecoilInfoRow_C::RDH offset is not 2c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
