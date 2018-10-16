#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFunctionOutput // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionFunctionOutput t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(921); // id32("Class Engine.MaterialExpressionFunctionOutput")
		return ptr;
	}
	FString OutputName; /* Ofs: 0x68 Size: 0x10 - StrProperty Engine.MaterialExpressionFunctionOutput.OutputName */
	FString Description; /* Ofs: 0x78 Size: 0x10 - StrProperty Engine.MaterialExpressionFunctionOutput.Description */
	int32_t SortPriority; /* Ofs: 0x88 Size: 0x4 - IntProperty Engine.MaterialExpressionFunctionOutput.SortPriority */
	uint8_t UnknownData8C[0x4];
	FExpressionInput A; /* Ofs: 0x90 Size: 0x38 - StructProperty Engine.MaterialExpressionFunctionOutput.A */
	uint8_t boolFieldC8;
	uint8_t UnknownDataC9[0x3];
	FGuid ID; /* Ofs: 0xCC Size: 0x10 - StructProperty Engine.MaterialExpressionFunctionOutput.ID */
	uint8_t UnknownDataDC[0x4];


	inline bool SetOutputName(t_structHelper inst, FString value) { inst.WriteOffset(0x68, value); }
	inline bool SetDescription(t_structHelper inst, FString value) { inst.WriteOffset(0x78, value); }
	inline bool SetSortPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x88, value); }
	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x90, value); }
	inline bool bLastPreviewed()
	{
		return boolFieldC8& 0x1;
	}
	inline bool SetbLastPreviewed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetID(t_structHelper inst, FGuid value) { inst.WriteOffset(0xCC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFunctionOutput = sizeof(UMaterialExpressionFunctionOutput); // 224
    static_assert(sizeof(UMaterialExpressionFunctionOutput) == 0xE0, "Size of UMaterialExpressionFunctionOutput is not correct.");
	auto constexpr UMaterialExpressionFunctionOutput_OutputName_Offset = offsetof(UMaterialExpressionFunctionOutput, OutputName);
	static_assert(UMaterialExpressionFunctionOutput_OutputName_Offset == 0x68, "UMaterialExpressionFunctionOutput::OutputName offset is not 68");
	auto constexpr UMaterialExpressionFunctionOutput_Description_Offset = offsetof(UMaterialExpressionFunctionOutput, Description);
	static_assert(UMaterialExpressionFunctionOutput_Description_Offset == 0x78, "UMaterialExpressionFunctionOutput::Description offset is not 78");
	auto constexpr UMaterialExpressionFunctionOutput_SortPriority_Offset = offsetof(UMaterialExpressionFunctionOutput, SortPriority);
	static_assert(UMaterialExpressionFunctionOutput_SortPriority_Offset == 0x88, "UMaterialExpressionFunctionOutput::SortPriority offset is not 88");
	auto constexpr UMaterialExpressionFunctionOutput_A_Offset = offsetof(UMaterialExpressionFunctionOutput, A);
	static_assert(UMaterialExpressionFunctionOutput_A_Offset == 0x90, "UMaterialExpressionFunctionOutput::A offset is not 90");
	auto constexpr UMaterialExpressionFunctionOutput_boolFieldC8_Offset = offsetof(UMaterialExpressionFunctionOutput, boolFieldC8);
	static_assert(UMaterialExpressionFunctionOutput_boolFieldC8_Offset == 0xc8, "UMaterialExpressionFunctionOutput::boolFieldC8 offset is not c8");
	auto constexpr UMaterialExpressionFunctionOutput_ID_Offset = offsetof(UMaterialExpressionFunctionOutput, ID);
	static_assert(UMaterialExpressionFunctionOutput_ID_Offset == 0xcc, "UMaterialExpressionFunctionOutput::ID offset is not cc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
