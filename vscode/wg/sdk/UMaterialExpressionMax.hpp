#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionMax // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionMax t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(933); // id32("Class Engine.MaterialExpressionMax")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionMax.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionMax.B */
	float ConstA; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionMax.ConstA */
	float ConstB; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.MaterialExpressionMax.ConstB */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstA(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetConstB(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionMax = sizeof(UMaterialExpressionMax); // 224
    static_assert(sizeof(UMaterialExpressionMax) == 0xE0, "Size of UMaterialExpressionMax is not correct.");
	auto constexpr UMaterialExpressionMax_A_Offset = offsetof(UMaterialExpressionMax, A);
	static_assert(UMaterialExpressionMax_A_Offset == 0x68, "UMaterialExpressionMax::A offset is not 68");
	auto constexpr UMaterialExpressionMax_B_Offset = offsetof(UMaterialExpressionMax, B);
	static_assert(UMaterialExpressionMax_B_Offset == 0xa0, "UMaterialExpressionMax::B offset is not a0");
	auto constexpr UMaterialExpressionMax_ConstA_Offset = offsetof(UMaterialExpressionMax, ConstA);
	static_assert(UMaterialExpressionMax_ConstA_Offset == 0xd8, "UMaterialExpressionMax::ConstA offset is not d8");
	auto constexpr UMaterialExpressionMax_ConstB_Offset = offsetof(UMaterialExpressionMax, ConstB);
	static_assert(UMaterialExpressionMax_ConstB_Offset == 0xdc, "UMaterialExpressionMax::ConstB offset is not dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
