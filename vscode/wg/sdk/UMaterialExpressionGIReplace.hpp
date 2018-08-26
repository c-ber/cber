#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionGIReplace // Size: 0x110
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionGIReplace t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(923); // id32("Class Engine.MaterialExpressionGIReplace")
		return ptr;
	}
	FExpressionInput Default; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionGIReplace.Default */
	FExpressionInput StaticIndirect; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionGIReplace.StaticIndirect */
	FExpressionInput DynamicIndirect; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionGIReplace.DynamicIndirect */


	inline bool SetDefault(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetStaticIndirect(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetDynamicIndirect(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionGIReplace = sizeof(UMaterialExpressionGIReplace); // 272
    static_assert(sizeof(UMaterialExpressionGIReplace) == 0x110, "Size of UMaterialExpressionGIReplace is not correct.");
	auto constexpr UMaterialExpressionGIReplace_Default_Offset = offsetof(UMaterialExpressionGIReplace, Default);
	static_assert(UMaterialExpressionGIReplace_Default_Offset == 0x68, "UMaterialExpressionGIReplace::Default offset is not 68");
	auto constexpr UMaterialExpressionGIReplace_StaticIndirect_Offset = offsetof(UMaterialExpressionGIReplace, StaticIndirect);
	static_assert(UMaterialExpressionGIReplace_StaticIndirect_Offset == 0xa0, "UMaterialExpressionGIReplace::StaticIndirect offset is not a0");
	auto constexpr UMaterialExpressionGIReplace_DynamicIndirect_Offset = offsetof(UMaterialExpressionGIReplace, DynamicIndirect);
	static_assert(UMaterialExpressionGIReplace_DynamicIndirect_Offset == 0xd8, "UMaterialExpressionGIReplace::DynamicIndirect offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
