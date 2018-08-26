#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVivoxConnectionState
{
   EVivoxConnectionState__NotConnected = 0,
   EVivoxConnectionState__Connecting = 1,
   EVivoxConnectionState__Connected = 2,
   EVivoxConnectionState__EVivoxConnectionState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
