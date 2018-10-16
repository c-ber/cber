#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETravelFailure
{
   ETravelFailure__NoLevel = 0,
   ETravelFailure__LoadMapFailure = 1,
   ETravelFailure__InvalidURL = 2,
   ETravelFailure__PackageMissing = 3,
   ETravelFailure__PackageVersion = 4,
   ETravelFailure__NoDownload = 5,
   ETravelFailure__TravelFailure = 6,
   ETravelFailure__CheatCommands = 7,
   ETravelFailure__PendingNetGameCreateFailure = 8,
   ETravelFailure__CloudSaveFailure = 9,
   ETravelFailure__ServerTravelFailure = 10,
   ETravelFailure__ClientTravelFailure = 11,
   ETravelFailure__ETravelFailure_MAX = 12,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
