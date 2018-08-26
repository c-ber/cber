#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionArctangent2Fast // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionArctangent2Fast t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(868); // id32("Class Engine.MaterialExpressionArctangent2Fast")
		return ptr;
	}
	FExpressionInput Y; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionArctangent2Fast.Y */
	FExpressionInput X; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionArctangent2Fast.X */


	inline bool SetY(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetX(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionArctangent2Fast = sizeof(UMaterialExpressionArctangent2Fast); // 216
    static_assert(sizeof(UMaterialExpressionArctangent2Fast) == 0xD8, "Size of UMaterialExpressionArctangent2Fast is not correct.");
	auto constexpr UMaterialExpressionArctangent2Fast_Y_Offset = offsetof(UMaterialExpressionArctangent2Fast, Y);
	static_assert(UMaterialExpressionArctangent2Fast_Y_Offset == 0x68, "UMaterialExpressionArctangent2Fast::Y offset is not 68");
	auto constexpr UMaterialExpressionArctangent2Fast_X_Offset = offsetof(UMaterialExpressionArctangent2Fast, X);
	static_assert(UMaterialExpressionArctangent2Fast_X_Offset == 0xa0, "UMaterialExpressionArctangent2Fast::X offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
