#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETslPhysMaterialType
{
   ETslPhysMaterialType__Unknown = 0,
   ETslPhysMaterialType__Concrete = 1,
   ETslPhysMaterialType__Dirt = 2,
   ETslPhysMaterialType__Water = 3,
   ETslPhysMaterialType__Metal = 4,
   ETslPhysMaterialType__Wood = 5,
   ETslPhysMaterialType__Grass = 6,
   ETslPhysMaterialType__Glass = 7,
   ETslPhysMaterialType__Flesh = 8,
   ETslPhysMaterialType__ETslPhysMaterialType_MAX = 9,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
