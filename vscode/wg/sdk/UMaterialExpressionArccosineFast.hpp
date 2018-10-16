#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionArccosineFast // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionArccosineFast t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(863); // id32("Class Engine.MaterialExpressionArccosineFast")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionArccosineFast.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionArccosineFast = sizeof(UMaterialExpressionArccosineFast); // 160
    static_assert(sizeof(UMaterialExpressionArccosineFast) == 0xA0, "Size of UMaterialExpressionArccosineFast is not correct.");
	auto constexpr UMaterialExpressionArccosineFast_Input_Offset = offsetof(UMaterialExpressionArccosineFast, Input);
	static_assert(UMaterialExpressionArccosineFast_Input_Offset == 0x68, "UMaterialExpressionArccosineFast::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
