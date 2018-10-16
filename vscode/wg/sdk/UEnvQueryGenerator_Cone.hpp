#pragma once
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
#include "FAIDataProviderFloatValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_Cone // Size: 0x158
	: public UEnvQueryGenerator_ProjectedPoints // Size: 0x88
{
private:
	typedef UEnvQueryGenerator_Cone t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(634); // id32("Class AIModule.EnvQueryGenerator_Cone")
		return ptr;
	}
	FAIDataProviderFloatValue AlignedPointsDistance; /* Ofs: 0x88 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Cone.AlignedPointsDistance */
	FAIDataProviderFloatValue ConeDegrees; /* Ofs: 0xB8 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Cone.ConeDegrees */
	FAIDataProviderFloatValue AngleStep; /* Ofs: 0xE8 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Cone.AngleStep */
	FAIDataProviderFloatValue Range; /* Ofs: 0x118 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_Cone.Range */
	ExternalPtr<struct UClass> CenterActor; /* Ofs: 0x148 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_Cone.CenterActor */
	uint8_t boolField150;
	uint8_t UnknownData151[0x7];


	inline bool SetAlignedPointsDistance(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x88, value); }
	inline bool SetConeDegrees(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0xB8, value); }
	inline bool SetAngleStep(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0xE8, value); }
	inline bool SetRange(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x118, value); }
	inline bool SetCenterActor(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x148, value); }
	inline bool bIncludeContextLocation()
	{
		return boolField150& 0x1;
	}
	inline bool SetbIncludeContextLocation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x150, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_Cone = sizeof(UEnvQueryGenerator_Cone); // 344
    static_assert(sizeof(UEnvQueryGenerator_Cone) == 0x158, "Size of UEnvQueryGenerator_Cone is not correct.");
	auto constexpr UEnvQueryGenerator_Cone_AlignedPointsDistance_Offset = offsetof(UEnvQueryGenerator_Cone, AlignedPointsDistance);
	static_assert(UEnvQueryGenerator_Cone_AlignedPointsDistance_Offset == 0x88, "UEnvQueryGenerator_Cone::AlignedPointsDistance offset is not 88");
	auto constexpr UEnvQueryGenerator_Cone_ConeDegrees_Offset = offsetof(UEnvQueryGenerator_Cone, ConeDegrees);
	static_assert(UEnvQueryGenerator_Cone_ConeDegrees_Offset == 0xb8, "UEnvQueryGenerator_Cone::ConeDegrees offset is not b8");
	auto constexpr UEnvQueryGenerator_Cone_AngleStep_Offset = offsetof(UEnvQueryGenerator_Cone, AngleStep);
	static_assert(UEnvQueryGenerator_Cone_AngleStep_Offset == 0xe8, "UEnvQueryGenerator_Cone::AngleStep offset is not e8");
	auto constexpr UEnvQueryGenerator_Cone_Range_Offset = offsetof(UEnvQueryGenerator_Cone, Range);
	static_assert(UEnvQueryGenerator_Cone_Range_Offset == 0x118, "UEnvQueryGenerator_Cone::Range offset is not 118");
	auto constexpr UEnvQueryGenerator_Cone_CenterActor_Offset = offsetof(UEnvQueryGenerator_Cone, CenterActor);
	static_assert(UEnvQueryGenerator_Cone_CenterActor_Offset == 0x148, "UEnvQueryGenerator_Cone::CenterActor offset is not 148");
	auto constexpr UEnvQueryGenerator_Cone_boolField150_Offset = offsetof(UEnvQueryGenerator_Cone, boolField150);
	static_assert(UEnvQueryGenerator_Cone_boolField150_Offset == 0x150, "UEnvQueryGenerator_Cone::boolField150 offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
