#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFrac // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionFrac t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(918); // id32("Class Engine.MaterialExpressionFrac")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionFrac.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFrac = sizeof(UMaterialExpressionFrac); // 160
    static_assert(sizeof(UMaterialExpressionFrac) == 0xA0, "Size of UMaterialExpressionFrac is not correct.");
	auto constexpr UMaterialExpressionFrac_Input_Offset = offsetof(UMaterialExpressionFrac, Input);
	static_assert(UMaterialExpressionFrac_Input_Offset == 0x68, "UMaterialExpressionFrac::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
