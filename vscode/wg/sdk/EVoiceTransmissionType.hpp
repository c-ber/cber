#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVoiceTransmissionType
{
   EVoiceTransmissionType__None = 0,
   EVoiceTransmissionType__ToAll = 1,
   EVoiceTransmissionType__ToChannel = 2,
   EVoiceTransmissionType__EVoiceTransmissionType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
