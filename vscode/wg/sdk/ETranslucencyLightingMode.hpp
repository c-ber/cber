#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETranslucencyLightingMode
{
   TLM_VolumetricNonDirectional = 0,
   TLM_VolumetricDirectional = 1,
   TLM_VolumetricPerVertexNonDirectional = 2,
   TLM_VolumetricPerVertexDirectional = 3,
   TLM_Surface = 4,
   TLM_SurfacePerPixelLighting = 5,
   TLM_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
