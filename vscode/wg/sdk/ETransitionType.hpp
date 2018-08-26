#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETransitionType
{
   TT_None = 0,
   TT_Paused = 1,
   TT_Loading = 2,
   TT_Saving = 3,
   TT_Connecting = 4,
   TT_Precaching = 5,
   TT_WaitingToConnect = 6,
   TT_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
