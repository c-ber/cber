#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESceneCaptureSource
{
   SCS_SceneColorHDR = 0,
   SCS_SceneColorHDRNoAlpha = 1,
   SCS_FinalColorLDR = 2,
   SCS_SceneColorSceneDepth = 3,
   SCS_SceneDepth = 4,
   SCS_DeviceDepth = 5,
   SCS_Normal = 6,
   SCS_BaseColor = 7,
   SCS_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
