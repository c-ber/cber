#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSaturate // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSaturate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(975); // id32("Class Engine.MaterialExpressionSaturate")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionSaturate.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSaturate = sizeof(UMaterialExpressionSaturate); // 160
    static_assert(sizeof(UMaterialExpressionSaturate) == 0xA0, "Size of UMaterialExpressionSaturate is not correct.");
	auto constexpr UMaterialExpressionSaturate_Input_Offset = offsetof(UMaterialExpressionSaturate, Input);
	static_assert(UMaterialExpressionSaturate_Input_Offset == 0x68, "UMaterialExpressionSaturate::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
