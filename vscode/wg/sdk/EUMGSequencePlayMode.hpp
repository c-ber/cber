#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EUMGSequencePlayMode
{
   EUMGSequencePlayMode__Forward = 0,
   EUMGSequencePlayMode__Reverse = 1,
   EUMGSequencePlayMode__PingPong = 2,
   EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
