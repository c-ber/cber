#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESceneCaptureCompositeMode
{
   SCCM_Overwrite = 0,
   SCCM_Additive = 1,
   SCCM_Composite = 2,
   SCCM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
