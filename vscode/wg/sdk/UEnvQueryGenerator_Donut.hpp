#pragma once
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "FEnvDirection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_Donut // Size: 0x1B0
	: public UEnvQueryGenerator_ProjectedPoints // Size: 0x88
{
private:
	typedef UEnvQueryGenerator_Donut t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(635); // id32("Class AIModule.EnvQueryGenerator_Donut")
		return ptr;
	}
	FAIDataProviderFloatValue InnerRadius; /* Ofs: 0x88 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Donut.InnerRadius */
	FAIDataProviderFloatValue OuterRadius; /* Ofs: 0xB8 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Donut.OuterRadius */
	FAIDataProviderIntValue NumberOfRings; /* Ofs: 0xE8 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Donut.NumberOfRings */
	FAIDataProviderIntValue PointsPerRing; /* Ofs: 0x118 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Donut.PointsPerRing */
	FEnvDirection ArcDirection; /* Ofs: 0x148 Size: 0x20 - StructProperty AIModule.EnvQueryGenerator_Donut.ArcDirection */
	FAIDataProviderFloatValue ArcAngle; /* Ofs: 0x168 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Donut.ArcAngle */
	uint8_t boolField198;
	uint8_t UnknownData199[0x7];
	ExternalPtr<struct UClass> Center; /* Ofs: 0x1A0 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_Donut.Center */
	uint8_t boolField1A8;
	uint8_t UnknownData1A9[0x7];


	inline bool SetInnerRadius(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x88, value); }
	inline bool SetOuterRadius(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0xB8, value); }
	inline bool SetNumberOfRings(t_structHelper inst, FAIDataProviderIntValue value) { inst.WriteOffset(0xE8, value); }
	inline bool SetPointsPerRing(t_structHelper inst, FAIDataProviderIntValue value) { inst.WriteOffset(0x118, value); }
	inline bool SetArcDirection(t_structHelper inst, FEnvDirection value) { inst.WriteOffset(0x148, value); }
	inline bool SetArcAngle(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x168, value); }
	inline bool bUseSpiralPattern()
	{
		return boolField198& 0x1;
	}
	inline bool SetbUseSpiralPattern(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x198, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCenter(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1A0, value); }
	inline bool bDefineArc()
	{
		return boolField1A8& 0x1;
	}
	inline bool SetbDefineArc(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_Donut = sizeof(UEnvQueryGenerator_Donut); // 432
    static_assert(sizeof(UEnvQueryGenerator_Donut) == 0x1B0, "Size of UEnvQueryGenerator_Donut is not correct.");
	auto constexpr UEnvQueryGenerator_Donut_InnerRadius_Offset = offsetof(UEnvQueryGenerator_Donut, InnerRadius);
	static_assert(UEnvQueryGenerator_Donut_InnerRadius_Offset == 0x88, "UEnvQueryGenerator_Donut::InnerRadius offset is not 88");
	auto constexpr UEnvQueryGenerator_Donut_OuterRadius_Offset = offsetof(UEnvQueryGenerator_Donut, OuterRadius);
	static_assert(UEnvQueryGenerator_Donut_OuterRadius_Offset == 0xb8, "UEnvQueryGenerator_Donut::OuterRadius offset is not b8");
	auto constexpr UEnvQueryGenerator_Donut_NumberOfRings_Offset = offsetof(UEnvQueryGenerator_Donut, NumberOfRings);
	static_assert(UEnvQueryGenerator_Donut_NumberOfRings_Offset == 0xe8, "UEnvQueryGenerator_Donut::NumberOfRings offset is not e8");
	auto constexpr UEnvQueryGenerator_Donut_PointsPerRing_Offset = offsetof(UEnvQueryGenerator_Donut, PointsPerRing);
	static_assert(UEnvQueryGenerator_Donut_PointsPerRing_Offset == 0x118, "UEnvQueryGenerator_Donut::PointsPerRing offset is not 118");
	auto constexpr UEnvQueryGenerator_Donut_ArcDirection_Offset = offsetof(UEnvQueryGenerator_Donut, ArcDirection);
	static_assert(UEnvQueryGenerator_Donut_ArcDirection_Offset == 0x148, "UEnvQueryGenerator_Donut::ArcDirection offset is not 148");
	auto constexpr UEnvQueryGenerator_Donut_ArcAngle_Offset = offsetof(UEnvQueryGenerator_Donut, ArcAngle);
	static_assert(UEnvQueryGenerator_Donut_ArcAngle_Offset == 0x168, "UEnvQueryGenerator_Donut::ArcAngle offset is not 168");
	auto constexpr UEnvQueryGenerator_Donut_boolField198_Offset = offsetof(UEnvQueryGenerator_Donut, boolField198);
	static_assert(UEnvQueryGenerator_Donut_boolField198_Offset == 0x198, "UEnvQueryGenerator_Donut::boolField198 offset is not 198");
	auto constexpr UEnvQueryGenerator_Donut_Center_Offset = offsetof(UEnvQueryGenerator_Donut, Center);
	static_assert(UEnvQueryGenerator_Donut_Center_Offset == 0x1a0, "UEnvQueryGenerator_Donut::Center offset is not 1a0");
	auto constexpr UEnvQueryGenerator_Donut_boolField1A8_Offset = offsetof(UEnvQueryGenerator_Donut, boolField1A8);
	static_assert(UEnvQueryGenerator_Donut_boolField1A8_Offset == 0x1a8, "UEnvQueryGenerator_Donut::boolField1A8 offset is not 1a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
