#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum FAIDistanceType
{
   FAIDistanceType__Distance3D = 0,
   FAIDistanceType__Distance2D = 1,
   FAIDistanceType__DistanceZ = 2,
   FAIDistanceType__MAX = 3,
   FAIDistanceType__FAIDistanceType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
