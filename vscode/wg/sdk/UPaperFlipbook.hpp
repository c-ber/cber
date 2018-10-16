#pragma once
#include "EFlipbookCollisionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperFlipbook // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UPaperFlipbook t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2024); // id32("Class Paper2D.PaperFlipbook")
		return ptr;
	}
	float FramesPerSecond; /* Ofs: 0x30 Size: 0x4 - FloatProperty Paper2D.PaperFlipbook.FramesPerSecond */
	uint8_t UnknownData34[0x4];
	TArray<struct FPaperFlipbookKeyFrame> KeyFrames; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Paper2D.PaperFlipbook.KeyFrames */
	ExternalPtr<struct UMaterialInterface> DefaultMaterial; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Paper2D.PaperFlipbook.DefaultMaterial */
	TEnumAsByte<enum EFlipbookCollisionMode> CollisionSource; /* Ofs: 0x50 Size: 0x1 - ByteProperty Paper2D.PaperFlipbook.CollisionSource */
	uint8_t UnknownData51[0x7];


	inline bool SetFramesPerSecond(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetKeyFrames(t_structHelper inst, TArray<struct FPaperFlipbookKeyFrame> value) { inst.WriteOffset(0x38, value); }
	inline bool SetDefaultMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x48, value); }
	inline bool SetCollisionSource(t_structHelper inst, TEnumAsByte<enum EFlipbookCollisionMode> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperFlipbook = sizeof(UPaperFlipbook); // 88
    static_assert(sizeof(UPaperFlipbook) == 0x58, "Size of UPaperFlipbook is not correct.");
	auto constexpr UPaperFlipbook_FramesPerSecond_Offset = offsetof(UPaperFlipbook, FramesPerSecond);
	static_assert(UPaperFlipbook_FramesPerSecond_Offset == 0x30, "UPaperFlipbook::FramesPerSecond offset is not 30");
	auto constexpr UPaperFlipbook_KeyFrames_Offset = offsetof(UPaperFlipbook, KeyFrames);
	static_assert(UPaperFlipbook_KeyFrames_Offset == 0x38, "UPaperFlipbook::KeyFrames offset is not 38");
	auto constexpr UPaperFlipbook_DefaultMaterial_Offset = offsetof(UPaperFlipbook, DefaultMaterial);
	static_assert(UPaperFlipbook_DefaultMaterial_Offset == 0x48, "UPaperFlipbook::DefaultMaterial offset is not 48");
	auto constexpr UPaperFlipbook_CollisionSource_Offset = offsetof(UPaperFlipbook, CollisionSource);
	static_assert(UPaperFlipbook_CollisionSource_Offset == 0x50, "UPaperFlipbook::CollisionSource offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
