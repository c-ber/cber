#pragma once
#include "UMaterialExpression.hpp"
#include "ECustomMaterialOutputType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionCustom // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionCustom t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(891); // id32("Class Engine.MaterialExpressionCustom")
		return ptr;
	}
	FString Code; /* Ofs: 0x68 Size: 0x10 - StrProperty Engine.MaterialExpressionCustom.Code */
	TEnumAsByte<enum ECustomMaterialOutputType> OutputType; /* Ofs: 0x78 Size: 0x1 - ByteProperty Engine.MaterialExpressionCustom.OutputType */
	uint8_t UnknownData79[0x7];
	FString Description; /* Ofs: 0x80 Size: 0x10 - StrProperty Engine.MaterialExpressionCustom.Description */
	TArray<struct FCustomInput> Inputs; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Engine.MaterialExpressionCustom.Inputs */


	inline bool SetCode(t_structHelper inst, FString value) { inst.WriteOffset(0x68, value); }
	inline bool SetOutputType(t_structHelper inst, TEnumAsByte<enum ECustomMaterialOutputType> value) { inst.WriteOffset(0x78, value); }
	inline bool SetDescription(t_structHelper inst, FString value) { inst.WriteOffset(0x80, value); }
	inline bool SetInputs(t_structHelper inst, TArray<struct FCustomInput> value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionCustom = sizeof(UMaterialExpressionCustom); // 160
    static_assert(sizeof(UMaterialExpressionCustom) == 0xA0, "Size of UMaterialExpressionCustom is not correct.");
	auto constexpr UMaterialExpressionCustom_Code_Offset = offsetof(UMaterialExpressionCustom, Code);
	static_assert(UMaterialExpressionCustom_Code_Offset == 0x68, "UMaterialExpressionCustom::Code offset is not 68");
	auto constexpr UMaterialExpressionCustom_OutputType_Offset = offsetof(UMaterialExpressionCustom, OutputType);
	static_assert(UMaterialExpressionCustom_OutputType_Offset == 0x78, "UMaterialExpressionCustom::OutputType offset is not 78");
	auto constexpr UMaterialExpressionCustom_Description_Offset = offsetof(UMaterialExpressionCustom, Description);
	static_assert(UMaterialExpressionCustom_Description_Offset == 0x80, "UMaterialExpressionCustom::Description offset is not 80");
	auto constexpr UMaterialExpressionCustom_Inputs_Offset = offsetof(UMaterialExpressionCustom, Inputs);
	static_assert(UMaterialExpressionCustom_Inputs_Offset == 0x90, "UMaterialExpressionCustom::Inputs offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
