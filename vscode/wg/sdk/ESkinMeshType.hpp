#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESkinMeshType
{
   ESkinMeshType__SkeletalMesh = 0,
   ESkinMeshType__AsyncStaticMesh = 1,
   ESkinMeshType__StaticMesh = 2,
   ESkinMeshType__ESkinMeshType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
