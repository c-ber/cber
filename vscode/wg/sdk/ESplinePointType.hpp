#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESplinePointType
{
   ESplinePointType__Linear = 0,
   ESplinePointType__Curve = 1,
   ESplinePointType__Constant = 2,
   ESplinePointType__CurveClamped = 3,
   ESplinePointType__CurveCustomTangent = 4,
   ESplinePointType__ESplinePointType_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
