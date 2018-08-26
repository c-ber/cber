#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWindowMode
{
   EWindowMode__Fullscreen = 0,
   EWindowMode__WindowedFullscreen = 1,
   EWindowMode__Windowed = 2,
   EWindowMode__EWindowMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
