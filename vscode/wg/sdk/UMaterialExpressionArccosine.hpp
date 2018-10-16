#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionArccosine // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionArccosine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(862); // id32("Class Engine.MaterialExpressionArccosine")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionArccosine.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionArccosine = sizeof(UMaterialExpressionArccosine); // 160
    static_assert(sizeof(UMaterialExpressionArccosine) == 0xA0, "Size of UMaterialExpressionArccosine is not correct.");
	auto constexpr UMaterialExpressionArccosine_Input_Offset = offsetof(UMaterialExpressionArccosine, Input);
	static_assert(UMaterialExpressionArccosine_Input_Offset == 0x68, "UMaterialExpressionArccosine::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
