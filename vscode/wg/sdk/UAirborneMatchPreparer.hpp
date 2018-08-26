#pragma once
#include "UMatchPreparer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAirborneMatchPreparer // Size: 0xE0
	: public UMatchPreparer // Size: 0x60
{
private:
	typedef UAirborneMatchPreparer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1927); // id32("Class TslGame.AirborneMatchPreparer")
		return ptr;
	}
	TAssetPtr<ExternalPtr<struct UClass>> AircraftClass; /* Ofs: 0x60 Size: 0x1C - AssetClassProperty TslGame.AirborneMatchPreparer.AircraftClass */
	uint8_t UnknownData7C[0x4];
	TArray<ExternalPtr<struct UTransportAircraftVehicle>> Aircrafts; /* Ofs: 0x80 Size: 0x10 - ArrayProperty TslGame.AirborneMatchPreparer.Aircrafts */
	int32_t AircraftCount; /* Ofs: 0x90 Size: 0x4 - IntProperty TslGame.AirborneMatchPreparer.AircraftCount */
	int32_t AircraftCapacityOverride; /* Ofs: 0x94 Size: 0x4 - IntProperty TslGame.AirborneMatchPreparer.AircraftCapacityOverride */
	float AircraftAltitude; /* Ofs: 0x98 Size: 0x4 - FloatProperty TslGame.AirborneMatchPreparer.AircraftAltitude */
	float EndThetaDegree; /* Ofs: 0x9C Size: 0x4 - FloatProperty TslGame.AirborneMatchPreparer.EndThetaDegree */
	float AircraftIntervalDistance; /* Ofs: 0xA0 Size: 0x4 - FloatProperty TslGame.AirborneMatchPreparer.AircraftIntervalDistance */
	uint8_t UnknownDataA4[0x3C];


	inline bool SetAircraftClass(t_structHelper inst, TAssetPtr<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x60, value); }
	inline bool SetAircrafts(t_structHelper inst, TArray<ExternalPtr<struct UTransportAircraftVehicle>> value) { inst.WriteOffset(0x80, value); }
	inline bool SetAircraftCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x90, value); }
	inline bool SetAircraftCapacityOverride(t_structHelper inst, int32_t value) { inst.WriteOffset(0x94, value); }
	inline bool SetAircraftAltitude(t_structHelper inst, float value) { inst.WriteOffset(0x98, value); }
	inline bool SetEndThetaDegree(t_structHelper inst, float value) { inst.WriteOffset(0x9C, value); }
	inline bool SetAircraftIntervalDistance(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAirborneMatchPreparer = sizeof(UAirborneMatchPreparer); // 224
    static_assert(sizeof(UAirborneMatchPreparer) == 0xE0, "Size of UAirborneMatchPreparer is not correct.");
	auto constexpr UAirborneMatchPreparer_AircraftClass_Offset = offsetof(UAirborneMatchPreparer, AircraftClass);
	static_assert(UAirborneMatchPreparer_AircraftClass_Offset == 0x60, "UAirborneMatchPreparer::AircraftClass offset is not 60");
	auto constexpr UAirborneMatchPreparer_Aircrafts_Offset = offsetof(UAirborneMatchPreparer, Aircrafts);
	static_assert(UAirborneMatchPreparer_Aircrafts_Offset == 0x80, "UAirborneMatchPreparer::Aircrafts offset is not 80");
	auto constexpr UAirborneMatchPreparer_AircraftCount_Offset = offsetof(UAirborneMatchPreparer, AircraftCount);
	static_assert(UAirborneMatchPreparer_AircraftCount_Offset == 0x90, "UAirborneMatchPreparer::AircraftCount offset is not 90");
	auto constexpr UAirborneMatchPreparer_AircraftCapacityOverride_Offset = offsetof(UAirborneMatchPreparer, AircraftCapacityOverride);
	static_assert(UAirborneMatchPreparer_AircraftCapacityOverride_Offset == 0x94, "UAirborneMatchPreparer::AircraftCapacityOverride offset is not 94");
	auto constexpr UAirborneMatchPreparer_AircraftAltitude_Offset = offsetof(UAirborneMatchPreparer, AircraftAltitude);
	static_assert(UAirborneMatchPreparer_AircraftAltitude_Offset == 0x98, "UAirborneMatchPreparer::AircraftAltitude offset is not 98");
	auto constexpr UAirborneMatchPreparer_EndThetaDegree_Offset = offsetof(UAirborneMatchPreparer, EndThetaDegree);
	static_assert(UAirborneMatchPreparer_EndThetaDegree_Offset == 0x9c, "UAirborneMatchPreparer::EndThetaDegree offset is not 9c");
	auto constexpr UAirborneMatchPreparer_AircraftIntervalDistance_Offset = offsetof(UAirborneMatchPreparer, AircraftIntervalDistance);
	static_assert(UAirborneMatchPreparer_AircraftIntervalDistance_Offset == 0xa0, "UAirborneMatchPreparer::AircraftIntervalDistance offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
