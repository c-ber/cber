#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDDY // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDDY t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(897); // id32("Class Engine.MaterialExpressionDDY")
		return ptr;
	}
	FExpressionInput Value; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDDY.Value */


	inline bool SetValue(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDDY = sizeof(UMaterialExpressionDDY); // 160
    static_assert(sizeof(UMaterialExpressionDDY) == 0xA0, "Size of UMaterialExpressionDDY is not correct.");
	auto constexpr UMaterialExpressionDDY_Value_Offset = offsetof(UMaterialExpressionDDY, Value);
	static_assert(UMaterialExpressionDDY_Value_Offset == 0x68, "UMaterialExpressionDDY::Value offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
