#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESelectInfo
{
   ESelectInfo__OnKeyPress = 0,
   ESelectInfo__OnNavigation = 1,
   ESelectInfo__OnMouseClick = 2,
   ESelectInfo__Direct = 3,
   ESelectInfo__ESelectInfo_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
