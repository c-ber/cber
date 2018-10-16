#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERoundingMode
{
   HalfToEven = 0,
   HalfFromZero = 1,
   HalfToZero = 2,
   FromZero = 3,
   ToZero = 4,
   ToNegativeInfinity = 5,
   ToPositiveInfinity = 6,
   ERoundingMode_MAX = 7,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
