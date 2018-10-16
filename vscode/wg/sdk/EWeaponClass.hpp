#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWeaponClass
{
   EWeaponClass__Class_Pistol = 0,
   EWeaponClass__Class_SMG = 1,
   EWeaponClass__Class_Rifle = 2,
   EWeaponClass__Class_Carbine = 3,
   EWeaponClass__Class_Shotgun = 4,
   EWeaponClass__Class_Sniper = 5,
   EWeaponClass__Class_DMR = 6,
   EWeaponClass__Class_LMG = 7,
   EWeaponClass__Class_Melee = 8,
   EWeaponClass__Class_Throwable = 9,
   EWeaponClass__Class_None = 10,
   EWeaponClass__Class_MAX = 11,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
