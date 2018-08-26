#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSetMaterialAttributes // Size: 0x88
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSetMaterialAttributes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(981); // id32("Class Engine.MaterialExpressionSetMaterialAttributes")
		return ptr;
	}
	TArray<struct FExpressionInput> Inputs; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Engine.MaterialExpressionSetMaterialAttributes.Inputs */
	TArray<struct FGuid> AttributeSetTypes; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.MaterialExpressionSetMaterialAttributes.AttributeSetTypes */


	inline bool SetInputs(t_structHelper inst, TArray<struct FExpressionInput> value) { inst.WriteOffset(0x68, value); }
	inline bool SetAttributeSetTypes(t_structHelper inst, TArray<struct FGuid> value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSetMaterialAttributes = sizeof(UMaterialExpressionSetMaterialAttributes); // 136
    static_assert(sizeof(UMaterialExpressionSetMaterialAttributes) == 0x88, "Size of UMaterialExpressionSetMaterialAttributes is not correct.");
	auto constexpr UMaterialExpressionSetMaterialAttributes_Inputs_Offset = offsetof(UMaterialExpressionSetMaterialAttributes, Inputs);
	static_assert(UMaterialExpressionSetMaterialAttributes_Inputs_Offset == 0x68, "UMaterialExpressionSetMaterialAttributes::Inputs offset is not 68");
	auto constexpr UMaterialExpressionSetMaterialAttributes_AttributeSetTypes_Offset = offsetof(UMaterialExpressionSetMaterialAttributes, AttributeSetTypes);
	static_assert(UMaterialExpressionSetMaterialAttributes_AttributeSetTypes_Offset == 0x78, "UMaterialExpressionSetMaterialAttributes::AttributeSetTypes offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
