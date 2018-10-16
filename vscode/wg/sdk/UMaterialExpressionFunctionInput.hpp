#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "EFunctionInputType.hpp"
#include "FVector4.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFunctionInput // Size: 0x140
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionFunctionInput t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(920); // id32("Class Engine.MaterialExpressionFunctionInput")
		return ptr;
	}
	FExpressionInput Preview; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionFunctionInput.Preview */
	FString InputName; /* Ofs: 0xA0 Size: 0x10 - StrProperty Engine.MaterialExpressionFunctionInput.InputName */
	FString Description; /* Ofs: 0xB0 Size: 0x10 - StrProperty Engine.MaterialExpressionFunctionInput.Description */
	FGuid ID; /* Ofs: 0xC0 Size: 0x10 - StructProperty Engine.MaterialExpressionFunctionInput.ID */
	TEnumAsByte<enum EFunctionInputType> InputType; /* Ofs: 0xD0 Size: 0x1 - ByteProperty Engine.MaterialExpressionFunctionInput.InputType */
	uint8_t UnknownDataD1[0xF];
	FVector4 PreviewValue; /* Ofs: 0xE0 Size: 0x10 - StructProperty Engine.MaterialExpressionFunctionInput.PreviewValue */
	uint8_t boolFieldF0;
	uint8_t UnknownDataF1[0x3];
	int32_t SortPriority; /* Ofs: 0xF4 Size: 0x4 - IntProperty Engine.MaterialExpressionFunctionInput.SortPriority */
	uint8_t boolFieldF8;
	uint8_t UnknownDataF9[0x47];


	inline bool SetPreview(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetInputName(t_structHelper inst, FString value) { inst.WriteOffset(0xA0, value); }
	inline bool SetDescription(t_structHelper inst, FString value) { inst.WriteOffset(0xB0, value); }
	inline bool SetID(t_structHelper inst, FGuid value) { inst.WriteOffset(0xC0, value); }
	inline bool SetInputType(t_structHelper inst, TEnumAsByte<enum EFunctionInputType> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetPreviewValue(t_structHelper inst, FVector4 value) { inst.WriteOffset(0xE0, value); }
	inline bool bUsePreviewValueAsDefault()
	{
		return boolFieldF0& 0x1;
	}
	inline bool SetbUsePreviewValueAsDefault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSortPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0xF4, value); }
	inline bool bCompilingFunctionPreview()
	{
		return boolFieldF8& 0x1;
	}
	inline bool SetbCompilingFunctionPreview(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFunctionInput = sizeof(UMaterialExpressionFunctionInput); // 320
    static_assert(sizeof(UMaterialExpressionFunctionInput) == 0x140, "Size of UMaterialExpressionFunctionInput is not correct.");
	auto constexpr UMaterialExpressionFunctionInput_Preview_Offset = offsetof(UMaterialExpressionFunctionInput, Preview);
	static_assert(UMaterialExpressionFunctionInput_Preview_Offset == 0x68, "UMaterialExpressionFunctionInput::Preview offset is not 68");
	auto constexpr UMaterialExpressionFunctionInput_InputName_Offset = offsetof(UMaterialExpressionFunctionInput, InputName);
	static_assert(UMaterialExpressionFunctionInput_InputName_Offset == 0xa0, "UMaterialExpressionFunctionInput::InputName offset is not a0");
	auto constexpr UMaterialExpressionFunctionInput_Description_Offset = offsetof(UMaterialExpressionFunctionInput, Description);
	static_assert(UMaterialExpressionFunctionInput_Description_Offset == 0xb0, "UMaterialExpressionFunctionInput::Description offset is not b0");
	auto constexpr UMaterialExpressionFunctionInput_ID_Offset = offsetof(UMaterialExpressionFunctionInput, ID);
	static_assert(UMaterialExpressionFunctionInput_ID_Offset == 0xc0, "UMaterialExpressionFunctionInput::ID offset is not c0");
	auto constexpr UMaterialExpressionFunctionInput_InputType_Offset = offsetof(UMaterialExpressionFunctionInput, InputType);
	static_assert(UMaterialExpressionFunctionInput_InputType_Offset == 0xd0, "UMaterialExpressionFunctionInput::InputType offset is not d0");
	auto constexpr UMaterialExpressionFunctionInput_PreviewValue_Offset = offsetof(UMaterialExpressionFunctionInput, PreviewValue);
	static_assert(UMaterialExpressionFunctionInput_PreviewValue_Offset == 0xe0, "UMaterialExpressionFunctionInput::PreviewValue offset is not e0");
	auto constexpr UMaterialExpressionFunctionInput_boolFieldF0_Offset = offsetof(UMaterialExpressionFunctionInput, boolFieldF0);
	static_assert(UMaterialExpressionFunctionInput_boolFieldF0_Offset == 0xf0, "UMaterialExpressionFunctionInput::boolFieldF0 offset is not f0");
	auto constexpr UMaterialExpressionFunctionInput_SortPriority_Offset = offsetof(UMaterialExpressionFunctionInput, SortPriority);
	static_assert(UMaterialExpressionFunctionInput_SortPriority_Offset == 0xf4, "UMaterialExpressionFunctionInput::SortPriority offset is not f4");
	auto constexpr UMaterialExpressionFunctionInput_boolFieldF8_Offset = offsetof(UMaterialExpressionFunctionInput, boolFieldF8);
	static_assert(UMaterialExpressionFunctionInput_boolFieldF8_Offset == 0xf8, "UMaterialExpressionFunctionInput::boolFieldF8 offset is not f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
