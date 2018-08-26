#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFastArraySerializerItem // Size: 0xC
{
public:
    int32_t ReplicationID; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.FastArraySerializerItem.ReplicationID */
    int32_t ReplicationKey; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.FastArraySerializerItem.ReplicationKey */
    int32_t MostRecentArrayReplicationKey; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.FastArraySerializerItem.MostRecentArrayReplicationKey */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFastArraySerializerItem = sizeof(FFastArraySerializerItem); // 12
    static_assert(sizeof(FFastArraySerializerItem) == 0xC, "Size of FFastArraySerializerItem is not correct.");
	auto constexpr FFastArraySerializerItem_ReplicationID_Offset = offsetof(FFastArraySerializerItem, ReplicationID);
	static_assert(FFastArraySerializerItem_ReplicationID_Offset == 0x0, "FFastArraySerializerItem::ReplicationID offset is not 0");
	auto constexpr FFastArraySerializerItem_ReplicationKey_Offset = offsetof(FFastArraySerializerItem, ReplicationKey);
	static_assert(FFastArraySerializerItem_ReplicationKey_Offset == 0x4, "FFastArraySerializerItem::ReplicationKey offset is not 4");
	auto constexpr FFastArraySerializerItem_MostRecentArrayReplicationKey_Offset = offsetof(FFastArraySerializerItem, MostRecentArrayReplicationKey);
	static_assert(FFastArraySerializerItem_MostRecentArrayReplicationKey_Offset == 0x8, "FFastArraySerializerItem::MostRecentArrayReplicationKey offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
