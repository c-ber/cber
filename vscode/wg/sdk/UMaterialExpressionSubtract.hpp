#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSubtract // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSubtract t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(990); // id32("Class Engine.MaterialExpressionSubtract")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionSubtract.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionSubtract.B */
	float ConstA; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionSubtract.ConstA */
	float ConstB; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.MaterialExpressionSubtract.ConstB */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstA(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetConstB(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSubtract = sizeof(UMaterialExpressionSubtract); // 224
    static_assert(sizeof(UMaterialExpressionSubtract) == 0xE0, "Size of UMaterialExpressionSubtract is not correct.");
	auto constexpr UMaterialExpressionSubtract_A_Offset = offsetof(UMaterialExpressionSubtract, A);
	static_assert(UMaterialExpressionSubtract_A_Offset == 0x68, "UMaterialExpressionSubtract::A offset is not 68");
	auto constexpr UMaterialExpressionSubtract_B_Offset = offsetof(UMaterialExpressionSubtract, B);
	static_assert(UMaterialExpressionSubtract_B_Offset == 0xa0, "UMaterialExpressionSubtract::B offset is not a0");
	auto constexpr UMaterialExpressionSubtract_ConstA_Offset = offsetof(UMaterialExpressionSubtract, ConstA);
	static_assert(UMaterialExpressionSubtract_ConstA_Offset == 0xd8, "UMaterialExpressionSubtract::ConstA offset is not d8");
	auto constexpr UMaterialExpressionSubtract_ConstB_Offset = offsetof(UMaterialExpressionSubtract, ConstB);
	static_assert(UMaterialExpressionSubtract_ConstB_Offset == 0xdc, "UMaterialExpressionSubtract::ConstB offset is not dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
