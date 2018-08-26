#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EUINavigation
{
   EUINavigation__Left = 0,
   EUINavigation__Right = 1,
   EUINavigation__Up = 2,
   EUINavigation__Down = 3,
   EUINavigation__Next = 4,
   EUINavigation__Previous = 5,
   EUINavigation__Num = 6,
   EUINavigation__Invalid = 7,
   EUINavigation__EUINavigation_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
