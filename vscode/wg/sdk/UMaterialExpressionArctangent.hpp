#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionArctangent // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionArctangent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(866); // id32("Class Engine.MaterialExpressionArctangent")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionArctangent.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionArctangent = sizeof(UMaterialExpressionArctangent); // 160
    static_assert(sizeof(UMaterialExpressionArctangent) == 0xA0, "Size of UMaterialExpressionArctangent is not correct.");
	auto constexpr UMaterialExpressionArctangent_Input_Offset = offsetof(UMaterialExpressionArctangent, Input);
	static_assert(UMaterialExpressionArctangent_Input_Offset == 0x68, "UMaterialExpressionArctangent::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
