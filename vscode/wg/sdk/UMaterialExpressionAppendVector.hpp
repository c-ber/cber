#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionAppendVector // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionAppendVector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(861); // id32("Class Engine.MaterialExpressionAppendVector")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionAppendVector.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionAppendVector.B */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionAppendVector = sizeof(UMaterialExpressionAppendVector); // 216
    static_assert(sizeof(UMaterialExpressionAppendVector) == 0xD8, "Size of UMaterialExpressionAppendVector is not correct.");
	auto constexpr UMaterialExpressionAppendVector_A_Offset = offsetof(UMaterialExpressionAppendVector, A);
	static_assert(UMaterialExpressionAppendVector_A_Offset == 0x68, "UMaterialExpressionAppendVector::A offset is not 68");
	auto constexpr UMaterialExpressionAppendVector_B_Offset = offsetof(UMaterialExpressionAppendVector, B);
	static_assert(UMaterialExpressionAppendVector_B_Offset == 0xa0, "UMaterialExpressionAppendVector::B offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
