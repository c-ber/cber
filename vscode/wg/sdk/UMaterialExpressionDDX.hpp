#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDDX // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDDX t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(896); // id32("Class Engine.MaterialExpressionDDX")
		return ptr;
	}
	FExpressionInput Value; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDDX.Value */


	inline bool SetValue(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDDX = sizeof(UMaterialExpressionDDX); // 160
    static_assert(sizeof(UMaterialExpressionDDX) == 0xA0, "Size of UMaterialExpressionDDX is not correct.");
	auto constexpr UMaterialExpressionDDX_Value_Offset = offsetof(UMaterialExpressionDDX, Value);
	static_assert(UMaterialExpressionDDX_Value_Offset == 0x68, "UMaterialExpressionDDX::Value offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
