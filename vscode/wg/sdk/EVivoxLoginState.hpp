#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVivoxLoginState
{
   EVivoxLoginState__NotLoggedin = 0,
   EVivoxLoginState__Loggingin = 1,
   EVivoxLoginState__Loggedin = 2,
   EVivoxLoginState__EVivoxLoginState_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
