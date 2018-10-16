#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDeriveNormalZ // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDeriveNormalZ t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(903); // id32("Class Engine.MaterialExpressionDeriveNormalZ")
		return ptr;
	}
	FExpressionInput InXY; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDeriveNormalZ.InXY */


	inline bool SetInXY(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDeriveNormalZ = sizeof(UMaterialExpressionDeriveNormalZ); // 160
    static_assert(sizeof(UMaterialExpressionDeriveNormalZ) == 0xA0, "Size of UMaterialExpressionDeriveNormalZ is not correct.");
	auto constexpr UMaterialExpressionDeriveNormalZ_InXY_Offset = offsetof(UMaterialExpressionDeriveNormalZ, InXY);
	static_assert(UMaterialExpressionDeriveNormalZ_InXY_Offset == 0x68, "UMaterialExpressionDeriveNormalZ::InXY offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
