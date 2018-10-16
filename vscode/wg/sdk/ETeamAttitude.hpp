#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETeamAttitude
{
   ETeamAttitude__Friendly = 0,
   ETeamAttitude__Neutral = 1,
   ETeamAttitude__Hostile = 2,
   ETeamAttitude__ETeamAttitude_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
