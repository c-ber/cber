#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundNodeEditorData // Size: 0x8
{
public:
    uint8_t UnknownData0[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundNodeEditorData = sizeof(FSoundNodeEditorData); // 8
    static_assert(sizeof(FSoundNodeEditorData) == 0x8, "Size of FSoundNodeEditorData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
