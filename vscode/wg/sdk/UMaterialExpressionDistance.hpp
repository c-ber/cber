#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDistance // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDistance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(905); // id32("Class Engine.MaterialExpressionDistance")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDistance.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionDistance.B */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDistance = sizeof(UMaterialExpressionDistance); // 216
    static_assert(sizeof(UMaterialExpressionDistance) == 0xD8, "Size of UMaterialExpressionDistance is not correct.");
	auto constexpr UMaterialExpressionDistance_A_Offset = offsetof(UMaterialExpressionDistance, A);
	static_assert(UMaterialExpressionDistance_A_Offset == 0x68, "UMaterialExpressionDistance::A offset is not 68");
	auto constexpr UMaterialExpressionDistance_B_Offset = offsetof(UMaterialExpressionDistance, B);
	static_assert(UMaterialExpressionDistance_B_Offset == 0xa0, "UMaterialExpressionDistance::B offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
