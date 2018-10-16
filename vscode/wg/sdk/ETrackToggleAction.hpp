#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETrackToggleAction
{
   ETTA_Off = 0,
   ETTA_On = 1,
   ETTA_Toggle = 2,
   ETTA_Trigger = 3,
   ETTA_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
