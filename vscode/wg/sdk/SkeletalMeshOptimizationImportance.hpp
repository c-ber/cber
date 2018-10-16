#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum SkeletalMeshOptimizationImportance
{
   SMOI_Off = 0,
   SMOI_Lowest = 1,
   SMOI_Low = 2,
   SMOI_Normal = 3,
   SMOI_High = 4,
   SMOI_Highest = 5,
   SMOI_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
