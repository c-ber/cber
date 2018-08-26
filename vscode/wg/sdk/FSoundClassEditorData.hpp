#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundClassEditorData // Size: 0x8
{
public:
    uint8_t UnknownData0[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundClassEditorData = sizeof(FSoundClassEditorData); // 8
    static_assert(sizeof(FSoundClassEditorData) == 0x8, "Size of FSoundClassEditorData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
