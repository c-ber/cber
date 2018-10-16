#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ZipUtilityCompressionFormat
{
   COMPRESSION_FORMAT_UNKNOWN = 0,
   COMPRESSION_FORMAT_SEVEN_ZIP = 1,
   COMPRESSION_FORMAT_ZIP = 2,
   COMPRESSION_FORMAT_GZIP = 3,
   COMPRESSION_FORMAT_BZIP2 = 4,
   COMPRESSION_FORMAT_RAR = 5,
   COMPRESSION_FORMAT_TAR = 6,
   COMPRESSION_FORMAT_ISO = 7,
   COMPRESSION_FORMAT_CAB = 8,
   COMPRESSION_FORMAT_LZMA = 9,
   COMPRESSION_FORMAT_LZMA86 = 10,
   COMPRESSION_FORMAT_MAX = 11,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
