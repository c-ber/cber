#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESlateVisibility
{
   ESlateVisibility__Visible = 0,
   ESlateVisibility__Collapsed = 1,
   ESlateVisibility__Hidden = 2,
   ESlateVisibility__HitTestInvisible = 3,
   ESlateVisibility__SelfHitTestInvisible = 4,
   ESlateVisibility__ESlateVisibility_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
