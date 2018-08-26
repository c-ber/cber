#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionArctangentFast // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionArctangentFast t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(869); // id32("Class Engine.MaterialExpressionArctangentFast")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionArctangentFast.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionArctangentFast = sizeof(UMaterialExpressionArctangentFast); // 160
    static_assert(sizeof(UMaterialExpressionArctangentFast) == 0xA0, "Size of UMaterialExpressionArctangentFast is not correct.");
	auto constexpr UMaterialExpressionArctangentFast_Input_Offset = offsetof(UMaterialExpressionArctangentFast, Input);
	static_assert(UMaterialExpressionArctangentFast_Input_Offset == 0x68, "UMaterialExpressionArctangentFast::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
