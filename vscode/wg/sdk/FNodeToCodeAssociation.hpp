#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNodeToCodeAssociation // Size: 0x14
{
public:
    uint8_t UnknownData0[0x14];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNodeToCodeAssociation = sizeof(FNodeToCodeAssociation); // 20
    static_assert(sizeof(FNodeToCodeAssociation) == 0x14, "Size of FNodeToCodeAssociation is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
