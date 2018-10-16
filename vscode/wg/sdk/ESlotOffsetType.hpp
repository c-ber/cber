#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESlotOffsetType
{
   ESlotOffsetType__NoOffset = 0,
   ESlotOffsetType__BagLevel1 = 1,
   ESlotOffsetType__BagLevel2 = 2,
   ESlotOffsetType__BagLevel3 = 3,
   ESlotOffsetType__ESlotOffsetType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
