#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESceneDepthPriorityGroup
{
   SDPG_World = 0,
   SDPG_Foreground = 1,
   SDPG_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
