#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextCommit
{
   ETextCommit__Default = 0,
   ETextCommit__OnEnter = 1,
   ETextCommit__OnUserMovedFocus = 2,
   ETextCommit__OnCleared = 3,
   ETextCommit__ETextCommit_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
