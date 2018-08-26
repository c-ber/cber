#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESettingsDOF
{
   ESettingsDOF__Full3D = 0,
   ESettingsDOF__YZPlane = 1,
   ESettingsDOF__XZPlane = 2,
   ESettingsDOF__XYPlane = 3,
   ESettingsDOF__ESettingsDOF_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
