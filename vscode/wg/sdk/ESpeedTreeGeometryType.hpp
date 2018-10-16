#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESpeedTreeGeometryType
{
   STG_Branch = 0,
   STG_Frond = 1,
   STG_Leaf = 2,
   STG_FacingLeaf = 3,
   STG_Billboard = 4,
   STG_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
