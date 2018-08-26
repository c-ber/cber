#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionOneMinus // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionOneMinus t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(942); // id32("Class Engine.MaterialExpressionOneMinus")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionOneMinus.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionOneMinus = sizeof(UMaterialExpressionOneMinus); // 160
    static_assert(sizeof(UMaterialExpressionOneMinus) == 0xA0, "Size of UMaterialExpressionOneMinus is not correct.");
	auto constexpr UMaterialExpressionOneMinus_Input_Offset = offsetof(UMaterialExpressionOneMinus, Input);
	static_assert(UMaterialExpressionOneMinus_Input_Offset == 0x68, "UMaterialExpressionOneMinus::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
