#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionAdd // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionAdd t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(860); // id32("Class Engine.MaterialExpressionAdd")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionAdd.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionAdd.B */
	float ConstA; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionAdd.ConstA */
	float ConstB; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.MaterialExpressionAdd.ConstB */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstA(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetConstB(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionAdd = sizeof(UMaterialExpressionAdd); // 224
    static_assert(sizeof(UMaterialExpressionAdd) == 0xE0, "Size of UMaterialExpressionAdd is not correct.");
	auto constexpr UMaterialExpressionAdd_A_Offset = offsetof(UMaterialExpressionAdd, A);
	static_assert(UMaterialExpressionAdd_A_Offset == 0x68, "UMaterialExpressionAdd::A offset is not 68");
	auto constexpr UMaterialExpressionAdd_B_Offset = offsetof(UMaterialExpressionAdd, B);
	static_assert(UMaterialExpressionAdd_B_Offset == 0xa0, "UMaterialExpressionAdd::B offset is not a0");
	auto constexpr UMaterialExpressionAdd_ConstA_Offset = offsetof(UMaterialExpressionAdd, ConstA);
	static_assert(UMaterialExpressionAdd_ConstA_Offset == 0xd8, "UMaterialExpressionAdd::ConstA offset is not d8");
	auto constexpr UMaterialExpressionAdd_ConstB_Offset = offsetof(UMaterialExpressionAdd, ConstB);
	static_assert(UMaterialExpressionAdd_ConstB_Offset == 0xdc, "UMaterialExpressionAdd::ConstB offset is not dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
