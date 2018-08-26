#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EUserDefinedStructureStatus
{
   UDSS_UpToDate = 0,
   UDSS_Dirty = 1,
   UDSS_Error = 2,
   UDSS_Duplicate = 3,
   UDSS_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
