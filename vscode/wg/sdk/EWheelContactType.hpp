#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWheelContactType
{
   WCT_Static = 0,
   WCT_Roll = 1,
   WCT_LatSlip = 2,
   WCT_LongSlip = 3,
   WCT_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
