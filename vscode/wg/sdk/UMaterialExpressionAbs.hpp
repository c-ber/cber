#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionAbs // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionAbs t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(858); // id32("Class Engine.MaterialExpressionAbs")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionAbs.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionAbs = sizeof(UMaterialExpressionAbs); // 160
    static_assert(sizeof(UMaterialExpressionAbs) == 0xA0, "Size of UMaterialExpressionAbs is not correct.");
	auto constexpr UMaterialExpressionAbs_Input_Offset = offsetof(UMaterialExpressionAbs, Input);
	static_assert(UMaterialExpressionAbs_Input_Offset == 0x68, "UMaterialExpressionAbs::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
