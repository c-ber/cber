#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "EMaterialPositionTransformSource.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTransformPosition // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTransformPosition t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1008); // id32("Class Engine.MaterialExpressionTransformPosition")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionTransformPosition.Input */
	TEnumAsByte<enum EMaterialPositionTransformSource> TransformSourceType; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Engine.MaterialExpressionTransformPosition.TransformSourceType */
	TEnumAsByte<enum EMaterialPositionTransformSource> TransformType; /* Ofs: 0xA1 Size: 0x1 - ByteProperty Engine.MaterialExpressionTransformPosition.TransformType */
	uint8_t UnknownDataA2[0x6];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetTransformSourceType(t_structHelper inst, TEnumAsByte<enum EMaterialPositionTransformSource> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetTransformType(t_structHelper inst, TEnumAsByte<enum EMaterialPositionTransformSource> value) { inst.WriteOffset(0xA1, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTransformPosition = sizeof(UMaterialExpressionTransformPosition); // 168
    static_assert(sizeof(UMaterialExpressionTransformPosition) == 0xA8, "Size of UMaterialExpressionTransformPosition is not correct.");
	auto constexpr UMaterialExpressionTransformPosition_Input_Offset = offsetof(UMaterialExpressionTransformPosition, Input);
	static_assert(UMaterialExpressionTransformPosition_Input_Offset == 0x68, "UMaterialExpressionTransformPosition::Input offset is not 68");
	auto constexpr UMaterialExpressionTransformPosition_TransformSourceType_Offset = offsetof(UMaterialExpressionTransformPosition, TransformSourceType);
	static_assert(UMaterialExpressionTransformPosition_TransformSourceType_Offset == 0xa0, "UMaterialExpressionTransformPosition::TransformSourceType offset is not a0");
	auto constexpr UMaterialExpressionTransformPosition_TransformType_Offset = offsetof(UMaterialExpressionTransformPosition, TransformType);
	static_assert(UMaterialExpressionTransformPosition_TransformType_Offset == 0xa1, "UMaterialExpressionTransformPosition::TransformType offset is not a1");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
