#pragma once
#include "UMaterialExpression.hpp"
#include "EMaterialSceneAttributeInputMode.hpp"
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSceneColor // Size: 0xE8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSceneColor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(976); // id32("Class Engine.MaterialExpressionSceneColor")
		return ptr;
	}
	TEnumAsByte<enum EMaterialSceneAttributeInputMode> InputMode; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.MaterialExpressionSceneColor.InputMode */
	uint8_t UnknownData69[0x7];
	FExpressionInput Input; /* Ofs: 0x70 Size: 0x38 - StructProperty Engine.MaterialExpressionSceneColor.Input */
	FExpressionInput OffsetFraction; /* Ofs: 0xA8 Size: 0x38 - StructProperty Engine.MaterialExpressionSceneColor.OffsetFraction */
	FVector2D ConstInput; /* Ofs: 0xE0 Size: 0x8 - StructProperty Engine.MaterialExpressionSceneColor.ConstInput */


	inline bool SetInputMode(t_structHelper inst, TEnumAsByte<enum EMaterialSceneAttributeInputMode> value) { inst.WriteOffset(0x68, value); }
	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x70, value); }
	inline bool SetOffsetFraction(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA8, value); }
	inline bool SetConstInput(t_structHelper inst, FVector2D value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSceneColor = sizeof(UMaterialExpressionSceneColor); // 232
    static_assert(sizeof(UMaterialExpressionSceneColor) == 0xE8, "Size of UMaterialExpressionSceneColor is not correct.");
	auto constexpr UMaterialExpressionSceneColor_InputMode_Offset = offsetof(UMaterialExpressionSceneColor, InputMode);
	static_assert(UMaterialExpressionSceneColor_InputMode_Offset == 0x68, "UMaterialExpressionSceneColor::InputMode offset is not 68");
	auto constexpr UMaterialExpressionSceneColor_Input_Offset = offsetof(UMaterialExpressionSceneColor, Input);
	static_assert(UMaterialExpressionSceneColor_Input_Offset == 0x70, "UMaterialExpressionSceneColor::Input offset is not 70");
	auto constexpr UMaterialExpressionSceneColor_OffsetFraction_Offset = offsetof(UMaterialExpressionSceneColor, OffsetFraction);
	static_assert(UMaterialExpressionSceneColor_OffsetFraction_Offset == 0xa8, "UMaterialExpressionSceneColor::OffsetFraction offset is not a8");
	auto constexpr UMaterialExpressionSceneColor_ConstInput_Offset = offsetof(UMaterialExpressionSceneColor, ConstInput);
	static_assert(UMaterialExpressionSceneColor_ConstInput_Offset == 0xe0, "UMaterialExpressionSceneColor::ConstInput offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
