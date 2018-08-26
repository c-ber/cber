#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESubmixEffectDynamicsProcessorType
{
   ESubmixEffectDynamicsProcessorType__Compressor = 0,
   ESubmixEffectDynamicsProcessorType__Limiter = 1,
   ESubmixEffectDynamicsProcessorType__Expander = 2,
   ESubmixEffectDynamicsProcessorType__Gate = 3,
   ESubmixEffectDynamicsProcessorType__Count = 4,
   ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
