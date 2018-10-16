#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ParticleReplayState
{
   PRS_Disabled = 0,
   PRS_Capturing = 1,
   PRS_Replaying = 2,
   PRS_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
