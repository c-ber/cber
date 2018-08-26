#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextShapingMethod
{
   ETextShapingMethod__Auto = 0,
   ETextShapingMethod__KerningOnly = 1,
   ETextShapingMethod__FullShaping = 2,
   ETextShapingMethod__ETextShapingMethod_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
