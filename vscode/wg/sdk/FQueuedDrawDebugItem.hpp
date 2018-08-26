#pragma once
#include "EDrawDebugItemType.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"
#include "FColor.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FQueuedDrawDebugItem // Size: 0x68
{
public:
    TEnumAsByte<enum EDrawDebugItemType> ItemType; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.QueuedDrawDebugItem.ItemType */
    uint8_t UnknownData1[0x3];
    FVector StartLoc; /* Ofs: 0x4 Size: 0xC StructProperty Engine.QueuedDrawDebugItem.StartLoc */
    FVector EndLoc; /* Ofs: 0x10 Size: 0xC StructProperty Engine.QueuedDrawDebugItem.EndLoc */
    FVector Center; /* Ofs: 0x1C Size: 0xC StructProperty Engine.QueuedDrawDebugItem.Center */
    FRotator Rotation; /* Ofs: 0x28 Size: 0xC StructProperty Engine.QueuedDrawDebugItem.Rotation */
    float Radius; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.QueuedDrawDebugItem.Radius */
    float Size; /* Ofs: 0x38 Size: 0x4 FloatProperty Engine.QueuedDrawDebugItem.Size */
    int32_t Segments; /* Ofs: 0x3C Size: 0x4 IntProperty Engine.QueuedDrawDebugItem.Segments */
    FColor Color; /* Ofs: 0x40 Size: 0x4 StructProperty Engine.QueuedDrawDebugItem.Color */
    bool bPersistentLines; /* Ofs: 0x44 Size: 0x1 BitMask: 01 BoolProperty Engine.QueuedDrawDebugItem.bPersistentLines */
    uint8_t UnknownData45[0x3];
    float LifeTime; /* Ofs: 0x48 Size: 0x4 FloatProperty Engine.QueuedDrawDebugItem.LifeTime */
    float Thickness; /* Ofs: 0x4C Size: 0x4 FloatProperty Engine.QueuedDrawDebugItem.Thickness */
    FString Message; /* Ofs: 0x50 Size: 0x10 StrProperty Engine.QueuedDrawDebugItem.Message */
    FVector2D TextScale; /* Ofs: 0x60 Size: 0x8 StructProperty Engine.QueuedDrawDebugItem.TextScale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFQueuedDrawDebugItem = sizeof(FQueuedDrawDebugItem); // 104
    static_assert(sizeof(FQueuedDrawDebugItem) == 0x68, "Size of FQueuedDrawDebugItem is not correct.");
	auto constexpr FQueuedDrawDebugItem_ItemType_Offset = offsetof(FQueuedDrawDebugItem, ItemType);
	static_assert(FQueuedDrawDebugItem_ItemType_Offset == 0x0, "FQueuedDrawDebugItem::ItemType offset is not 0");
	auto constexpr FQueuedDrawDebugItem_StartLoc_Offset = offsetof(FQueuedDrawDebugItem, StartLoc);
	static_assert(FQueuedDrawDebugItem_StartLoc_Offset == 0x4, "FQueuedDrawDebugItem::StartLoc offset is not 4");
	auto constexpr FQueuedDrawDebugItem_EndLoc_Offset = offsetof(FQueuedDrawDebugItem, EndLoc);
	static_assert(FQueuedDrawDebugItem_EndLoc_Offset == 0x10, "FQueuedDrawDebugItem::EndLoc offset is not 10");
	auto constexpr FQueuedDrawDebugItem_Center_Offset = offsetof(FQueuedDrawDebugItem, Center);
	static_assert(FQueuedDrawDebugItem_Center_Offset == 0x1c, "FQueuedDrawDebugItem::Center offset is not 1c");
	auto constexpr FQueuedDrawDebugItem_Rotation_Offset = offsetof(FQueuedDrawDebugItem, Rotation);
	static_assert(FQueuedDrawDebugItem_Rotation_Offset == 0x28, "FQueuedDrawDebugItem::Rotation offset is not 28");
	auto constexpr FQueuedDrawDebugItem_Radius_Offset = offsetof(FQueuedDrawDebugItem, Radius);
	static_assert(FQueuedDrawDebugItem_Radius_Offset == 0x34, "FQueuedDrawDebugItem::Radius offset is not 34");
	auto constexpr FQueuedDrawDebugItem_Size_Offset = offsetof(FQueuedDrawDebugItem, Size);
	static_assert(FQueuedDrawDebugItem_Size_Offset == 0x38, "FQueuedDrawDebugItem::Size offset is not 38");
	auto constexpr FQueuedDrawDebugItem_Segments_Offset = offsetof(FQueuedDrawDebugItem, Segments);
	static_assert(FQueuedDrawDebugItem_Segments_Offset == 0x3c, "FQueuedDrawDebugItem::Segments offset is not 3c");
	auto constexpr FQueuedDrawDebugItem_Color_Offset = offsetof(FQueuedDrawDebugItem, Color);
	static_assert(FQueuedDrawDebugItem_Color_Offset == 0x40, "FQueuedDrawDebugItem::Color offset is not 40");
	auto constexpr FQueuedDrawDebugItem_LifeTime_Offset = offsetof(FQueuedDrawDebugItem, LifeTime);
	static_assert(FQueuedDrawDebugItem_LifeTime_Offset == 0x48, "FQueuedDrawDebugItem::LifeTime offset is not 48");
	auto constexpr FQueuedDrawDebugItem_Thickness_Offset = offsetof(FQueuedDrawDebugItem, Thickness);
	static_assert(FQueuedDrawDebugItem_Thickness_Offset == 0x4c, "FQueuedDrawDebugItem::Thickness offset is not 4c");
	auto constexpr FQueuedDrawDebugItem_Message_Offset = offsetof(FQueuedDrawDebugItem, Message);
	static_assert(FQueuedDrawDebugItem_Message_Offset == 0x50, "FQueuedDrawDebugItem::Message offset is not 50");
	auto constexpr FQueuedDrawDebugItem_TextScale_Offset = offsetof(FQueuedDrawDebugItem, TextScale);
	static_assert(FQueuedDrawDebugItem_TextScale_Offset == 0x60, "FQueuedDrawDebugItem::TextScale offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
