#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionMultiply // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionMultiply t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(935); // id32("Class Engine.MaterialExpressionMultiply")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionMultiply.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionMultiply.B */
	float ConstA; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionMultiply.ConstA */
	float ConstB; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.MaterialExpressionMultiply.ConstB */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstA(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetConstB(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionMultiply = sizeof(UMaterialExpressionMultiply); // 224
    static_assert(sizeof(UMaterialExpressionMultiply) == 0xE0, "Size of UMaterialExpressionMultiply is not correct.");
	auto constexpr UMaterialExpressionMultiply_A_Offset = offsetof(UMaterialExpressionMultiply, A);
	static_assert(UMaterialExpressionMultiply_A_Offset == 0x68, "UMaterialExpressionMultiply::A offset is not 68");
	auto constexpr UMaterialExpressionMultiply_B_Offset = offsetof(UMaterialExpressionMultiply, B);
	static_assert(UMaterialExpressionMultiply_B_Offset == 0xa0, "UMaterialExpressionMultiply::B offset is not a0");
	auto constexpr UMaterialExpressionMultiply_ConstA_Offset = offsetof(UMaterialExpressionMultiply, ConstA);
	static_assert(UMaterialExpressionMultiply_ConstA_Offset == 0xd8, "UMaterialExpressionMultiply::ConstA offset is not d8");
	auto constexpr UMaterialExpressionMultiply_ConstB_Offset = offsetof(UMaterialExpressionMultiply, ConstB);
	static_assert(UMaterialExpressionMultiply_ConstB_Offset == 0xdc, "UMaterialExpressionMultiply::ConstB offset is not dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
