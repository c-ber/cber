#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionArctangent2 // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionArctangent2 t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(867); // id32("Class Engine.MaterialExpressionArctangent2")
		return ptr;
	}
	FExpressionInput Y; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionArctangent2.Y */
	FExpressionInput X; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionArctangent2.X */


	inline bool SetY(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetX(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionArctangent2 = sizeof(UMaterialExpressionArctangent2); // 216
    static_assert(sizeof(UMaterialExpressionArctangent2) == 0xD8, "Size of UMaterialExpressionArctangent2 is not correct.");
	auto constexpr UMaterialExpressionArctangent2_Y_Offset = offsetof(UMaterialExpressionArctangent2, Y);
	static_assert(UMaterialExpressionArctangent2_Y_Offset == 0x68, "UMaterialExpressionArctangent2::Y offset is not 68");
	auto constexpr UMaterialExpressionArctangent2_X_Offset = offsetof(UMaterialExpressionArctangent2, X);
	static_assert(UMaterialExpressionArctangent2_X_Offset == 0xa0, "UMaterialExpressionArctangent2::X offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
