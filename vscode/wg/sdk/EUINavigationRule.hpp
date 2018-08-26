#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EUINavigationRule
{
   EUINavigationRule__Escape = 0,
   EUINavigationRule__Explicit = 1,
   EUINavigationRule__Wrap = 2,
   EUINavigationRule__Stop = 3,
   EUINavigationRule__Custom = 4,
   EUINavigationRule__Invalid = 5,
   EUINavigationRule__EUINavigationRule_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
