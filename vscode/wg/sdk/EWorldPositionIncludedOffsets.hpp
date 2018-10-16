#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWorldPositionIncludedOffsets
{
   WPT_Default = 0,
   WPT_Full = 1,
   WPT_ExcludeAllShaderOffsets = 2,
   WPT_FullNoOffsets = 3,
   WPT_CameraRelative = 4,
   WPT_CameraRelativeNoOffsets = 5,
   WPT_MAX = 6,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
