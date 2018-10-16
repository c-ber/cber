#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBeamModifierOptions // Size: 0x4
{
public:
    bool bModify : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.BeamModifierOptions.bModify */
    bool bScale : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.BeamModifierOptions.bScale */
    bool bLock : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.BeamModifierOptions.bLock */
    uint8_t UnknownData1[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBeamModifierOptions = sizeof(FBeamModifierOptions); // 4
    static_assert(sizeof(FBeamModifierOptions) == 0x4, "Size of FBeamModifierOptions is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
