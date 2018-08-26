#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionAtmosphericFogColor // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionAtmosphericFogColor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(870); // id32("Class Engine.MaterialExpressionAtmosphericFogColor")
		return ptr;
	}
	FExpressionInput WorldPosition; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionAtmosphericFogColor.WorldPosition */


	inline bool SetWorldPosition(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionAtmosphericFogColor = sizeof(UMaterialExpressionAtmosphericFogColor); // 160
    static_assert(sizeof(UMaterialExpressionAtmosphericFogColor) == 0xA0, "Size of UMaterialExpressionAtmosphericFogColor is not correct.");
	auto constexpr UMaterialExpressionAtmosphericFogColor_WorldPosition_Offset = offsetof(UMaterialExpressionAtmosphericFogColor, WorldPosition);
	static_assert(UMaterialExpressionAtmosphericFogColor_WorldPosition_Offset == 0x68, "UMaterialExpressionAtmosphericFogColor::WorldPosition offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
