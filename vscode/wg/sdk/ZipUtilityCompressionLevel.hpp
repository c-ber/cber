#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ZipUtilityCompressionLevel
{
   COMPRESSION_LEVEL_NONE = 0,
   COMPRESSION_LEVEL_FAST = 1,
   COMPRESSION_LEVEL_NORMAL = 2,
   COMPRESSION_LEVEL_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
