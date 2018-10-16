#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionRotateAboutAxis // Size: 0x150
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionRotateAboutAxis t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(972); // id32("Class Engine.MaterialExpressionRotateAboutAxis")
		return ptr;
	}
	FExpressionInput NormalizedRotationAxis; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionRotateAboutAxis.NormalizedRotationAxis */
	FExpressionInput RotationAngle; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionRotateAboutAxis.RotationAngle */
	FExpressionInput PivotPoint; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionRotateAboutAxis.PivotPoint */
	FExpressionInput Position; /* Ofs: 0x110 Size: 0x38 - StructProperty Engine.MaterialExpressionRotateAboutAxis.Position */
	float Period; /* Ofs: 0x148 Size: 0x4 - FloatProperty Engine.MaterialExpressionRotateAboutAxis.Period */
	uint8_t UnknownData14C[0x4];


	inline bool SetNormalizedRotationAxis(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetRotationAngle(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetPivotPoint(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
	inline bool SetPosition(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x110, value); }
	inline bool SetPeriod(t_structHelper inst, float value) { inst.WriteOffset(0x148, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionRotateAboutAxis = sizeof(UMaterialExpressionRotateAboutAxis); // 336
    static_assert(sizeof(UMaterialExpressionRotateAboutAxis) == 0x150, "Size of UMaterialExpressionRotateAboutAxis is not correct.");
	auto constexpr UMaterialExpressionRotateAboutAxis_NormalizedRotationAxis_Offset = offsetof(UMaterialExpressionRotateAboutAxis, NormalizedRotationAxis);
	static_assert(UMaterialExpressionRotateAboutAxis_NormalizedRotationAxis_Offset == 0x68, "UMaterialExpressionRotateAboutAxis::NormalizedRotationAxis offset is not 68");
	auto constexpr UMaterialExpressionRotateAboutAxis_RotationAngle_Offset = offsetof(UMaterialExpressionRotateAboutAxis, RotationAngle);
	static_assert(UMaterialExpressionRotateAboutAxis_RotationAngle_Offset == 0xa0, "UMaterialExpressionRotateAboutAxis::RotationAngle offset is not a0");
	auto constexpr UMaterialExpressionRotateAboutAxis_PivotPoint_Offset = offsetof(UMaterialExpressionRotateAboutAxis, PivotPoint);
	static_assert(UMaterialExpressionRotateAboutAxis_PivotPoint_Offset == 0xd8, "UMaterialExpressionRotateAboutAxis::PivotPoint offset is not d8");
	auto constexpr UMaterialExpressionRotateAboutAxis_Position_Offset = offsetof(UMaterialExpressionRotateAboutAxis, Position);
	static_assert(UMaterialExpressionRotateAboutAxis_Position_Offset == 0x110, "UMaterialExpressionRotateAboutAxis::Position offset is not 110");
	auto constexpr UMaterialExpressionRotateAboutAxis_Period_Offset = offsetof(UMaterialExpressionRotateAboutAxis, Period);
	static_assert(UMaterialExpressionRotateAboutAxis_Period_Offset == 0x148, "UMaterialExpressionRotateAboutAxis::Period offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
