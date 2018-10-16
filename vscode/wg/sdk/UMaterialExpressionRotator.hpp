#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionRotator // Size: 0xE8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionRotator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(973); // id32("Class Engine.MaterialExpressionRotator")
		return ptr;
	}
	FExpressionInput Coordinate; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionRotator.Coordinate */
	FExpressionInput Time; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionRotator.Time */
	float CenterX; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionRotator.CenterX */
	float CenterY; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.MaterialExpressionRotator.CenterY */
	float Speed; /* Ofs: 0xE0 Size: 0x4 - FloatProperty Engine.MaterialExpressionRotator.Speed */
	uint32_t ConstCoordinate; /* Ofs: 0xE4 Size: 0x4 - UInt32Property Engine.MaterialExpressionRotator.ConstCoordinate */


	inline bool SetCoordinate(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetTime(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetCenterX(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetCenterY(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
	inline bool SetSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetConstCoordinate(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xE4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionRotator = sizeof(UMaterialExpressionRotator); // 232
    static_assert(sizeof(UMaterialExpressionRotator) == 0xE8, "Size of UMaterialExpressionRotator is not correct.");
	auto constexpr UMaterialExpressionRotator_Coordinate_Offset = offsetof(UMaterialExpressionRotator, Coordinate);
	static_assert(UMaterialExpressionRotator_Coordinate_Offset == 0x68, "UMaterialExpressionRotator::Coordinate offset is not 68");
	auto constexpr UMaterialExpressionRotator_Time_Offset = offsetof(UMaterialExpressionRotator, Time);
	static_assert(UMaterialExpressionRotator_Time_Offset == 0xa0, "UMaterialExpressionRotator::Time offset is not a0");
	auto constexpr UMaterialExpressionRotator_CenterX_Offset = offsetof(UMaterialExpressionRotator, CenterX);
	static_assert(UMaterialExpressionRotator_CenterX_Offset == 0xd8, "UMaterialExpressionRotator::CenterX offset is not d8");
	auto constexpr UMaterialExpressionRotator_CenterY_Offset = offsetof(UMaterialExpressionRotator, CenterY);
	static_assert(UMaterialExpressionRotator_CenterY_Offset == 0xdc, "UMaterialExpressionRotator::CenterY offset is not dc");
	auto constexpr UMaterialExpressionRotator_Speed_Offset = offsetof(UMaterialExpressionRotator, Speed);
	static_assert(UMaterialExpressionRotator_Speed_Offset == 0xe0, "UMaterialExpressionRotator::Speed offset is not e0");
	auto constexpr UMaterialExpressionRotator_ConstCoordinate_Offset = offsetof(UMaterialExpressionRotator, ConstCoordinate);
	static_assert(UMaterialExpressionRotator_ConstCoordinate_Offset == 0xe4, "UMaterialExpressionRotator::ConstCoordinate offset is not e4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
