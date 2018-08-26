#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESequenceEvalReinit
{
   ESequenceEvalReinit__NoReset = 0,
   ESequenceEvalReinit__StartPosition = 1,
   ESequenceEvalReinit__ExplicitTime = 2,
   ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
