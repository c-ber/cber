#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EUnusedAttributeBehaviour
{
   EUnusedAttributeBehaviour__Copy = 0,
   EUnusedAttributeBehaviour__Zero = 1,
   EUnusedAttributeBehaviour__None = 2,
   EUnusedAttributeBehaviour__MarkInvalid = 3,
   EUnusedAttributeBehaviour__PassThrough = 4,
   EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
