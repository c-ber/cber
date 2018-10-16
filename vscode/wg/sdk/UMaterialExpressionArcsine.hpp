#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionArcsine // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionArcsine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(864); // id32("Class Engine.MaterialExpressionArcsine")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionArcsine.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionArcsine = sizeof(UMaterialExpressionArcsine); // 160
    static_assert(sizeof(UMaterialExpressionArcsine) == 0xA0, "Size of UMaterialExpressionArcsine is not correct.");
	auto constexpr UMaterialExpressionArcsine_Input_Offset = offsetof(UMaterialExpressionArcsine, Input);
	static_assert(UMaterialExpressionArcsine_Input_Offset == 0x68, "UMaterialExpressionArcsine::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
