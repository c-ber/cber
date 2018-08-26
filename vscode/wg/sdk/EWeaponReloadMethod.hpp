#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWeaponReloadMethod
{
   EWeaponReloadMethod__Magazine = 0,
   EWeaponReloadMethod__OneByOne = 1,
   EWeaponReloadMethod__OneByOneAndClip = 2,
   EWeaponReloadMethod__EWeaponReloadMethod_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
