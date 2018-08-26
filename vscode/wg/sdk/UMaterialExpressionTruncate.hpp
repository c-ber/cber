#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTruncate // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTruncate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1009); // id32("Class Engine.MaterialExpressionTruncate")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionTruncate.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTruncate = sizeof(UMaterialExpressionTruncate); // 160
    static_assert(sizeof(UMaterialExpressionTruncate) == 0xA0, "Size of UMaterialExpressionTruncate is not correct.");
	auto constexpr UMaterialExpressionTruncate_Input_Offset = offsetof(UMaterialExpressionTruncate, Input);
	static_assert(UMaterialExpressionTruncate_Input_Offset == 0x68, "UMaterialExpressionTruncate::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
