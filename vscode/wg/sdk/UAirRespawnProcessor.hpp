#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAirRespawnProcessor // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UAirRespawnProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(407); // id32("Class TslGame.AirRespawnProcessor")
		return ptr;
	}
	TAssetPtr<ExternalPtr<struct UClass>> AircraftClass; /* Ofs: 0x30 Size: 0x1C - AssetClassProperty TslGame.AirRespawnProcessor.AircraftClass */
	uint8_t UnknownData4C[0x4];
	float BeginFlightTerm; /* Ofs: 0x50 Size: 0x4 - FloatProperty TslGame.AirRespawnProcessor.BeginFlightTerm */
	float RespawnPeriodSeconds; /* Ofs: 0x54 Size: 0x4 - FloatProperty TslGame.AirRespawnProcessor.RespawnPeriodSeconds */
	float AircraftAltitude; /* Ofs: 0x58 Size: 0x4 - FloatProperty TslGame.AirRespawnProcessor.AircraftAltitude */
	float FlightStartRadiusRatio; /* Ofs: 0x5C Size: 0x4 - FloatProperty TslGame.AirRespawnProcessor.FlightStartRadiusRatio */
	ExternalPtr<struct UCurveFloat> FlyingDurationCurve; /* Ofs: 0x60 Size: 0x8 - ObjectProperty TslGame.AirRespawnProcessor.FlyingDurationCurve */
	uint8_t UnknownData68[0x8];
	ExternalPtr<struct UWorld> World; /* Ofs: 0x70 Size: 0x8 - ObjectProperty TslGame.AirRespawnProcessor.World */


	inline bool SetAircraftClass(t_structHelper inst, TAssetPtr<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x30, value); }
	inline bool SetBeginFlightTerm(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetRespawnPeriodSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetAircraftAltitude(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetFlightStartRadiusRatio(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetFlyingDurationCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x60, value); }
	inline bool SetWorld(t_structHelper inst, ExternalPtr<struct UWorld> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAirRespawnProcessor = sizeof(UAirRespawnProcessor); // 120
    static_assert(sizeof(UAirRespawnProcessor) == 0x78, "Size of UAirRespawnProcessor is not correct.");
	auto constexpr UAirRespawnProcessor_AircraftClass_Offset = offsetof(UAirRespawnProcessor, AircraftClass);
	static_assert(UAirRespawnProcessor_AircraftClass_Offset == 0x30, "UAirRespawnProcessor::AircraftClass offset is not 30");
	auto constexpr UAirRespawnProcessor_BeginFlightTerm_Offset = offsetof(UAirRespawnProcessor, BeginFlightTerm);
	static_assert(UAirRespawnProcessor_BeginFlightTerm_Offset == 0x50, "UAirRespawnProcessor::BeginFlightTerm offset is not 50");
	auto constexpr UAirRespawnProcessor_RespawnPeriodSeconds_Offset = offsetof(UAirRespawnProcessor, RespawnPeriodSeconds);
	static_assert(UAirRespawnProcessor_RespawnPeriodSeconds_Offset == 0x54, "UAirRespawnProcessor::RespawnPeriodSeconds offset is not 54");
	auto constexpr UAirRespawnProcessor_AircraftAltitude_Offset = offsetof(UAirRespawnProcessor, AircraftAltitude);
	static_assert(UAirRespawnProcessor_AircraftAltitude_Offset == 0x58, "UAirRespawnProcessor::AircraftAltitude offset is not 58");
	auto constexpr UAirRespawnProcessor_FlightStartRadiusRatio_Offset = offsetof(UAirRespawnProcessor, FlightStartRadiusRatio);
	static_assert(UAirRespawnProcessor_FlightStartRadiusRatio_Offset == 0x5c, "UAirRespawnProcessor::FlightStartRadiusRatio offset is not 5c");
	auto constexpr UAirRespawnProcessor_FlyingDurationCurve_Offset = offsetof(UAirRespawnProcessor, FlyingDurationCurve);
	static_assert(UAirRespawnProcessor_FlyingDurationCurve_Offset == 0x60, "UAirRespawnProcessor::FlyingDurationCurve offset is not 60");
	auto constexpr UAirRespawnProcessor_World_Offset = offsetof(UAirRespawnProcessor, World);
	static_assert(UAirRespawnProcessor_World_Offset == 0x70, "UAirRespawnProcessor::World offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
