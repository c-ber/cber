#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVivoxResponseState
{
   EVivoxResponseState__NotRequested = 0,
   EVivoxResponseState__Requested = 1,
   EVivoxResponseState__Fail = 2,
   EVivoxResponseState__Success = 3,
   EVivoxResponseState__EVivoxResponseState_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
