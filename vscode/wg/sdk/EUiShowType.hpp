#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EUiShowType
{
   EUiShowType__AlwaysShow = 0,
   EUiShowType__TpsOnlyShow = 1,
   EUiShowType__FpsOnlyShow = 2,
   EUiShowType__AlwaysHide = 3,
   EUiShowType__EUiShowType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
