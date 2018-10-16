#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFmod // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionFmod t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(915); // id32("Class Engine.MaterialExpressionFmod")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionFmod.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionFmod.B */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFmod = sizeof(UMaterialExpressionFmod); // 216
    static_assert(sizeof(UMaterialExpressionFmod) == 0xD8, "Size of UMaterialExpressionFmod is not correct.");
	auto constexpr UMaterialExpressionFmod_A_Offset = offsetof(UMaterialExpressionFmod, A);
	static_assert(UMaterialExpressionFmod_A_Offset == 0x68, "UMaterialExpressionFmod::A offset is not 68");
	auto constexpr UMaterialExpressionFmod_B_Offset = offsetof(UMaterialExpressionFmod, B);
	static_assert(UMaterialExpressionFmod_B_Offset == 0xa0, "UMaterialExpressionFmod::B offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
