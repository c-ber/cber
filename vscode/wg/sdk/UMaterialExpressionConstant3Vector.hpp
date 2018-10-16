#pragma once
#include "UMaterialExpression.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionConstant3Vector // Size: 0x78
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionConstant3Vector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(886); // id32("Class Engine.MaterialExpressionConstant3Vector")
		return ptr;
	}
	FLinearColor Constant; /* Ofs: 0x68 Size: 0x10 - StructProperty Engine.MaterialExpressionConstant3Vector.Constant */


	inline bool SetConstant(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionConstant3Vector = sizeof(UMaterialExpressionConstant3Vector); // 120
    static_assert(sizeof(UMaterialExpressionConstant3Vector) == 0x78, "Size of UMaterialExpressionConstant3Vector is not correct.");
	auto constexpr UMaterialExpressionConstant3Vector_Constant_Offset = offsetof(UMaterialExpressionConstant3Vector, Constant);
	static_assert(UMaterialExpressionConstant3Vector_Constant_Offset == 0x68, "UMaterialExpressionConstant3Vector::Constant offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
