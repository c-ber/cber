#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextWrappingPolicy
{
   ETextWrappingPolicy__DefaultWrapping = 0,
   ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
   ETextWrappingPolicy__ETextWrappingPolicy_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
