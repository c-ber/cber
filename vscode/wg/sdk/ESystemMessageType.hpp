#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESystemMessageType
{
   ESystemMessageType__Debug = 0,
   ESystemMessageType__Notify = 1,
   ESystemMessageType__Warning = 2,
   ESystemMessageType__Error = 3,
   ESystemMessageType__Important = 4,
   ESystemMessageType__ESystemMessageType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
