#pragma once
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "EPointOnCircleSpacingMethod.hpp"
#include "FEnvDirection.hpp"
#include "FEnvTraceData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_OnCircle // Size: 0x1F0
	: public UEnvQueryGenerator_ProjectedPoints // Size: 0x88
{
private:
	typedef UEnvQueryGenerator_OnCircle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(636); // id32("Class AIModule.EnvQueryGenerator_OnCircle")
		return ptr;
	}
	FAIDataProviderFloatValue CircleRadius; /* Ofs: 0x88 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_OnCircle.CircleRadius */
	FAIDataProviderFloatValue SpaceBetween; /* Ofs: 0xB8 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_OnCircle.SpaceBetween */
	FAIDataProviderIntValue NumberOfPoints; /* Ofs: 0xE8 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_OnCircle.NumberOfPoints */
	TEnumAsByte<enum EPointOnCircleSpacingMethod> PointOnCircleSpacingMethod; /* Ofs: 0x118 Size: 0x1 - EnumProperty AIModule.EnvQueryGenerator_OnCircle.PointOnCircleSpacingMethod */
	uint8_t UnknownData119[0x7];
	FEnvDirection ArcDirection; /* Ofs: 0x120 Size: 0x20 - StructProperty AIModule.EnvQueryGenerator_OnCircle.ArcDirection */
	FAIDataProviderFloatValue ArcAngle; /* Ofs: 0x140 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_OnCircle.ArcAngle */
	float AngleRadians; /* Ofs: 0x170 Size: 0x4 - FloatProperty AIModule.EnvQueryGenerator_OnCircle.AngleRadians */
	uint8_t UnknownData174[0x4];
	ExternalPtr<struct UClass> CircleCenter; /* Ofs: 0x178 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_OnCircle.CircleCenter */
	uint8_t boolField180;
	uint8_t UnknownData181[0x7];
	FAIDataProviderFloatValue CircleCenterZOffset; /* Ofs: 0x188 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_OnCircle.CircleCenterZOffset */
	FEnvTraceData TraceData; /* Ofs: 0x1B8 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_OnCircle.TraceData */
	uint8_t boolField1E8;
	uint8_t UnknownData1E9[0x7];


	inline bool SetCircleRadius(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x88, value); }
	inline bool SetSpaceBetween(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0xB8, value); }
	inline bool SetNumberOfPoints(t_structHelper inst, FAIDataProviderIntValue value) { inst.WriteOffset(0xE8, value); }
	inline bool SetPointOnCircleSpacingMethod(t_structHelper inst, TEnumAsByte<enum EPointOnCircleSpacingMethod> value) { inst.WriteOffset(0x118, value); }
	inline bool SetArcDirection(t_structHelper inst, FEnvDirection value) { inst.WriteOffset(0x120, value); }
	inline bool SetArcAngle(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x140, value); }
	inline bool SetAngleRadians(t_structHelper inst, float value) { inst.WriteOffset(0x170, value); }
	inline bool SetCircleCenter(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x178, value); }
	inline bool bIgnoreAnyContextActorsWhenGeneratingCircle()
	{
		return boolField180& 0x1;
	}
	inline bool SetbIgnoreAnyContextActorsWhenGeneratingCircle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x180, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCircleCenterZOffset(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x188, value); }
	inline bool SetTraceData(t_structHelper inst, FEnvTraceData value) { inst.WriteOffset(0x1B8, value); }
	inline bool bDefineArc()
	{
		return boolField1E8& 0x1;
	}
	inline bool SetbDefineArc(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_OnCircle = sizeof(UEnvQueryGenerator_OnCircle); // 496
    static_assert(sizeof(UEnvQueryGenerator_OnCircle) == 0x1F0, "Size of UEnvQueryGenerator_OnCircle is not correct.");
	auto constexpr UEnvQueryGenerator_OnCircle_CircleRadius_Offset = offsetof(UEnvQueryGenerator_OnCircle, CircleRadius);
	static_assert(UEnvQueryGenerator_OnCircle_CircleRadius_Offset == 0x88, "UEnvQueryGenerator_OnCircle::CircleRadius offset is not 88");
	auto constexpr UEnvQueryGenerator_OnCircle_SpaceBetween_Offset = offsetof(UEnvQueryGenerator_OnCircle, SpaceBetween);
	static_assert(UEnvQueryGenerator_OnCircle_SpaceBetween_Offset == 0xb8, "UEnvQueryGenerator_OnCircle::SpaceBetween offset is not b8");
	auto constexpr UEnvQueryGenerator_OnCircle_NumberOfPoints_Offset = offsetof(UEnvQueryGenerator_OnCircle, NumberOfPoints);
	static_assert(UEnvQueryGenerator_OnCircle_NumberOfPoints_Offset == 0xe8, "UEnvQueryGenerator_OnCircle::NumberOfPoints offset is not e8");
	auto constexpr UEnvQueryGenerator_OnCircle_PointOnCircleSpacingMethod_Offset = offsetof(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod);
	static_assert(UEnvQueryGenerator_OnCircle_PointOnCircleSpacingMethod_Offset == 0x118, "UEnvQueryGenerator_OnCircle::PointOnCircleSpacingMethod offset is not 118");
	auto constexpr UEnvQueryGenerator_OnCircle_ArcDirection_Offset = offsetof(UEnvQueryGenerator_OnCircle, ArcDirection);
	static_assert(UEnvQueryGenerator_OnCircle_ArcDirection_Offset == 0x120, "UEnvQueryGenerator_OnCircle::ArcDirection offset is not 120");
	auto constexpr UEnvQueryGenerator_OnCircle_ArcAngle_Offset = offsetof(UEnvQueryGenerator_OnCircle, ArcAngle);
	static_assert(UEnvQueryGenerator_OnCircle_ArcAngle_Offset == 0x140, "UEnvQueryGenerator_OnCircle::ArcAngle offset is not 140");
	auto constexpr UEnvQueryGenerator_OnCircle_AngleRadians_Offset = offsetof(UEnvQueryGenerator_OnCircle, AngleRadians);
	static_assert(UEnvQueryGenerator_OnCircle_AngleRadians_Offset == 0x170, "UEnvQueryGenerator_OnCircle::AngleRadians offset is not 170");
	auto constexpr UEnvQueryGenerator_OnCircle_CircleCenter_Offset = offsetof(UEnvQueryGenerator_OnCircle, CircleCenter);
	static_assert(UEnvQueryGenerator_OnCircle_CircleCenter_Offset == 0x178, "UEnvQueryGenerator_OnCircle::CircleCenter offset is not 178");
	auto constexpr UEnvQueryGenerator_OnCircle_boolField180_Offset = offsetof(UEnvQueryGenerator_OnCircle, boolField180);
	static_assert(UEnvQueryGenerator_OnCircle_boolField180_Offset == 0x180, "UEnvQueryGenerator_OnCircle::boolField180 offset is not 180");
	auto constexpr UEnvQueryGenerator_OnCircle_CircleCenterZOffset_Offset = offsetof(UEnvQueryGenerator_OnCircle, CircleCenterZOffset);
	static_assert(UEnvQueryGenerator_OnCircle_CircleCenterZOffset_Offset == 0x188, "UEnvQueryGenerator_OnCircle::CircleCenterZOffset offset is not 188");
	auto constexpr UEnvQueryGenerator_OnCircle_TraceData_Offset = offsetof(UEnvQueryGenerator_OnCircle, TraceData);
	static_assert(UEnvQueryGenerator_OnCircle_TraceData_Offset == 0x1b8, "UEnvQueryGenerator_OnCircle::TraceData offset is not 1b8");
	auto constexpr UEnvQueryGenerator_OnCircle_boolField1E8_Offset = offsetof(UEnvQueryGenerator_OnCircle, boolField1E8);
	static_assert(UEnvQueryGenerator_OnCircle_boolField1E8_Offset == 0x1e8, "UEnvQueryGenerator_OnCircle::boolField1E8 offset is not 1e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
