#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaperFlipbookKeyFrame // Size: 0x10
{
public:
    ExternalPtr<struct UPaperSprite> Sprite; /* Ofs: 0x0 Size: 0x8 ObjectProperty Paper2D.PaperFlipbookKeyFrame.Sprite */
    int32_t FrameRun; /* Ofs: 0x8 Size: 0x4 IntProperty Paper2D.PaperFlipbookKeyFrame.FrameRun */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaperFlipbookKeyFrame = sizeof(FPaperFlipbookKeyFrame); // 16
    static_assert(sizeof(FPaperFlipbookKeyFrame) == 0x10, "Size of FPaperFlipbookKeyFrame is not correct.");
	auto constexpr FPaperFlipbookKeyFrame_Sprite_Offset = offsetof(FPaperFlipbookKeyFrame, Sprite);
	static_assert(FPaperFlipbookKeyFrame_Sprite_Offset == 0x0, "FPaperFlipbookKeyFrame::Sprite offset is not 0");
	auto constexpr FPaperFlipbookKeyFrame_FrameRun_Offset = offsetof(FPaperFlipbookKeyFrame, FrameRun);
	static_assert(FPaperFlipbookKeyFrame_FrameRun_Offset == 0x8, "FPaperFlipbookKeyFrame::FrameRun offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
