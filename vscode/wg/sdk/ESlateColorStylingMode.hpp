#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESlateColorStylingMode
{
   ESlateColorStylingMode__UseColor_Specified = 0,
   ESlateColorStylingMode__UseColor_Specified_Link = 1,
   ESlateColorStylingMode__UseColor_Foreground = 2,
   ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
   ESlateColorStylingMode__UseColor_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
