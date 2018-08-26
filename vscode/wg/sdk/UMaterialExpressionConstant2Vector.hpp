#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionConstant2Vector // Size: 0x70
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionConstant2Vector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(885); // id32("Class Engine.MaterialExpressionConstant2Vector")
		return ptr;
	}
	float R; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.MaterialExpressionConstant2Vector.R */
	float G; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.MaterialExpressionConstant2Vector.G */


	inline bool SetR(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool SetG(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionConstant2Vector = sizeof(UMaterialExpressionConstant2Vector); // 112
    static_assert(sizeof(UMaterialExpressionConstant2Vector) == 0x70, "Size of UMaterialExpressionConstant2Vector is not correct.");
	auto constexpr UMaterialExpressionConstant2Vector_R_Offset = offsetof(UMaterialExpressionConstant2Vector, R);
	static_assert(UMaterialExpressionConstant2Vector_R_Offset == 0x68, "UMaterialExpressionConstant2Vector::R offset is not 68");
	auto constexpr UMaterialExpressionConstant2Vector_G_Offset = offsetof(UMaterialExpressionConstant2Vector, G);
	static_assert(UMaterialExpressionConstant2Vector_G_Offset == 0x6c, "UMaterialExpressionConstant2Vector::G offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
