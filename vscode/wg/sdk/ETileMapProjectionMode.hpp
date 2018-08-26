#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETileMapProjectionMode
{
   ETileMapProjectionMode__Orthogonal = 0,
   ETileMapProjectionMode__IsometricDiamond = 1,
   ETileMapProjectionMode__IsometricStaggered = 2,
   ETileMapProjectionMode__HexagonalStaggered = 3,
   ETileMapProjectionMode__ETileMapProjectionMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
