#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionPanner // Size: 0x120
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionPanner t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(943); // id32("Class Engine.MaterialExpressionPanner")
		return ptr;
	}
	FExpressionInput Coordinate; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionPanner.Coordinate */
	FExpressionInput Time; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionPanner.Time */
	FExpressionInput Speed; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionPanner.Speed */
	float SpeedX; /* Ofs: 0x110 Size: 0x4 - FloatProperty Engine.MaterialExpressionPanner.SpeedX */
	float SpeedY; /* Ofs: 0x114 Size: 0x4 - FloatProperty Engine.MaterialExpressionPanner.SpeedY */
	uint32_t ConstCoordinate; /* Ofs: 0x118 Size: 0x4 - UInt32Property Engine.MaterialExpressionPanner.ConstCoordinate */
	uint8_t boolField11C;
	uint8_t UnknownData11D[0x3];


	inline bool SetCoordinate(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetTime(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetSpeed(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
	inline bool SetSpeedX(t_structHelper inst, float value) { inst.WriteOffset(0x110, value); }
	inline bool SetSpeedY(t_structHelper inst, float value) { inst.WriteOffset(0x114, value); }
	inline bool SetConstCoordinate(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x118, value); }
	inline bool bFractionalPart()
	{
		return boolField11C& 0x1;
	}
	inline bool SetbFractionalPart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x11C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionPanner = sizeof(UMaterialExpressionPanner); // 288
    static_assert(sizeof(UMaterialExpressionPanner) == 0x120, "Size of UMaterialExpressionPanner is not correct.");
	auto constexpr UMaterialExpressionPanner_Coordinate_Offset = offsetof(UMaterialExpressionPanner, Coordinate);
	static_assert(UMaterialExpressionPanner_Coordinate_Offset == 0x68, "UMaterialExpressionPanner::Coordinate offset is not 68");
	auto constexpr UMaterialExpressionPanner_Time_Offset = offsetof(UMaterialExpressionPanner, Time);
	static_assert(UMaterialExpressionPanner_Time_Offset == 0xa0, "UMaterialExpressionPanner::Time offset is not a0");
	auto constexpr UMaterialExpressionPanner_Speed_Offset = offsetof(UMaterialExpressionPanner, Speed);
	static_assert(UMaterialExpressionPanner_Speed_Offset == 0xd8, "UMaterialExpressionPanner::Speed offset is not d8");
	auto constexpr UMaterialExpressionPanner_SpeedX_Offset = offsetof(UMaterialExpressionPanner, SpeedX);
	static_assert(UMaterialExpressionPanner_SpeedX_Offset == 0x110, "UMaterialExpressionPanner::SpeedX offset is not 110");
	auto constexpr UMaterialExpressionPanner_SpeedY_Offset = offsetof(UMaterialExpressionPanner, SpeedY);
	static_assert(UMaterialExpressionPanner_SpeedY_Offset == 0x114, "UMaterialExpressionPanner::SpeedY offset is not 114");
	auto constexpr UMaterialExpressionPanner_ConstCoordinate_Offset = offsetof(UMaterialExpressionPanner, ConstCoordinate);
	static_assert(UMaterialExpressionPanner_ConstCoordinate_Offset == 0x118, "UMaterialExpressionPanner::ConstCoordinate offset is not 118");
	auto constexpr UMaterialExpressionPanner_boolField11C_Offset = offsetof(UMaterialExpressionPanner, boolField11C);
	static_assert(UMaterialExpressionPanner_boolField11C_Offset == 0x11c, "UMaterialExpressionPanner::boolField11C offset is not 11c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
