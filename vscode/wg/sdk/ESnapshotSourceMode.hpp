#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESnapshotSourceMode
{
   ESnapshotSourceMode__NamedSnapshot = 0,
   ESnapshotSourceMode__SnapshotPin = 1,
   ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
