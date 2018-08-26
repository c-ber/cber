#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_SprintBar_C // Size: 0x291
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_SprintBar_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88817); // id32("WidgetBlueprintGeneratedClass W_SprintBar.W_SprintBar_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_SprintBar.W_SprintBar_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> SprintIcon_OFF; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_SprintBar.W_SprintBar_C.SprintIcon_OFF */
	ExternalPtr<struct UWidgetAnimation> SprintIcon_ON; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_SprintBar.W_SprintBar_C.SprintIcon_ON */
	ExternalPtr<struct UWidgetAnimation> SprintBar_Hide; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_SprintBar.W_SprintBar_C.SprintBar_Hide */
	ExternalPtr<struct UWidgetAnimation> SprintBar_Show; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_SprintBar.W_SprintBar_C.SprintBar_Show */
	ExternalPtr<struct UCanvasPanel> SprintBar_BG; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_SprintBar.W_SprintBar_C.SprintBar_BG */
	ExternalPtr<struct UImage> SprintBar_Icon; /* Ofs: 0x278 Size: 0x8 - ObjectProperty W_SprintBar.W_SprintBar_C.SprintBar_Icon */
	ExternalPtr<struct UImage> SprintBar_Value; /* Ofs: 0x280 Size: 0x8 - ObjectProperty W_SprintBar.W_SprintBar_C.SprintBar_Value */
	float SprintValue; /* Ofs: 0x288 Size: 0x4 - FloatProperty W_SprintBar.W_SprintBar_C.SprintValue */
	float SprintBarWidth; /* Ofs: 0x28C Size: 0x4 - FloatProperty W_SprintBar.W_SprintBar_C.SprintBarWidth */
	uint8_t boolField290;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetSprintIcon_OFF(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetSprintIcon_ON(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x258, value); }
	inline bool SetSprintBar_Hide(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x260, value); }
	inline bool SetSprintBar_Show(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x268, value); }
	inline bool SetSprintBar_BG(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x270, value); }
	inline bool SetSprintBar_Icon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x278, value); }
	inline bool SetSprintBar_Value(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x280, value); }
	inline bool SetSprintValue(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetSprintBarWidth(t_structHelper inst, float value) { inst.WriteOffset(0x28C, value); }
	inline bool bIsSprinting()
	{
		return boolField290& 0x1;
	}
	inline bool SetbIsSprinting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x290, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_SprintBar_C = sizeof(UW_SprintBar_C); // 657
    static_assert(sizeof(UW_SprintBar_C) == 0x291, "Size of UW_SprintBar_C is not correct.");
	auto constexpr UW_SprintBar_C_UberGraphFrame_Offset = offsetof(UW_SprintBar_C, UberGraphFrame);
	static_assert(UW_SprintBar_C_UberGraphFrame_Offset == 0x248, "UW_SprintBar_C::UberGraphFrame offset is not 248");
	auto constexpr UW_SprintBar_C_SprintIcon_OFF_Offset = offsetof(UW_SprintBar_C, SprintIcon_OFF);
	static_assert(UW_SprintBar_C_SprintIcon_OFF_Offset == 0x250, "UW_SprintBar_C::SprintIcon_OFF offset is not 250");
	auto constexpr UW_SprintBar_C_SprintIcon_ON_Offset = offsetof(UW_SprintBar_C, SprintIcon_ON);
	static_assert(UW_SprintBar_C_SprintIcon_ON_Offset == 0x258, "UW_SprintBar_C::SprintIcon_ON offset is not 258");
	auto constexpr UW_SprintBar_C_SprintBar_Hide_Offset = offsetof(UW_SprintBar_C, SprintBar_Hide);
	static_assert(UW_SprintBar_C_SprintBar_Hide_Offset == 0x260, "UW_SprintBar_C::SprintBar_Hide offset is not 260");
	auto constexpr UW_SprintBar_C_SprintBar_Show_Offset = offsetof(UW_SprintBar_C, SprintBar_Show);
	static_assert(UW_SprintBar_C_SprintBar_Show_Offset == 0x268, "UW_SprintBar_C::SprintBar_Show offset is not 268");
	auto constexpr UW_SprintBar_C_SprintBar_BG_Offset = offsetof(UW_SprintBar_C, SprintBar_BG);
	static_assert(UW_SprintBar_C_SprintBar_BG_Offset == 0x270, "UW_SprintBar_C::SprintBar_BG offset is not 270");
	auto constexpr UW_SprintBar_C_SprintBar_Icon_Offset = offsetof(UW_SprintBar_C, SprintBar_Icon);
	static_assert(UW_SprintBar_C_SprintBar_Icon_Offset == 0x278, "UW_SprintBar_C::SprintBar_Icon offset is not 278");
	auto constexpr UW_SprintBar_C_SprintBar_Value_Offset = offsetof(UW_SprintBar_C, SprintBar_Value);
	static_assert(UW_SprintBar_C_SprintBar_Value_Offset == 0x280, "UW_SprintBar_C::SprintBar_Value offset is not 280");
	auto constexpr UW_SprintBar_C_SprintValue_Offset = offsetof(UW_SprintBar_C, SprintValue);
	static_assert(UW_SprintBar_C_SprintValue_Offset == 0x288, "UW_SprintBar_C::SprintValue offset is not 288");
	auto constexpr UW_SprintBar_C_SprintBarWidth_Offset = offsetof(UW_SprintBar_C, SprintBarWidth);
	static_assert(UW_SprintBar_C_SprintBarWidth_Offset == 0x28c, "UW_SprintBar_C::SprintBarWidth offset is not 28c");
	auto constexpr UW_SprintBar_C_boolField290_Offset = offsetof(UW_SprintBar_C, boolField290);
	static_assert(UW_SprintBar_C_boolField290_Offset == 0x290, "UW_SprintBar_C::boolField290 offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
