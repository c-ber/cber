#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionConstant // Size: 0x70
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionConstant t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(884); // id32("Class Engine.MaterialExpressionConstant")
		return ptr;
	}
	float R; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.MaterialExpressionConstant.R */
	uint8_t UnknownData6C[0x4];


	inline bool SetR(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionConstant = sizeof(UMaterialExpressionConstant); // 112
    static_assert(sizeof(UMaterialExpressionConstant) == 0x70, "Size of UMaterialExpressionConstant is not correct.");
	auto constexpr UMaterialExpressionConstant_R_Offset = offsetof(UMaterialExpressionConstant, R);
	static_assert(UMaterialExpressionConstant_R_Offset == 0x68, "UMaterialExpressionConstant::R offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
