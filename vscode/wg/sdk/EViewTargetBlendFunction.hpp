#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EViewTargetBlendFunction
{
   VTBlend_Linear = 0,
   VTBlend_Cubic = 1,
   VTBlend_EaseIn = 2,
   VTBlend_EaseOut = 3,
   VTBlend_EaseInOut = 4,
   VTBlend_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
