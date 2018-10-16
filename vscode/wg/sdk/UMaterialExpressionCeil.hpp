#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionCeil // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionCeil t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(879); // id32("Class Engine.MaterialExpressionCeil")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionCeil.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionCeil = sizeof(UMaterialExpressionCeil); // 160
    static_assert(sizeof(UMaterialExpressionCeil) == 0xA0, "Size of UMaterialExpressionCeil is not correct.");
	auto constexpr UMaterialExpressionCeil_Input_Offset = offsetof(UMaterialExpressionCeil, Input);
	static_assert(UMaterialExpressionCeil_Input_Offset == 0x68, "UMaterialExpressionCeil::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
