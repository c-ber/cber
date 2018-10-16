#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EStretch
{
   EStretch__None = 0,
   EStretch__Fill = 1,
   EStretch__ScaleToFit = 2,
   EStretch__ScaleToFitX = 3,
   EStretch__ScaleToFitY = 4,
   EStretch__ScaleToFill = 5,
   EStretch__ScaleBySafeZone = 6,
   EStretch__UserSpecified = 7,
   EStretch__EStretch_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
