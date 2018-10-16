#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWelcomeState
{
   EWelcomeState__CopyrightAndWarning = 0,
   EWelcomeState__PressAKey = 1,
   EWelcomeState__NowLoading = 2,
   EWelcomeState__EWelcomeState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
