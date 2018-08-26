#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelSequenceObjectReferenceMap // Size: 0x50
{
public:
    uint8_t UnknownData0[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelSequenceObjectReferenceMap = sizeof(FLevelSequenceObjectReferenceMap); // 80
    static_assert(sizeof(FLevelSequenceObjectReferenceMap) == 0x50, "Size of FLevelSequenceObjectReferenceMap is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
