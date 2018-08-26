#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpEdSelKey // Size: 0x18
{
public:
    ExternalPtr<struct UInterpGroup> Group; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.InterpEdSelKey.Group */
    ExternalPtr<struct UInterpTrack> Track; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.InterpEdSelKey.Track */
    int32_t KeyIndex; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.InterpEdSelKey.KeyIndex */
    float UnsnappedPosition; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.InterpEdSelKey.UnsnappedPosition */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpEdSelKey = sizeof(FInterpEdSelKey); // 24
    static_assert(sizeof(FInterpEdSelKey) == 0x18, "Size of FInterpEdSelKey is not correct.");
	auto constexpr FInterpEdSelKey_Group_Offset = offsetof(FInterpEdSelKey, Group);
	static_assert(FInterpEdSelKey_Group_Offset == 0x0, "FInterpEdSelKey::Group offset is not 0");
	auto constexpr FInterpEdSelKey_Track_Offset = offsetof(FInterpEdSelKey, Track);
	static_assert(FInterpEdSelKey_Track_Offset == 0x8, "FInterpEdSelKey::Track offset is not 8");
	auto constexpr FInterpEdSelKey_KeyIndex_Offset = offsetof(FInterpEdSelKey, KeyIndex);
	static_assert(FInterpEdSelKey_KeyIndex_Offset == 0x10, "FInterpEdSelKey::KeyIndex offset is not 10");
	auto constexpr FInterpEdSelKey_UnsnappedPosition_Offset = offsetof(FInterpEdSelKey, UnsnappedPosition);
	static_assert(FInterpEdSelKey_UnsnappedPosition_Offset == 0x14, "FInterpEdSelKey::UnsnappedPosition offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
