#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERichCurveTangentMode
{
   RCTM_Auto = 0,
   RCTM_User = 1,
   RCTM_Break = 2,
   RCTM_None = 3,
   RCTM_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
