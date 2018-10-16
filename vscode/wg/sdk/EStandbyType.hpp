#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EStandbyType
{
   STDBY_Rx = 0,
   STDBY_Tx = 1,
   STDBY_BadPing = 2,
   STDBY_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
