#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EShow3DTrajectory
{
   EShow3DTrajectory__EST_OnlyWhenSelected = 0,
   EShow3DTrajectory__EST_Always = 1,
   EShow3DTrajectory__EST_Never = 2,
   EShow3DTrajectory__EST_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
