#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVivoxChannelType
{
   EVivoxChannelType__None = 0,
   EVivoxChannelType__All = 1,
   EVivoxChannelType__GlobalOnly = 2,
   EVivoxChannelType__TeamOnly = 3,
   EVivoxChannelType__EVivoxChannelType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
