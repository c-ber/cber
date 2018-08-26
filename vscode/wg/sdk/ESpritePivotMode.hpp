#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESpritePivotMode
{
   ESpritePivotMode__Top_Left = 0,
   ESpritePivotMode__Top_Center = 1,
   ESpritePivotMode__Top_Right = 2,
   ESpritePivotMode__Center_Left = 3,
   ESpritePivotMode__Center_Center = 4,
   ESpritePivotMode__Center_Right = 5,
   ESpritePivotMode__Bottom_Left = 6,
   ESpritePivotMode__Bottom_Center = 7,
   ESpritePivotMode__Bottom_Right = 8,
   ESpritePivotMode__Custom = 9,
   ESpritePivotMode__ESpritePivotMode_MAX = 10,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
