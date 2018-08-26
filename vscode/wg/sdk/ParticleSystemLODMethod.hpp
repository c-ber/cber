#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ParticleSystemLODMethod
{
   PARTICLESYSTEMLODMETHOD_Automatic = 0,
   PARTICLESYSTEMLODMETHOD_DirectSet = 1,
   PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
   PARTICLESYSTEMLODMETHOD_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
