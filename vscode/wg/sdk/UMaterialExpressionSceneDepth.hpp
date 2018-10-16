#pragma once
#include "UMaterialExpression.hpp"
#include "EMaterialSceneAttributeInputMode.hpp"
#include "FExpressionInput.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSceneDepth // Size: 0xE8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSceneDepth t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(977); // id32("Class Engine.MaterialExpressionSceneDepth")
		return ptr;
	}
	TEnumAsByte<enum EMaterialSceneAttributeInputMode> InputMode; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.MaterialExpressionSceneDepth.InputMode */
	uint8_t UnknownData69[0x7];
	FExpressionInput Input; /* Ofs: 0x70 Size: 0x38 - StructProperty Engine.MaterialExpressionSceneDepth.Input */
	FExpressionInput Coordinates; /* Ofs: 0xA8 Size: 0x38 - StructProperty Engine.MaterialExpressionSceneDepth.Coordinates */
	FVector2D ConstInput; /* Ofs: 0xE0 Size: 0x8 - StructProperty Engine.MaterialExpressionSceneDepth.ConstInput */


	inline bool SetInputMode(t_structHelper inst, TEnumAsByte<enum EMaterialSceneAttributeInputMode> value) { inst.WriteOffset(0x68, value); }
	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x70, value); }
	inline bool SetCoordinates(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA8, value); }
	inline bool SetConstInput(t_structHelper inst, FVector2D value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSceneDepth = sizeof(UMaterialExpressionSceneDepth); // 232
    static_assert(sizeof(UMaterialExpressionSceneDepth) == 0xE8, "Size of UMaterialExpressionSceneDepth is not correct.");
	auto constexpr UMaterialExpressionSceneDepth_InputMode_Offset = offsetof(UMaterialExpressionSceneDepth, InputMode);
	static_assert(UMaterialExpressionSceneDepth_InputMode_Offset == 0x68, "UMaterialExpressionSceneDepth::InputMode offset is not 68");
	auto constexpr UMaterialExpressionSceneDepth_Input_Offset = offsetof(UMaterialExpressionSceneDepth, Input);
	static_assert(UMaterialExpressionSceneDepth_Input_Offset == 0x70, "UMaterialExpressionSceneDepth::Input offset is not 70");
	auto constexpr UMaterialExpressionSceneDepth_Coordinates_Offset = offsetof(UMaterialExpressionSceneDepth, Coordinates);
	static_assert(UMaterialExpressionSceneDepth_Coordinates_Offset == 0xa8, "UMaterialExpressionSceneDepth::Coordinates offset is not a8");
	auto constexpr UMaterialExpressionSceneDepth_ConstInput_Offset = offsetof(UMaterialExpressionSceneDepth, ConstInput);
	static_assert(UMaterialExpressionSceneDepth_ConstInput_Offset == 0xe0, "UMaterialExpressionSceneDepth::ConstInput offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
