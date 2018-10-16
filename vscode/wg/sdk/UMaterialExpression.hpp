#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpression // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef UMaterialExpression t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(857); // id32("Class Engine.MaterialExpression")
		return ptr;
	}
	ExternalPtr<struct UMaterial> Material; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.MaterialExpression.Material */
	ExternalPtr<struct UMaterialFunction> Function; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.MaterialExpression.Function */
	FString Desc; /* Ofs: 0x40 Size: 0x10 - StrProperty Engine.MaterialExpression.Desc */
	FColor BorderColor; /* Ofs: 0x50 Size: 0x4 - StructProperty Engine.MaterialExpression.BorderColor */
	uint8_t boolField54;
	uint8_t boolField55;
	uint8_t UnknownData56[0x2];
	TArray<struct FExpressionOutput> Outputs; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.MaterialExpression.Outputs */


	inline bool SetMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x30, value); }
	inline bool SetFunction(t_structHelper inst, ExternalPtr<struct UMaterialFunction> value) { inst.WriteOffset(0x38, value); }
	inline bool SetDesc(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetBorderColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x50, value); }
	inline bool bRealtimePreview()
	{
		return boolField54& 0x1;
	}
	inline bool SetbRealtimePreview(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bNeedToUpdatePreview()
	{
		return boolField54& 0x2;
	}
	inline bool SetbNeedToUpdatePreview(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsParameterExpression()
	{
		return boolField54& 0x4;
	}
	inline bool SetbIsParameterExpression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bCommentBubbleVisible()
	{
		return boolField54& 0x8;
	}
	inline bool SetbCommentBubbleVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bShowOutputNameOnPin()
	{
		return boolField54& 0x10;
	}
	inline bool SetbShowOutputNameOnPin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bShowMaskColorsOnPin()
	{
		return boolField54& 0x20;
	}
	inline bool SetbShowMaskColorsOnPin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bHidePreviewWindow()
	{
		return boolField54& 0x40;
	}
	inline bool SetbHidePreviewWindow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bCollapsed()
	{
		return boolField54& 0x80;
	}
	inline bool SetbCollapsed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bShaderInputData()
	{
		return boolField55& 0x1;
	}
	inline bool SetbShaderInputData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x55, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShowInputs()
	{
		return boolField55& 0x2;
	}
	inline bool SetbShowInputs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x55, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bShowOutputs()
	{
		return boolField55& 0x4;
	}
	inline bool SetbShowOutputs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x55, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetOutputs(t_structHelper inst, TArray<struct FExpressionOutput> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpression = sizeof(UMaterialExpression); // 104
    static_assert(sizeof(UMaterialExpression) == 0x68, "Size of UMaterialExpression is not correct.");
	auto constexpr UMaterialExpression_Material_Offset = offsetof(UMaterialExpression, Material);
	static_assert(UMaterialExpression_Material_Offset == 0x30, "UMaterialExpression::Material offset is not 30");
	auto constexpr UMaterialExpression_Function_Offset = offsetof(UMaterialExpression, Function);
	static_assert(UMaterialExpression_Function_Offset == 0x38, "UMaterialExpression::Function offset is not 38");
	auto constexpr UMaterialExpression_Desc_Offset = offsetof(UMaterialExpression, Desc);
	static_assert(UMaterialExpression_Desc_Offset == 0x40, "UMaterialExpression::Desc offset is not 40");
	auto constexpr UMaterialExpression_BorderColor_Offset = offsetof(UMaterialExpression, BorderColor);
	static_assert(UMaterialExpression_BorderColor_Offset == 0x50, "UMaterialExpression::BorderColor offset is not 50");
	auto constexpr UMaterialExpression_boolField54_Offset = offsetof(UMaterialExpression, boolField54);
	static_assert(UMaterialExpression_boolField54_Offset == 0x54, "UMaterialExpression::boolField54 offset is not 54");
	auto constexpr UMaterialExpression_boolField55_Offset = offsetof(UMaterialExpression, boolField55);
	static_assert(UMaterialExpression_boolField55_Offset == 0x55, "UMaterialExpression::boolField55 offset is not 55");
	auto constexpr UMaterialExpression_Outputs_Offset = offsetof(UMaterialExpression, Outputs);
	static_assert(UMaterialExpression_Outputs_Offset == 0x58, "UMaterialExpression::Outputs offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
