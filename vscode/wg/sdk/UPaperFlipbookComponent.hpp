#pragma once
#include "UMeshComponent.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperFlipbookComponent // Size: 0xA40
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UPaperFlipbookComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2026); // id32("Class Paper2D.PaperFlipbookComponent")
		return ptr;
	}
	ExternalPtr<struct UPaperFlipbook> SourceFlipbook; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty Paper2D.PaperFlipbookComponent.SourceFlipbook */
	ExternalPtr<struct UMaterialInterface> Material; /* Ofs: 0x9F8 Size: 0x8 - ObjectProperty Paper2D.PaperFlipbookComponent.Material */
	float PlayRate; /* Ofs: 0xA00 Size: 0x4 - FloatProperty Paper2D.PaperFlipbookComponent.PlayRate */
	uint8_t boolFieldA04;
	uint8_t UnknownDataA05[0x3];
	float AccumulatedTime; /* Ofs: 0xA08 Size: 0x4 - FloatProperty Paper2D.PaperFlipbookComponent.AccumulatedTime */
	int32_t CachedFrameIndex; /* Ofs: 0xA0C Size: 0x4 - IntProperty Paper2D.PaperFlipbookComponent.CachedFrameIndex */
	FLinearColor SpriteColor; /* Ofs: 0xA10 Size: 0x10 - StructProperty Paper2D.PaperFlipbookComponent.SpriteColor */
	ExternalPtr<struct UBodySetup> CachedBodySetup; /* Ofs: 0xA20 Size: 0x8 - ObjectProperty Paper2D.PaperFlipbookComponent.CachedBodySetup */
	FScriptMulticastDelegate OnFinishedPlaying; /* Ofs: 0xA28 Size: 0x10 - MulticastDelegateProperty Paper2D.PaperFlipbookComponent.OnFinishedPlaying */
	uint8_t UnknownDataA38[0x8];


	inline bool SetSourceFlipbook(t_structHelper inst, ExternalPtr<struct UPaperFlipbook> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetPlayRate(t_structHelper inst, float value) { inst.WriteOffset(0xA00, value); }
	inline bool bLooping()
	{
		return boolFieldA04& 0x1;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA04, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bReversePlayback()
	{
		return boolFieldA04& 0x2;
	}
	inline bool SetbReversePlayback(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA04, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bPlaying()
	{
		return boolFieldA04& 0x4;
	}
	inline bool SetbPlaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA04, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetAccumulatedTime(t_structHelper inst, float value) { inst.WriteOffset(0xA08, value); }
	inline bool SetCachedFrameIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA0C, value); }
	inline bool SetSpriteColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xA10, value); }
	inline bool SetCachedBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0xA20, value); }
	inline bool SetOnFinishedPlaying(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xA28, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperFlipbookComponent = sizeof(UPaperFlipbookComponent); // 2624
    static_assert(sizeof(UPaperFlipbookComponent) == 0xA40, "Size of UPaperFlipbookComponent is not correct.");
	auto constexpr UPaperFlipbookComponent_SourceFlipbook_Offset = offsetof(UPaperFlipbookComponent, SourceFlipbook);
	static_assert(UPaperFlipbookComponent_SourceFlipbook_Offset == 0x9f0, "UPaperFlipbookComponent::SourceFlipbook offset is not 9f0");
	auto constexpr UPaperFlipbookComponent_Material_Offset = offsetof(UPaperFlipbookComponent, Material);
	static_assert(UPaperFlipbookComponent_Material_Offset == 0x9f8, "UPaperFlipbookComponent::Material offset is not 9f8");
	auto constexpr UPaperFlipbookComponent_PlayRate_Offset = offsetof(UPaperFlipbookComponent, PlayRate);
	static_assert(UPaperFlipbookComponent_PlayRate_Offset == 0xa00, "UPaperFlipbookComponent::PlayRate offset is not a00");
	auto constexpr UPaperFlipbookComponent_boolFieldA04_Offset = offsetof(UPaperFlipbookComponent, boolFieldA04);
	static_assert(UPaperFlipbookComponent_boolFieldA04_Offset == 0xa04, "UPaperFlipbookComponent::boolFieldA04 offset is not a04");
	auto constexpr UPaperFlipbookComponent_AccumulatedTime_Offset = offsetof(UPaperFlipbookComponent, AccumulatedTime);
	static_assert(UPaperFlipbookComponent_AccumulatedTime_Offset == 0xa08, "UPaperFlipbookComponent::AccumulatedTime offset is not a08");
	auto constexpr UPaperFlipbookComponent_CachedFrameIndex_Offset = offsetof(UPaperFlipbookComponent, CachedFrameIndex);
	static_assert(UPaperFlipbookComponent_CachedFrameIndex_Offset == 0xa0c, "UPaperFlipbookComponent::CachedFrameIndex offset is not a0c");
	auto constexpr UPaperFlipbookComponent_SpriteColor_Offset = offsetof(UPaperFlipbookComponent, SpriteColor);
	static_assert(UPaperFlipbookComponent_SpriteColor_Offset == 0xa10, "UPaperFlipbookComponent::SpriteColor offset is not a10");
	auto constexpr UPaperFlipbookComponent_CachedBodySetup_Offset = offsetof(UPaperFlipbookComponent, CachedBodySetup);
	static_assert(UPaperFlipbookComponent_CachedBodySetup_Offset == 0xa20, "UPaperFlipbookComponent::CachedBodySetup offset is not a20");
	auto constexpr UPaperFlipbookComponent_OnFinishedPlaying_Offset = offsetof(UPaperFlipbookComponent, OnFinishedPlaying);
	static_assert(UPaperFlipbookComponent_OnFinishedPlaying_Offset == 0xa28, "UPaperFlipbookComponent::OnFinishedPlaying offset is not a28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
