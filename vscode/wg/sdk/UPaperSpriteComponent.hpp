#pragma once
#include "UMeshComponent.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperSpriteComponent // Size: 0xA10
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UPaperSpriteComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2034); // id32("Class Paper2D.PaperSpriteComponent")
		return ptr;
	}
	ExternalPtr<struct UPaperSprite> SourceSprite; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty Paper2D.PaperSpriteComponent.SourceSprite */
	ExternalPtr<struct UMaterialInterface> MaterialOverride; /* Ofs: 0x9F8 Size: 0x8 - ObjectProperty Paper2D.PaperSpriteComponent.MaterialOverride */
	FLinearColor SpriteColor; /* Ofs: 0xA00 Size: 0x10 - StructProperty Paper2D.PaperSpriteComponent.SpriteColor */


	inline bool SetSourceSprite(t_structHelper inst, ExternalPtr<struct UPaperSprite> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetMaterialOverride(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetSpriteColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xA00, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperSpriteComponent = sizeof(UPaperSpriteComponent); // 2576
    static_assert(sizeof(UPaperSpriteComponent) == 0xA10, "Size of UPaperSpriteComponent is not correct.");
	auto constexpr UPaperSpriteComponent_SourceSprite_Offset = offsetof(UPaperSpriteComponent, SourceSprite);
	static_assert(UPaperSpriteComponent_SourceSprite_Offset == 0x9f0, "UPaperSpriteComponent::SourceSprite offset is not 9f0");
	auto constexpr UPaperSpriteComponent_MaterialOverride_Offset = offsetof(UPaperSpriteComponent, MaterialOverride);
	static_assert(UPaperSpriteComponent_MaterialOverride_Offset == 0x9f8, "UPaperSpriteComponent::MaterialOverride offset is not 9f8");
	auto constexpr UPaperSpriteComponent_SpriteColor_Offset = offsetof(UPaperSpriteComponent, SpriteColor);
	static_assert(UPaperSpriteComponent_SpriteColor_Offset == 0xa00, "UPaperSpriteComponent::SpriteColor offset is not a00");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
