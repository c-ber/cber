#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EStereoLayerShape
{
   SLSH_QuadLayer = 0,
   SLSH_CylinderLayer = 1,
   SLSH_CubemapLayer = 2,
   SLSH_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
