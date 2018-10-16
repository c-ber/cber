#pragma once
#include "UMaterialExpression.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionConstant4Vector // Size: 0x78
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionConstant4Vector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(887); // id32("Class Engine.MaterialExpressionConstant4Vector")
		return ptr;
	}
	FLinearColor Constant; /* Ofs: 0x68 Size: 0x10 - StructProperty Engine.MaterialExpressionConstant4Vector.Constant */


	inline bool SetConstant(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionConstant4Vector = sizeof(UMaterialExpressionConstant4Vector); // 120
    static_assert(sizeof(UMaterialExpressionConstant4Vector) == 0x78, "Size of UMaterialExpressionConstant4Vector is not correct.");
	auto constexpr UMaterialExpressionConstant4Vector_Constant_Offset = offsetof(UMaterialExpressionConstant4Vector, Constant);
	static_assert(UMaterialExpressionConstant4Vector_Constant_Offset == 0x68, "UMaterialExpressionConstant4Vector::Constant offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
