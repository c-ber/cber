#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESectionEvaluationFlags
{
   ESectionEvaluationFlags__None = 0,
   ESectionEvaluationFlags__PreRoll = 1,
   ESectionEvaluationFlags__PostRoll = 2,
   ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
