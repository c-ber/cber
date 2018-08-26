#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialFunction // Size: 0x70
	: public UObject // Size: 0x30
{
private:
	typedef UMaterialFunction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1017); // id32("Class Engine.MaterialFunction")
		return ptr;
	}
	FGuid StateId; /* Ofs: 0x30 Size: 0x10 - StructProperty Engine.MaterialFunction.StateId */
	FString Description; /* Ofs: 0x40 Size: 0x10 - StrProperty Engine.MaterialFunction.Description */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];
	TArray<ExternalPtr<struct UMaterialExpression>> FunctionExpressions; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.MaterialFunction.FunctionExpressions */
	uint8_t boolField68;
	uint8_t UnknownData69[0x7];


	inline bool SetStateId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x30, value); }
	inline bool SetDescription(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool bExposeToLibrary()
	{
		return boolField50& 0x1;
	}
	inline bool SetbExposeToLibrary(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFunctionExpressions(t_structHelper inst, TArray<ExternalPtr<struct UMaterialExpression>> value) { inst.WriteOffset(0x58, value); }
	inline bool bReentrantFlag()
	{
		return boolField68& 0x1;
	}
	inline bool SetbReentrantFlag(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialFunction = sizeof(UMaterialFunction); // 112
    static_assert(sizeof(UMaterialFunction) == 0x70, "Size of UMaterialFunction is not correct.");
	auto constexpr UMaterialFunction_StateId_Offset = offsetof(UMaterialFunction, StateId);
	static_assert(UMaterialFunction_StateId_Offset == 0x30, "UMaterialFunction::StateId offset is not 30");
	auto constexpr UMaterialFunction_Description_Offset = offsetof(UMaterialFunction, Description);
	static_assert(UMaterialFunction_Description_Offset == 0x40, "UMaterialFunction::Description offset is not 40");
	auto constexpr UMaterialFunction_boolField50_Offset = offsetof(UMaterialFunction, boolField50);
	static_assert(UMaterialFunction_boolField50_Offset == 0x50, "UMaterialFunction::boolField50 offset is not 50");
	auto constexpr UMaterialFunction_FunctionExpressions_Offset = offsetof(UMaterialFunction, FunctionExpressions);
	static_assert(UMaterialFunction_FunctionExpressions_Offset == 0x58, "UMaterialFunction::FunctionExpressions offset is not 58");
	auto constexpr UMaterialFunction_boolField68_Offset = offsetof(UMaterialFunction, boolField68);
	static_assert(UMaterialFunction_boolField68_Offset == 0x68, "UMaterialFunction::boolField68 offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
