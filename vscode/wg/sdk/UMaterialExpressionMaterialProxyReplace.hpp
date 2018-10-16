#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionMaterialProxyReplace // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionMaterialProxyReplace t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(932); // id32("Class Engine.MaterialExpressionMaterialProxyReplace")
		return ptr;
	}
	FExpressionInput Realtime; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionMaterialProxyReplace.Realtime */
	FExpressionInput MaterialProxy; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionMaterialProxyReplace.MaterialProxy */


	inline bool SetRealtime(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetMaterialProxy(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionMaterialProxyReplace = sizeof(UMaterialExpressionMaterialProxyReplace); // 216
    static_assert(sizeof(UMaterialExpressionMaterialProxyReplace) == 0xD8, "Size of UMaterialExpressionMaterialProxyReplace is not correct.");
	auto constexpr UMaterialExpressionMaterialProxyReplace_Realtime_Offset = offsetof(UMaterialExpressionMaterialProxyReplace, Realtime);
	static_assert(UMaterialExpressionMaterialProxyReplace_Realtime_Offset == 0x68, "UMaterialExpressionMaterialProxyReplace::Realtime offset is not 68");
	auto constexpr UMaterialExpressionMaterialProxyReplace_MaterialProxy_Offset = offsetof(UMaterialExpressionMaterialProxyReplace, MaterialProxy);
	static_assert(UMaterialExpressionMaterialProxyReplace_MaterialProxy_Offset == 0xa0, "UMaterialExpressionMaterialProxyReplace::MaterialProxy offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
