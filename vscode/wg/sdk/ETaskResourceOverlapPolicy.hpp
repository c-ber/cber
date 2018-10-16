#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETaskResourceOverlapPolicy
{
   ETaskResourceOverlapPolicy__StartOnTop = 0,
   ETaskResourceOverlapPolicy__StartAtEnd = 1,
   ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
