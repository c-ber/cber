#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETrackActiveCondition
{
   ETAC_Always = 0,
   ETAC_GoreEnabled = 1,
   ETAC_GoreDisabled = 2,
   ETAC_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
