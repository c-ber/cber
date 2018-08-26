#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETwitterIntegrationDelegate
{
   TID_AuthorizeComplete = 0,
   TID_TweetUIComplete = 1,
   TID_RequestComplete = 2,
   TID_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
