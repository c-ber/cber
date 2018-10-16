#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum FNavigationSystemRunMode
{
   FNavigationSystemRunMode__InvalidMode = 0,
   FNavigationSystemRunMode__GameMode = 1,
   FNavigationSystemRunMode__EditorMode = 2,
   FNavigationSystemRunMode__SimulationMode = 3,
   FNavigationSystemRunMode__PIEMode = 4,
   FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
