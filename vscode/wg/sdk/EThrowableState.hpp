#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EThrowableState
{
   EThrowableState__Idle = 0,
   EThrowableState__PinOff = 1,
   EThrowableState__Cooking = 2,
   EThrowableState__Throw = 3,
   EThrowableState__Dropped = 4,
   EThrowableState__EThrowableState_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
