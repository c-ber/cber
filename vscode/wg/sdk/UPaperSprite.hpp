#pragma once
#include "FVector2D.hpp"
#include "ESpriteCollisionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperSprite // Size: 0xC8
	: public UObject // Size: 0x30
{
private:
	typedef UPaperSprite t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2030); // id32("Class Paper2D.PaperSprite")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	FVector2D SourceUV; /* Ofs: 0x40 Size: 0x8 - StructProperty Paper2D.PaperSprite.SourceUV */
	FVector2D SourceDimension; /* Ofs: 0x48 Size: 0x8 - StructProperty Paper2D.PaperSprite.SourceDimension */
	ExternalPtr<struct UTexture2D> SourceTexture; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Paper2D.PaperSprite.SourceTexture */
	TArray<ExternalPtr<struct UTexture>> AdditionalSourceTextures; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Paper2D.PaperSprite.AdditionalSourceTextures */
	FVector2D BakedSourceUV; /* Ofs: 0x68 Size: 0x8 - StructProperty Paper2D.PaperSprite.BakedSourceUV */
	FVector2D BakedSourceDimension; /* Ofs: 0x70 Size: 0x8 - StructProperty Paper2D.PaperSprite.BakedSourceDimension */
	ExternalPtr<struct UTexture2D> BakedSourceTexture; /* Ofs: 0x78 Size: 0x8 - ObjectProperty Paper2D.PaperSprite.BakedSourceTexture */
	ExternalPtr<struct UMaterialInterface> DefaultMaterial; /* Ofs: 0x80 Size: 0x8 - ObjectProperty Paper2D.PaperSprite.DefaultMaterial */
	ExternalPtr<struct UMaterialInterface> AlternateMaterial; /* Ofs: 0x88 Size: 0x8 - ObjectProperty Paper2D.PaperSprite.AlternateMaterial */
	TArray<struct FPaperSpriteSocket> Sockets; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Paper2D.PaperSprite.Sockets */
	TEnumAsByte<enum ESpriteCollisionMode> SpriteCollisionDomain; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Paper2D.PaperSprite.SpriteCollisionDomain */
	uint8_t UnknownDataA1[0x3];
	float PixelsPerUnrealUnit; /* Ofs: 0xA4 Size: 0x4 - FloatProperty Paper2D.PaperSprite.PixelsPerUnrealUnit */
	ExternalPtr<struct UBodySetup> BodySetup; /* Ofs: 0xA8 Size: 0x8 - ObjectProperty Paper2D.PaperSprite.BodySetup */
	int32_t AlternateMaterialSplitIndex; /* Ofs: 0xB0 Size: 0x4 - IntProperty Paper2D.PaperSprite.AlternateMaterialSplitIndex */
	uint8_t UnknownDataB4[0x4];
	TArray<struct FVector4> BakedRenderData; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty Paper2D.PaperSprite.BakedRenderData */


	inline bool SetSourceUV(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x40, value); }
	inline bool SetSourceDimension(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x48, value); }
	inline bool SetSourceTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x50, value); }
	inline bool SetAdditionalSourceTextures(t_structHelper inst, TArray<ExternalPtr<struct UTexture>> value) { inst.WriteOffset(0x58, value); }
	inline bool SetBakedSourceUV(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x68, value); }
	inline bool SetBakedSourceDimension(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x70, value); }
	inline bool SetBakedSourceTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x78, value); }
	inline bool SetDefaultMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x80, value); }
	inline bool SetAlternateMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x88, value); }
	inline bool SetSockets(t_structHelper inst, TArray<struct FPaperSpriteSocket> value) { inst.WriteOffset(0x90, value); }
	inline bool SetSpriteCollisionDomain(t_structHelper inst, TEnumAsByte<enum ESpriteCollisionMode> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetPixelsPerUnrealUnit(t_structHelper inst, float value) { inst.WriteOffset(0xA4, value); }
	inline bool SetBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetAlternateMaterialSplitIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB0, value); }
	inline bool SetBakedRenderData(t_structHelper inst, TArray<struct FVector4> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperSprite = sizeof(UPaperSprite); // 200
    static_assert(sizeof(UPaperSprite) == 0xC8, "Size of UPaperSprite is not correct.");
	auto constexpr UPaperSprite_SourceUV_Offset = offsetof(UPaperSprite, SourceUV);
	static_assert(UPaperSprite_SourceUV_Offset == 0x40, "UPaperSprite::SourceUV offset is not 40");
	auto constexpr UPaperSprite_SourceDimension_Offset = offsetof(UPaperSprite, SourceDimension);
	static_assert(UPaperSprite_SourceDimension_Offset == 0x48, "UPaperSprite::SourceDimension offset is not 48");
	auto constexpr UPaperSprite_SourceTexture_Offset = offsetof(UPaperSprite, SourceTexture);
	static_assert(UPaperSprite_SourceTexture_Offset == 0x50, "UPaperSprite::SourceTexture offset is not 50");
	auto constexpr UPaperSprite_AdditionalSourceTextures_Offset = offsetof(UPaperSprite, AdditionalSourceTextures);
	static_assert(UPaperSprite_AdditionalSourceTextures_Offset == 0x58, "UPaperSprite::AdditionalSourceTextures offset is not 58");
	auto constexpr UPaperSprite_BakedSourceUV_Offset = offsetof(UPaperSprite, BakedSourceUV);
	static_assert(UPaperSprite_BakedSourceUV_Offset == 0x68, "UPaperSprite::BakedSourceUV offset is not 68");
	auto constexpr UPaperSprite_BakedSourceDimension_Offset = offsetof(UPaperSprite, BakedSourceDimension);
	static_assert(UPaperSprite_BakedSourceDimension_Offset == 0x70, "UPaperSprite::BakedSourceDimension offset is not 70");
	auto constexpr UPaperSprite_BakedSourceTexture_Offset = offsetof(UPaperSprite, BakedSourceTexture);
	static_assert(UPaperSprite_BakedSourceTexture_Offset == 0x78, "UPaperSprite::BakedSourceTexture offset is not 78");
	auto constexpr UPaperSprite_DefaultMaterial_Offset = offsetof(UPaperSprite, DefaultMaterial);
	static_assert(UPaperSprite_DefaultMaterial_Offset == 0x80, "UPaperSprite::DefaultMaterial offset is not 80");
	auto constexpr UPaperSprite_AlternateMaterial_Offset = offsetof(UPaperSprite, AlternateMaterial);
	static_assert(UPaperSprite_AlternateMaterial_Offset == 0x88, "UPaperSprite::AlternateMaterial offset is not 88");
	auto constexpr UPaperSprite_Sockets_Offset = offsetof(UPaperSprite, Sockets);
	static_assert(UPaperSprite_Sockets_Offset == 0x90, "UPaperSprite::Sockets offset is not 90");
	auto constexpr UPaperSprite_SpriteCollisionDomain_Offset = offsetof(UPaperSprite, SpriteCollisionDomain);
	static_assert(UPaperSprite_SpriteCollisionDomain_Offset == 0xa0, "UPaperSprite::SpriteCollisionDomain offset is not a0");
	auto constexpr UPaperSprite_PixelsPerUnrealUnit_Offset = offsetof(UPaperSprite, PixelsPerUnrealUnit);
	static_assert(UPaperSprite_PixelsPerUnrealUnit_Offset == 0xa4, "UPaperSprite::PixelsPerUnrealUnit offset is not a4");
	auto constexpr UPaperSprite_BodySetup_Offset = offsetof(UPaperSprite, BodySetup);
	static_assert(UPaperSprite_BodySetup_Offset == 0xa8, "UPaperSprite::BodySetup offset is not a8");
	auto constexpr UPaperSprite_AlternateMaterialSplitIndex_Offset = offsetof(UPaperSprite, AlternateMaterialSplitIndex);
	static_assert(UPaperSprite_AlternateMaterialSplitIndex_Offset == 0xb0, "UPaperSprite::AlternateMaterialSplitIndex offset is not b0");
	auto constexpr UPaperSprite_BakedRenderData_Offset = offsetof(UPaperSprite, BakedRenderData);
	static_assert(UPaperSprite_BakedRenderData_Offset == 0xb8, "UPaperSprite::BakedRenderData offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
