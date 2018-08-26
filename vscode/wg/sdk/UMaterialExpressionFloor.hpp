#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFloor // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionFloor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(914); // id32("Class Engine.MaterialExpressionFloor")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionFloor.Input */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFloor = sizeof(UMaterialExpressionFloor); // 160
    static_assert(sizeof(UMaterialExpressionFloor) == 0xA0, "Size of UMaterialExpressionFloor is not correct.");
	auto constexpr UMaterialExpressionFloor_Input_Offset = offsetof(UMaterialExpressionFloor, Input);
	static_assert(UMaterialExpressionFloor_Input_Offset == 0x68, "UMaterialExpressionFloor::Input offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
