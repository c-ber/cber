#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLogarithm2 // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLogarithm2 t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(929); // id32("Class Engine.MaterialExpressionLogarithm2")
		return ptr;
	}
	FExpressionInput X; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionLogarithm2.X */


	inline bool SetX(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLogarithm2 = sizeof(UMaterialExpressionLogarithm2); // 160
    static_assert(sizeof(UMaterialExpressionLogarithm2) == 0xA0, "Size of UMaterialExpressionLogarithm2 is not correct.");
	auto constexpr UMaterialExpressionLogarithm2_X_Offset = offsetof(UMaterialExpressionLogarithm2, X);
	static_assert(UMaterialExpressionLogarithm2_X_Offset == 0x68, "UMaterialExpressionLogarithm2::X offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
