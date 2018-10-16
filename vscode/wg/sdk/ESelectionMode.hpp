#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESelectionMode
{
   ESelectionMode__None = 0,
   ESelectionMode__Single = 1,
   ESelectionMode__SingleToggle = 2,
   ESelectionMode__Multi = 3,
   ESelectionMode__ESelectionMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
