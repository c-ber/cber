#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EStreamingVolumeUsage
{
   SVB_Loading = 0,
   SVB_LoadingAndVisibility = 1,
   SVB_VisibilityBlockingOnLoad = 2,
   SVB_BlockingOnLoad = 3,
   SVB_LoadingNotVisible = 4,
   SVB_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
