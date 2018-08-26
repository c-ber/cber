#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPoseLinkBase // Size: 0x18
{
public:
    int32_t LinkID; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.PoseLinkBase.LinkID */
    uint8_t UnknownData4[0x14];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPoseLinkBase = sizeof(FPoseLinkBase); // 24
    static_assert(sizeof(FPoseLinkBase) == 0x18, "Size of FPoseLinkBase is not correct.");
	auto constexpr FPoseLinkBase_LinkID_Offset = offsetof(FPoseLinkBase, LinkID);
	static_assert(FPoseLinkBase_LinkID_Offset == 0x0, "FPoseLinkBase::LinkID offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
