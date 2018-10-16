#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVehicleAnimType
{
   EVehicleAnimType__DefaultDriver = 0,
   EVehicleAnimType__DefaultPassenger = 1,
   EVehicleAnimType__BuggyDriver = 2,
   EVehicleAnimType__BuggyPassenger = 3,
   EVehicleAnimType__DaciaDriver = 4,
   EVehicleAnimType__DaciaPassengerFR = 5,
   EVehicleAnimType__DaciaPassengerBL = 6,
   EVehicleAnimType__DaciaPassengerBC = 7,
   EVehicleAnimType__DaciaPassengerBR = 8,
   EVehicleAnimType__UazDriver = 9,
   EVehicleAnimType__UazPassengerFR = 10,
   EVehicleAnimType__UazPassengerBL = 11,
   EVehicleAnimType__UazPassengerBC = 12,
   EVehicleAnimType__UazPassengerBR = 13,
   EVehicleAnimType__BoatDriver = 14,
   EVehicleAnimType__BoatPassengerFR = 15,
   EVehicleAnimType__BoatPassengerBL = 16,
   EVehicleAnimType__BoatPassengerBC = 17,
   EVehicleAnimType__BoatPassengerBR = 18,
   EVehicleAnimType__MotoDriver = 19,
   EVehicleAnimType__MotoPassenger = 20,
   EVehicleAnimType__MotoSidecar = 21,
   EVehicleAnimType__MotoDriverSidecar = 22,
   EVehicleAnimType__MotoPassengerSidecar = 23,
   EVehicleAnimType__AircraftPassenger = 24,
   EVehicleAnimType__JetskiDriver = 25,
   EVehicleAnimType__JetskiPassenger = 26,
   EVehicleAnimType__PickupTruckDriver = 27,
   EVehicleAnimType__PickupTruckPassengerFR = 28,
   EVehicleAnimType__PickupTruckPassengerBL_Open = 29,
   EVehicleAnimType__PickupTruckPassengerBR_Open = 30,
   EVehicleAnimType__PickupTruckPassengerBL_Closed = 31,
   EVehicleAnimType__PickupTruckPassengerBR_Closed = 32,
   EVehicleAnimType__MinibusDriver = 33,
   EVehicleAnimType__MinibusPassengerFR = 34,
   EVehicleAnimType__MinibusPassengerML = 35,
   EVehicleAnimType__MinibusPassengerMR = 36,
   EVehicleAnimType__MinibusPassengerBL = 37,
   EVehicleAnimType__MinibusPassengerBR = 38,
   EVehicleAnimType__MiradoDriver = 39,
   EVehicleAnimType__MiradoFR = 40,
   EVehicleAnimType__MiradoRL = 41,
   EVehicleAnimType__MiradoRR = 42,
   EVehicleAnimType__EVehicleAnimType_MAX = 43,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
