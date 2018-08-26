#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESubmixEffectDynamicsPeakMode
{
   ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
   ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
   ESubmixEffectDynamicsPeakMode__Peak = 2,
   ESubmixEffectDynamicsPeakMode__Count = 3,
   ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
