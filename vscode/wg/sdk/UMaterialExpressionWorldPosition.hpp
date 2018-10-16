#pragma once
#include "UMaterialExpression.hpp"
#include "EWorldPositionIncludedOffsets.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionWorldPosition // Size: 0x70
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionWorldPosition t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1016); // id32("Class Engine.MaterialExpressionWorldPosition")
		return ptr;
	}
	TEnumAsByte<enum EWorldPositionIncludedOffsets> WorldPositionShaderOffset; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.MaterialExpressionWorldPosition.WorldPositionShaderOffset */
	uint8_t UnknownData69[0x7];


	inline bool SetWorldPositionShaderOffset(t_structHelper inst, TEnumAsByte<enum EWorldPositionIncludedOffsets> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionWorldPosition = sizeof(UMaterialExpressionWorldPosition); // 112
    static_assert(sizeof(UMaterialExpressionWorldPosition) == 0x70, "Size of UMaterialExpressionWorldPosition is not correct.");
	auto constexpr UMaterialExpressionWorldPosition_WorldPositionShaderOffset_Offset = offsetof(UMaterialExpressionWorldPosition, WorldPositionShaderOffset);
	static_assert(UMaterialExpressionWorldPosition_WorldPositionShaderOffset_Offset == 0x68, "UMaterialExpressionWorldPosition::WorldPositionShaderOffset offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
