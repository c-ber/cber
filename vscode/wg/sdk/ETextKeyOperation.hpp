#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextKeyOperation
{
   ETextKeyOperation__Equal = 0,
   ETextKeyOperation__NotEqual = 1,
   ETextKeyOperation__Contain = 2,
   ETextKeyOperation__NotContain = 3,
   ETextKeyOperation__ETextKeyOperation_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
