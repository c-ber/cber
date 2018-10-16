#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESpritePolygonMode
{
   ESpritePolygonMode__SourceBoundingBox = 0,
   ESpritePolygonMode__TightBoundingBox = 1,
   ESpritePolygonMode__ShrinkWrapped = 2,
   ESpritePolygonMode__FullyCustom = 3,
   ESpritePolygonMode__Diced = 4,
   ESpritePolygonMode__ESpritePolygonMode_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
