#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWidgetInteractionSource
{
   EWidgetInteractionSource__World = 0,
   EWidgetInteractionSource__Mouse = 1,
   EWidgetInteractionSource__CenterScreen = 2,
   EWidgetInteractionSource__Custom = 3,
   EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
