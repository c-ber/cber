#pragma once
#include "UMaterialExpression.hpp"
#include "EMaterialExpressionScreenPositionMapping.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionScreenPosition // Size: 0x70
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionScreenPosition t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(980); // id32("Class Engine.MaterialExpressionScreenPosition")
		return ptr;
	}
	TEnumAsByte<enum EMaterialExpressionScreenPositionMapping> Mapping; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.MaterialExpressionScreenPosition.Mapping */
	uint8_t UnknownData69[0x7];


	inline bool SetMapping(t_structHelper inst, TEnumAsByte<enum EMaterialExpressionScreenPositionMapping> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionScreenPosition = sizeof(UMaterialExpressionScreenPosition); // 112
    static_assert(sizeof(UMaterialExpressionScreenPosition) == 0x70, "Size of UMaterialExpressionScreenPosition is not correct.");
	auto constexpr UMaterialExpressionScreenPosition_Mapping_Offset = offsetof(UMaterialExpressionScreenPosition, Mapping);
	static_assert(UMaterialExpressionScreenPosition_Mapping_Offset == 0x68, "UMaterialExpressionScreenPosition::Mapping offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
