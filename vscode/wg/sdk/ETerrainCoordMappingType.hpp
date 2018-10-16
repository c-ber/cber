#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETerrainCoordMappingType
{
   TCMT_Auto = 0,
   TCMT_XY = 1,
   TCMT_XZ = 2,
   TCMT_YZ = 3,
   TCMT_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
