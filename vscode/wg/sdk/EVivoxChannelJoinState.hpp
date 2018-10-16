#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVivoxChannelJoinState
{
   EVivoxChannelJoinState__NotJoined = 0,
   EVivoxChannelJoinState__Joining = 1,
   EVivoxChannelJoinState__Leaving = 2,
   EVivoxChannelJoinState__Joined = 3,
   EVivoxChannelJoinState__EVivoxChannelJoinState_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
