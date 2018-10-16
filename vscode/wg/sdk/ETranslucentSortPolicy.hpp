#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETranslucentSortPolicy
{
   ETranslucentSortPolicy__SortByDistance = 0,
   ETranslucentSortPolicy__SortByProjectedZ = 1,
   ETranslucentSortPolicy__SortAlongAxis = 2,
   ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
