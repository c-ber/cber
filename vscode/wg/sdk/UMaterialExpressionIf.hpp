#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionIf // Size: 0x190
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionIf t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(924); // id32("Class Engine.MaterialExpressionIf")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionIf.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionIf.B */
	FExpressionInput AGreaterThanB; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionIf.AGreaterThanB */
	FExpressionInput AEqualsB; /* Ofs: 0x110 Size: 0x38 - StructProperty Engine.MaterialExpressionIf.AEqualsB */
	FExpressionInput ALessThanB; /* Ofs: 0x148 Size: 0x38 - StructProperty Engine.MaterialExpressionIf.ALessThanB */
	float EqualsThreshold; /* Ofs: 0x180 Size: 0x4 - FloatProperty Engine.MaterialExpressionIf.EqualsThreshold */
	float ConstB; /* Ofs: 0x184 Size: 0x4 - FloatProperty Engine.MaterialExpressionIf.ConstB */
	float ConstAEqualsB; /* Ofs: 0x188 Size: 0x4 - FloatProperty Engine.MaterialExpressionIf.ConstAEqualsB */
	uint8_t UnknownData18C[0x4];


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetAGreaterThanB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
	inline bool SetAEqualsB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x110, value); }
	inline bool SetALessThanB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x148, value); }
	inline bool SetEqualsThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x180, value); }
	inline bool SetConstB(t_structHelper inst, float value) { inst.WriteOffset(0x184, value); }
	inline bool SetConstAEqualsB(t_structHelper inst, float value) { inst.WriteOffset(0x188, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionIf = sizeof(UMaterialExpressionIf); // 400
    static_assert(sizeof(UMaterialExpressionIf) == 0x190, "Size of UMaterialExpressionIf is not correct.");
	auto constexpr UMaterialExpressionIf_A_Offset = offsetof(UMaterialExpressionIf, A);
	static_assert(UMaterialExpressionIf_A_Offset == 0x68, "UMaterialExpressionIf::A offset is not 68");
	auto constexpr UMaterialExpressionIf_B_Offset = offsetof(UMaterialExpressionIf, B);
	static_assert(UMaterialExpressionIf_B_Offset == 0xa0, "UMaterialExpressionIf::B offset is not a0");
	auto constexpr UMaterialExpressionIf_AGreaterThanB_Offset = offsetof(UMaterialExpressionIf, AGreaterThanB);
	static_assert(UMaterialExpressionIf_AGreaterThanB_Offset == 0xd8, "UMaterialExpressionIf::AGreaterThanB offset is not d8");
	auto constexpr UMaterialExpressionIf_AEqualsB_Offset = offsetof(UMaterialExpressionIf, AEqualsB);
	static_assert(UMaterialExpressionIf_AEqualsB_Offset == 0x110, "UMaterialExpressionIf::AEqualsB offset is not 110");
	auto constexpr UMaterialExpressionIf_ALessThanB_Offset = offsetof(UMaterialExpressionIf, ALessThanB);
	static_assert(UMaterialExpressionIf_ALessThanB_Offset == 0x148, "UMaterialExpressionIf::ALessThanB offset is not 148");
	auto constexpr UMaterialExpressionIf_EqualsThreshold_Offset = offsetof(UMaterialExpressionIf, EqualsThreshold);
	static_assert(UMaterialExpressionIf_EqualsThreshold_Offset == 0x180, "UMaterialExpressionIf::EqualsThreshold offset is not 180");
	auto constexpr UMaterialExpressionIf_ConstB_Offset = offsetof(UMaterialExpressionIf, ConstB);
	static_assert(UMaterialExpressionIf_ConstB_Offset == 0x184, "UMaterialExpressionIf::ConstB offset is not 184");
	auto constexpr UMaterialExpressionIf_ConstAEqualsB_Offset = offsetof(UMaterialExpressionIf, ConstAEqualsB);
	static_assert(UMaterialExpressionIf_ConstAEqualsB_Offset == 0x188, "UMaterialExpressionIf::ConstAEqualsB offset is not 188");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
