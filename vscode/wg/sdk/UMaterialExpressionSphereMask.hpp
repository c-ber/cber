#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSphereMask // Size: 0x150
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSphereMask t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(985); // id32("Class Engine.MaterialExpressionSphereMask")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionSphereMask.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionSphereMask.B */
	FExpressionInput Radius; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionSphereMask.Radius */
	FExpressionInput Hardness; /* Ofs: 0x110 Size: 0x38 - StructProperty Engine.MaterialExpressionSphereMask.Hardness */
	float AttenuationRadius; /* Ofs: 0x148 Size: 0x4 - FloatProperty Engine.MaterialExpressionSphereMask.AttenuationRadius */
	float HardnessPercent; /* Ofs: 0x14C Size: 0x4 - FloatProperty Engine.MaterialExpressionSphereMask.HardnessPercent */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetRadius(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
	inline bool SetHardness(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x110, value); }
	inline bool SetAttenuationRadius(t_structHelper inst, float value) { inst.WriteOffset(0x148, value); }
	inline bool SetHardnessPercent(t_structHelper inst, float value) { inst.WriteOffset(0x14C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSphereMask = sizeof(UMaterialExpressionSphereMask); // 336
    static_assert(sizeof(UMaterialExpressionSphereMask) == 0x150, "Size of UMaterialExpressionSphereMask is not correct.");
	auto constexpr UMaterialExpressionSphereMask_A_Offset = offsetof(UMaterialExpressionSphereMask, A);
	static_assert(UMaterialExpressionSphereMask_A_Offset == 0x68, "UMaterialExpressionSphereMask::A offset is not 68");
	auto constexpr UMaterialExpressionSphereMask_B_Offset = offsetof(UMaterialExpressionSphereMask, B);
	static_assert(UMaterialExpressionSphereMask_B_Offset == 0xa0, "UMaterialExpressionSphereMask::B offset is not a0");
	auto constexpr UMaterialExpressionSphereMask_Radius_Offset = offsetof(UMaterialExpressionSphereMask, Radius);
	static_assert(UMaterialExpressionSphereMask_Radius_Offset == 0xd8, "UMaterialExpressionSphereMask::Radius offset is not d8");
	auto constexpr UMaterialExpressionSphereMask_Hardness_Offset = offsetof(UMaterialExpressionSphereMask, Hardness);
	static_assert(UMaterialExpressionSphereMask_Hardness_Offset == 0x110, "UMaterialExpressionSphereMask::Hardness offset is not 110");
	auto constexpr UMaterialExpressionSphereMask_AttenuationRadius_Offset = offsetof(UMaterialExpressionSphereMask, AttenuationRadius);
	static_assert(UMaterialExpressionSphereMask_AttenuationRadius_Offset == 0x148, "UMaterialExpressionSphereMask::AttenuationRadius offset is not 148");
	auto constexpr UMaterialExpressionSphereMask_HardnessPercent_Offset = offsetof(UMaterialExpressionSphereMask, HardnessPercent);
	static_assert(UMaterialExpressionSphereMask_HardnessPercent_Offset == 0x14c, "UMaterialExpressionSphereMask::HardnessPercent offset is not 14c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
