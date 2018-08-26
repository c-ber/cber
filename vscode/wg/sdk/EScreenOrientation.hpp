#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EScreenOrientation
{
   EScreenOrientation__Unknown = 0,
   EScreenOrientation__Portrait = 1,
   EScreenOrientation__PortraitUpsideDown = 2,
   EScreenOrientation__LandscapeLeft = 3,
   EScreenOrientation__LandscapeRight = 4,
   EScreenOrientation__FaceUp = 5,
   EScreenOrientation__FaceDown = 6,
   EScreenOrientation__EScreenOrientation_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
