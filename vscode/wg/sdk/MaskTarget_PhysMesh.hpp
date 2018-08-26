#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum MaskTarget_PhysMesh
{
   MaskTarget_PhysMesh__None = 0,
   MaskTarget_PhysMesh__MaxDistance = 1,
   MaskTarget_PhysMesh__BackstopDistance = 2,
   MaskTarget_PhysMesh__BackstopRadius = 3,
   MaskTarget_PhysMesh__MaskTarget_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
