#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWeatherChange
{
   EWeatherChange__NoChange = 0,
   EWeatherChange__Rainy = 1,
   EWeatherChange__Foggy = 2,
   EWeatherChange__EWeatherChange_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
