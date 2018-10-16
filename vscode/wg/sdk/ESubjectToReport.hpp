#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESubjectToReport
{
   ESubjectToReport__Killer = 0,
   ESubjectToReport__Spectating_Player = 1,
   ESubjectToReport__Replay_Player = 2,
   ESubjectToReport__ESubjectToReport_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
