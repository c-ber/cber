#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EValueType
{
   EValueType__Float = 0,
   EValueType__Int = 1,
   EValueType__String = 2,
   EValueType__Bool = 3,
   EValueType__EValueType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
