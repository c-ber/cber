#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERichCurveInterpMode
{
   RCIM_Linear = 0,
   RCIM_Constant = 1,
   RCIM_Cubic = 2,
   RCIM_None = 3,
   RCIM_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
