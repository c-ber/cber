#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionArcsineFast // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionArcsineFast t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(865); // id32("Class Engine.MaterialExpressionArcsineFast")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionArcsineFast.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionArcsineFast = sizeof(UMaterialExpressionArcsineFast); // 160
    static_assert(sizeof(UMaterialExpressionArcsineFast) == 0xA0, "Size of UMaterialExpressionArcsineFast is not correct.");
	auto constexpr UMaterialExpressionArcsineFast_Input_Offset = offsetof(UMaterialExpressionArcsineFast, Input);
	static_assert(UMaterialExpressionArcsineFast_Input_Offset == 0x68, "UMaterialExpressionArcsineFast::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
