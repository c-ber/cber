#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETslParticleCullType
{
   ETslParticleCullType__None = 0,
   ETslParticleCullType__Distance = 1,
   ETslParticleCullType__Frustum = 2,
   ETslParticleCullType__LastRenderedTime = 4,
   ETslParticleCullType__All = 15,
   ETslParticleCullType__ETslParticleCullType_MAX = 16,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
