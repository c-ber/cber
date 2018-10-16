#pragma once
#include "UMaterialExpressionParameter.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionVectorParameter // Size: 0x98
	: public UMaterialExpressionParameter // Size: 0x88
{
private:
	typedef UMaterialExpressionVectorParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(949); // id32("Class Engine.MaterialExpressionVectorParameter")
		return ptr;
	}
	FLinearColor DefaultValue; /* Ofs: 0x88 Size: 0x10 - StructProperty Engine.MaterialExpressionVectorParameter.DefaultValue */


	inline bool SetDefaultValue(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionVectorParameter = sizeof(UMaterialExpressionVectorParameter); // 152
    static_assert(sizeof(UMaterialExpressionVectorParameter) == 0x98, "Size of UMaterialExpressionVectorParameter is not correct.");
	auto constexpr UMaterialExpressionVectorParameter_DefaultValue_Offset = offsetof(UMaterialExpressionVectorParameter, DefaultValue);
	static_assert(UMaterialExpressionVectorParameter_DefaultValue_Offset == 0x88, "UMaterialExpressionVectorParameter::DefaultValue offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
