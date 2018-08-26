#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLightmassReplace // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLightmassReplace t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(926); // id32("Class Engine.MaterialExpressionLightmassReplace")
		return ptr;
	}
	FExpressionInput Realtime; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionLightmassReplace.Realtime */
	FExpressionInput Lightmass; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionLightmassReplace.Lightmass */


	inline bool SetRealtime(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetLightmass(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLightmassReplace = sizeof(UMaterialExpressionLightmassReplace); // 216
    static_assert(sizeof(UMaterialExpressionLightmassReplace) == 0xD8, "Size of UMaterialExpressionLightmassReplace is not correct.");
	auto constexpr UMaterialExpressionLightmassReplace_Realtime_Offset = offsetof(UMaterialExpressionLightmassReplace, Realtime);
	static_assert(UMaterialExpressionLightmassReplace_Realtime_Offset == 0x68, "UMaterialExpressionLightmassReplace::Realtime offset is not 68");
	auto constexpr UMaterialExpressionLightmassReplace_Lightmass_Offset = offsetof(UMaterialExpressionLightmassReplace, Lightmass);
	static_assert(UMaterialExpressionLightmassReplace_Lightmass_Offset == 0xa0, "UMaterialExpressionLightmassReplace::Lightmass offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
