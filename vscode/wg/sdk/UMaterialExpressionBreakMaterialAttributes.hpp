#pragma once
#include "UMaterialExpression.hpp"
#include "FMaterialAttributesInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionBreakMaterialAttributes // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionBreakMaterialAttributes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(875); // id32("Class Engine.MaterialExpressionBreakMaterialAttributes")
		return ptr;
	}
	FMaterialAttributesInput MaterialAttributes; /* Ofs: 0x68 Size: 0x40 - StructProperty Engine.MaterialExpressionBreakMaterialAttributes.MaterialAttributes */


	inline bool SetMaterialAttributes(t_structHelper inst, FMaterialAttributesInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionBreakMaterialAttributes = sizeof(UMaterialExpressionBreakMaterialAttributes); // 168
    static_assert(sizeof(UMaterialExpressionBreakMaterialAttributes) == 0xA8, "Size of UMaterialExpressionBreakMaterialAttributes is not correct.");
	auto constexpr UMaterialExpressionBreakMaterialAttributes_MaterialAttributes_Offset = offsetof(UMaterialExpressionBreakMaterialAttributes, MaterialAttributes);
	static_assert(UMaterialExpressionBreakMaterialAttributes_MaterialAttributes_Offset == 0x68, "UMaterialExpressionBreakMaterialAttributes::MaterialAttributes offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
