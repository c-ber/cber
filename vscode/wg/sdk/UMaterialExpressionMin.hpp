#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionMin // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionMin t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(934); // id32("Class Engine.MaterialExpressionMin")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionMin.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionMin.B */
	float ConstA; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionMin.ConstA */
	float ConstB; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.MaterialExpressionMin.ConstB */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstA(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetConstB(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionMin = sizeof(UMaterialExpressionMin); // 224
    static_assert(sizeof(UMaterialExpressionMin) == 0xE0, "Size of UMaterialExpressionMin is not correct.");
	auto constexpr UMaterialExpressionMin_A_Offset = offsetof(UMaterialExpressionMin, A);
	static_assert(UMaterialExpressionMin_A_Offset == 0x68, "UMaterialExpressionMin::A offset is not 68");
	auto constexpr UMaterialExpressionMin_B_Offset = offsetof(UMaterialExpressionMin, B);
	static_assert(UMaterialExpressionMin_B_Offset == 0xa0, "UMaterialExpressionMin::B offset is not a0");
	auto constexpr UMaterialExpressionMin_ConstA_Offset = offsetof(UMaterialExpressionMin, ConstA);
	static_assert(UMaterialExpressionMin_ConstA_Offset == 0xd8, "UMaterialExpressionMin::ConstA offset is not d8");
	auto constexpr UMaterialExpressionMin_ConstB_Offset = offsetof(UMaterialExpressionMin, ConstB);
	static_assert(UMaterialExpressionMin_ConstB_Offset == 0xdc, "UMaterialExpressionMin::ConstB offset is not dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
