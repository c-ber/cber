#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextureSourceArtType
{
   TSAT_Uncompressed = 0,
   TSAT_PNGCompressed = 1,
   TSAT_DDSFile = 2,
   TSAT_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
