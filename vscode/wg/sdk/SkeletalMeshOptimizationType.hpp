#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum SkeletalMeshOptimizationType
{
   SMOT_NumOfTriangles = 0,
   SMOT_MaxDeviation = 1,
   SMOT_ScreenSize = 2,
   SMOT_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
