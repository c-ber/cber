#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVectorQuantization
{
   EVectorQuantization__RoundWholeNumber = 0,
   EVectorQuantization__RoundOneDecimal = 1,
   EVectorQuantization__RoundTwoDecimals = 2,
   EVectorQuantization__EVectorQuantization_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
