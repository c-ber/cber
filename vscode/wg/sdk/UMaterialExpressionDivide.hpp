#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDivide // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDivide t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(909); // id32("Class Engine.MaterialExpressionDivide")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDivide.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionDivide.B */
	float ConstA; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionDivide.ConstA */
	float ConstB; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.MaterialExpressionDivide.ConstB */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstA(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetConstB(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDivide = sizeof(UMaterialExpressionDivide); // 224
    static_assert(sizeof(UMaterialExpressionDivide) == 0xE0, "Size of UMaterialExpressionDivide is not correct.");
	auto constexpr UMaterialExpressionDivide_A_Offset = offsetof(UMaterialExpressionDivide, A);
	static_assert(UMaterialExpressionDivide_A_Offset == 0x68, "UMaterialExpressionDivide::A offset is not 68");
	auto constexpr UMaterialExpressionDivide_B_Offset = offsetof(UMaterialExpressionDivide, B);
	static_assert(UMaterialExpressionDivide_B_Offset == 0xa0, "UMaterialExpressionDivide::B offset is not a0");
	auto constexpr UMaterialExpressionDivide_ConstA_Offset = offsetof(UMaterialExpressionDivide, ConstA);
	static_assert(UMaterialExpressionDivide_ConstA_Offset == 0xd8, "UMaterialExpressionDivide::ConstA offset is not d8");
	auto constexpr UMaterialExpressionDivide_ConstB_Offset = offsetof(UMaterialExpressionDivide, ConstB);
	static_assert(UMaterialExpressionDivide_ConstB_Offset == 0xdc, "UMaterialExpressionDivide::ConstB offset is not dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
