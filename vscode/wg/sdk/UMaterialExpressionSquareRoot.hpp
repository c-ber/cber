#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSquareRoot // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSquareRoot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(987); // id32("Class Engine.MaterialExpressionSquareRoot")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionSquareRoot.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSquareRoot = sizeof(UMaterialExpressionSquareRoot); // 160
    static_assert(sizeof(UMaterialExpressionSquareRoot) == 0xA0, "Size of UMaterialExpressionSquareRoot is not correct.");
	auto constexpr UMaterialExpressionSquareRoot_Input_Offset = offsetof(UMaterialExpressionSquareRoot, Input);
	static_assert(UMaterialExpressionSquareRoot_Input_Offset == 0x68, "UMaterialExpressionSquareRoot::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
