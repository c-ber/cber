#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETimelineSigType
{
   ETS_EventSignature = 0,
   ETS_FloatSignature = 1,
   ETS_VectorSignature = 2,
   ETS_LinearColorSignature = 3,
   ETS_InvalidSignature = 4,
   ETS_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
