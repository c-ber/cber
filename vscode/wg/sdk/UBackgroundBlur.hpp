#pragma once
#include "UContentWidget.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBackgroundBlur // Size: 0x208
	: public UContentWidget // Size: 0x148
{
private:
	typedef UBackgroundBlur t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(495); // id32("Class UMG.BackgroundBlur")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x148 Size: 0x10 - StructProperty UMG.BackgroundBlur.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x158 Size: 0x1 - ByteProperty UMG.BackgroundBlur.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x159 Size: 0x1 - ByteProperty UMG.BackgroundBlur.VerticalAlignment */
	uint8_t boolField15A;
	uint8_t UnknownData15B[0x1];
	float BlurStrength; /* Ofs: 0x15C Size: 0x4 - FloatProperty UMG.BackgroundBlur.BlurStrength */
	uint8_t boolField160;
	uint8_t UnknownData161[0x3];
	int32_t BlurRadius; /* Ofs: 0x164 Size: 0x4 - IntProperty UMG.BackgroundBlur.BlurRadius */
	FSlateBrush LowQualityFallbackBrush; /* Ofs: 0x168 Size: 0x90 - StructProperty UMG.BackgroundBlur.LowQualityFallbackBrush */
	uint8_t UnknownData1F8[0x10];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x148, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x158, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x159, value); }
	inline bool bApplyAlphaToBlur()
	{
		return boolField15A& 0x1;
	}
	inline bool SetbApplyAlphaToBlur(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x15A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBlurStrength(t_structHelper inst, float value) { inst.WriteOffset(0x15C, value); }
	inline bool bOverrideAutoRadiusCalculation()
	{
		return boolField160& 0x1;
	}
	inline bool SetbOverrideAutoRadiusCalculation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x160, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBlurRadius(t_structHelper inst, int32_t value) { inst.WriteOffset(0x164, value); }
	inline bool SetLowQualityFallbackBrush(t_structHelper inst, FSlateBrush value) { inst.WriteOffset(0x168, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBackgroundBlur = sizeof(UBackgroundBlur); // 520
    static_assert(sizeof(UBackgroundBlur) == 0x208, "Size of UBackgroundBlur is not correct.");
	auto constexpr UBackgroundBlur_Padding_Offset = offsetof(UBackgroundBlur, Padding);
	static_assert(UBackgroundBlur_Padding_Offset == 0x148, "UBackgroundBlur::Padding offset is not 148");
	auto constexpr UBackgroundBlur_HorizontalAlignment_Offset = offsetof(UBackgroundBlur, HorizontalAlignment);
	static_assert(UBackgroundBlur_HorizontalAlignment_Offset == 0x158, "UBackgroundBlur::HorizontalAlignment offset is not 158");
	auto constexpr UBackgroundBlur_VerticalAlignment_Offset = offsetof(UBackgroundBlur, VerticalAlignment);
	static_assert(UBackgroundBlur_VerticalAlignment_Offset == 0x159, "UBackgroundBlur::VerticalAlignment offset is not 159");
	auto constexpr UBackgroundBlur_boolField15A_Offset = offsetof(UBackgroundBlur, boolField15A);
	static_assert(UBackgroundBlur_boolField15A_Offset == 0x15a, "UBackgroundBlur::boolField15A offset is not 15a");
	auto constexpr UBackgroundBlur_BlurStrength_Offset = offsetof(UBackgroundBlur, BlurStrength);
	static_assert(UBackgroundBlur_BlurStrength_Offset == 0x15c, "UBackgroundBlur::BlurStrength offset is not 15c");
	auto constexpr UBackgroundBlur_boolField160_Offset = offsetof(UBackgroundBlur, boolField160);
	static_assert(UBackgroundBlur_boolField160_Offset == 0x160, "UBackgroundBlur::boolField160 offset is not 160");
	auto constexpr UBackgroundBlur_BlurRadius_Offset = offsetof(UBackgroundBlur, BlurRadius);
	static_assert(UBackgroundBlur_BlurRadius_Offset == 0x164, "UBackgroundBlur::BlurRadius offset is not 164");
	auto constexpr UBackgroundBlur_LowQualityFallbackBrush_Offset = offsetof(UBackgroundBlur, LowQualityFallbackBrush);
	static_assert(UBackgroundBlur_LowQualityFallbackBrush_Offset == 0x168, "UBackgroundBlur::LowQualityFallbackBrush offset is not 168");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
