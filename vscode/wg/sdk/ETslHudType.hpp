#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETslHudType
{
   ETslHudType__None = 0,
   ETslHudType__CharacterHud = 1,
   ETslHudType__SpectatorHud = 2,
   ETslHudType__ObserverHud = 3,
   ETslHudType__ReplayHud = 4,
   ETslHudType__ETslHudType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
