#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETouchType
{
   ETouchType__Began = 0,
   ETouchType__Moved = 1,
   ETouchType__Stationary = 2,
   ETouchType__Ended = 3,
   ETouchType__NumTypes = 4,
   ETouchType__ETouchType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
