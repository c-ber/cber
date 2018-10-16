#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "EMaterialVectorCoordTransformSource.hpp"
#include "EMaterialVectorCoordTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTransform // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTransform t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1007); // id32("Class Engine.MaterialExpressionTransform")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionTransform.Input */
	TEnumAsByte<enum EMaterialVectorCoordTransformSource> TransformSourceType; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Engine.MaterialExpressionTransform.TransformSourceType */
	TEnumAsByte<enum EMaterialVectorCoordTransform> TransformType; /* Ofs: 0xA1 Size: 0x1 - ByteProperty Engine.MaterialExpressionTransform.TransformType */
	uint8_t UnknownDataA2[0x6];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetTransformSourceType(t_structHelper inst, TEnumAsByte<enum EMaterialVectorCoordTransformSource> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetTransformType(t_structHelper inst, TEnumAsByte<enum EMaterialVectorCoordTransform> value) { inst.WriteOffset(0xA1, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTransform = sizeof(UMaterialExpressionTransform); // 168
    static_assert(sizeof(UMaterialExpressionTransform) == 0xA8, "Size of UMaterialExpressionTransform is not correct.");
	auto constexpr UMaterialExpressionTransform_Input_Offset = offsetof(UMaterialExpressionTransform, Input);
	static_assert(UMaterialExpressionTransform_Input_Offset == 0x68, "UMaterialExpressionTransform::Input offset is not 68");
	auto constexpr UMaterialExpressionTransform_TransformSourceType_Offset = offsetof(UMaterialExpressionTransform, TransformSourceType);
	static_assert(UMaterialExpressionTransform_TransformSourceType_Offset == 0xa0, "UMaterialExpressionTransform::TransformSourceType offset is not a0");
	auto constexpr UMaterialExpressionTransform_TransformType_Offset = offsetof(UMaterialExpressionTransform, TransformType);
	static_assert(UMaterialExpressionTransform_TransformType_Offset == 0xa1, "UMaterialExpressionTransform::TransformType offset is not a1");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
