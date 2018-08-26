#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESkyLightSourceType
{
   SLS_CapturedScene = 0,
   SLS_SpecifiedCubemap = 1,
   SLS_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
