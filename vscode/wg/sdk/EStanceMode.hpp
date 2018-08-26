#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EStanceMode
{
   STANCE_None = 0,
   STANCE_Stand = 1,
   STANCE_Crouch = 2,
   STANCE_Prone = 3,
   STANCE_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
