#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETriangleSortOption
{
   TRISORT_None = 0,
   TRISORT_CenterRadialDistance = 1,
   TRISORT_Random = 2,
   TRISORT_MergeContiguous = 3,
   TRISORT_Custom = 4,
   TRISORT_CustomLeftRight = 5,
   TRISORT_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
