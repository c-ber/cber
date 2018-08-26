#pragma once
#include "UMaterialExpression.hpp"
#include "FMaterialAttributesInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionGetMaterialAttributes // Size: 0xB8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionGetMaterialAttributes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(922); // id32("Class Engine.MaterialExpressionGetMaterialAttributes")
		return ptr;
	}
	FMaterialAttributesInput MaterialAttributes; /* Ofs: 0x68 Size: 0x40 - StructProperty Engine.MaterialExpressionGetMaterialAttributes.MaterialAttributes */
	TArray<struct FGuid> AttributeGetTypes; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty Engine.MaterialExpressionGetMaterialAttributes.AttributeGetTypes */


	inline bool SetMaterialAttributes(t_structHelper inst, FMaterialAttributesInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetAttributeGetTypes(t_structHelper inst, TArray<struct FGuid> value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionGetMaterialAttributes = sizeof(UMaterialExpressionGetMaterialAttributes); // 184
    static_assert(sizeof(UMaterialExpressionGetMaterialAttributes) == 0xB8, "Size of UMaterialExpressionGetMaterialAttributes is not correct.");
	auto constexpr UMaterialExpressionGetMaterialAttributes_MaterialAttributes_Offset = offsetof(UMaterialExpressionGetMaterialAttributes, MaterialAttributes);
	static_assert(UMaterialExpressionGetMaterialAttributes_MaterialAttributes_Offset == 0x68, "UMaterialExpressionGetMaterialAttributes::MaterialAttributes offset is not 68");
	auto constexpr UMaterialExpressionGetMaterialAttributes_AttributeGetTypes_Offset = offsetof(UMaterialExpressionGetMaterialAttributes, AttributeGetTypes);
	static_assert(UMaterialExpressionGetMaterialAttributes_AttributeGetTypes_Offset == 0xa8, "UMaterialExpressionGetMaterialAttributes::AttributeGetTypes offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
