#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EZipUtilityCompletionState
{
   SUCCESS = 0,
   FAILURE_NOT_FOUND = 1,
   FAILURE_UNKNOWN = 2,
   EZipUtilityCompletionState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
