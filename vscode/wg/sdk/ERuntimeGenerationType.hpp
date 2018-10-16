#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERuntimeGenerationType
{
   ERuntimeGenerationType__Static = 0,
   ERuntimeGenerationType__DynamicModifiersOnly = 1,
   ERuntimeGenerationType__Dynamic = 2,
   ERuntimeGenerationType__LegacyGeneration = 3,
   ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
