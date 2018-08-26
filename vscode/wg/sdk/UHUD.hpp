#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHUD // Size: 0x4F0
	: public UActor // Size: 0x410
{
private:
	typedef UHUD t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(404); // id32("Class Engine.HUD")
		return ptr;
	}
//	ExternalPtr<struct UPlayerController> PlayerOwner; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.HUD.PlayerOwner */
	uint8_t boolField410;
	uint8_t UnknownData411[0x7];
	TArray<ExternalPtr<struct UActor>> PostRenderedActors; /* Ofs: 0x418 Size: 0x10 - ArrayProperty Engine.HUD.PostRenderedActors */
	uint8_t UnknownData428[0x8];
	TArray<struct FName> DebugDisplay; /* Ofs: 0x430 Size: 0x10 - ArrayProperty Engine.HUD.DebugDisplay */
	TArray<struct FName> ToggledDebugCategories; /* Ofs: 0x440 Size: 0x10 - ArrayProperty Engine.HUD.ToggledDebugCategories */
	ExternalPtr<struct UCanvas> Canvas; /* Ofs: 0x450 Size: 0x8 - ObjectProperty Engine.HUD.Canvas */
	ExternalPtr<struct UCanvas> DebugCanvas; /* Ofs: 0x458 Size: 0x8 - ObjectProperty Engine.HUD.DebugCanvas */
	TArray<struct FDebugTextInfo> DebugTextList; /* Ofs: 0x460 Size: 0x10 - ArrayProperty Engine.HUD.DebugTextList */
	ExternalPtr<struct UClass> ShowDebugTargetDesiredClass; /* Ofs: 0x470 Size: 0x8 - ClassProperty Engine.HUD.ShowDebugTargetDesiredClass */
	ExternalPtr<struct UActor> ShowDebugTargetActor; /* Ofs: 0x478 Size: 0x8 - ObjectProperty Engine.HUD.ShowDebugTargetActor */
	uint8_t UnknownData480[0x70];


//	inline bool SetPlayerOwner(t_structHelper inst, ExternalPtr<struct UPlayerController> value) { inst.WriteOffset(0x408, value); }
	inline bool bLostFocusPaused()
	{
		return boolField410& 0x1;
	}
	inline bool SetbLostFocusPaused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShowHUD()
	{
		return boolField410& 0x2;
	}
	inline bool SetbShowHUD(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bShowDebugInfo()
	{
		return boolField410& 0x4;
	}
	inline bool SetbShowDebugInfo(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bShowHitBoxDebugInfo()
	{
		return boolField410& 0x8;
	}
	inline bool SetbShowHitBoxDebugInfo(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bShowOverlays()
	{
		return boolField410& 0x10;
	}
	inline bool SetbShowOverlays(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bEnableDebugTextShadow()
	{
		return boolField410& 0x20;
	}
	inline bool SetbEnableDebugTextShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetPostRenderedActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x418, value); }
	inline bool SetDebugDisplay(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x430, value); }
	inline bool SetToggledDebugCategories(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x440, value); }
	inline bool SetCanvas(t_structHelper inst, ExternalPtr<struct UCanvas> value) { inst.WriteOffset(0x450, value); }
	inline bool SetDebugCanvas(t_structHelper inst, ExternalPtr<struct UCanvas> value) { inst.WriteOffset(0x458, value); }
	inline bool SetDebugTextList(t_structHelper inst, TArray<struct FDebugTextInfo> value) { inst.WriteOffset(0x460, value); }
	inline bool SetShowDebugTargetDesiredClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x470, value); }
	inline bool SetShowDebugTargetActor(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHUD = sizeof(UHUD); // 1264
    static_assert(sizeof(UHUD) == 0x4F0, "Size of UHUD is not correct.");
//	auto constexpr UHUD_PlayerOwner_Offset = offsetof(UHUD, PlayerOwner);
//	static_assert(UHUD_PlayerOwner_Offset == 0x408, "UHUD::PlayerOwner offset is not 408");
	auto constexpr UHUD_boolField410_Offset = offsetof(UHUD, boolField410);
	static_assert(UHUD_boolField410_Offset == 0x410, "UHUD::boolField410 offset is not 410");
	auto constexpr UHUD_PostRenderedActors_Offset = offsetof(UHUD, PostRenderedActors);
	static_assert(UHUD_PostRenderedActors_Offset == 0x418, "UHUD::PostRenderedActors offset is not 418");
	auto constexpr UHUD_DebugDisplay_Offset = offsetof(UHUD, DebugDisplay);
	static_assert(UHUD_DebugDisplay_Offset == 0x430, "UHUD::DebugDisplay offset is not 430");
	auto constexpr UHUD_ToggledDebugCategories_Offset = offsetof(UHUD, ToggledDebugCategories);
	static_assert(UHUD_ToggledDebugCategories_Offset == 0x440, "UHUD::ToggledDebugCategories offset is not 440");
	auto constexpr UHUD_Canvas_Offset = offsetof(UHUD, Canvas);
	static_assert(UHUD_Canvas_Offset == 0x450, "UHUD::Canvas offset is not 450");
	auto constexpr UHUD_DebugCanvas_Offset = offsetof(UHUD, DebugCanvas);
	static_assert(UHUD_DebugCanvas_Offset == 0x458, "UHUD::DebugCanvas offset is not 458");
	auto constexpr UHUD_DebugTextList_Offset = offsetof(UHUD, DebugTextList);
	static_assert(UHUD_DebugTextList_Offset == 0x460, "UHUD::DebugTextList offset is not 460");
	auto constexpr UHUD_ShowDebugTargetDesiredClass_Offset = offsetof(UHUD, ShowDebugTargetDesiredClass);
	static_assert(UHUD_ShowDebugTargetDesiredClass_Offset == 0x470, "UHUD::ShowDebugTargetDesiredClass offset is not 470");
	auto constexpr UHUD_ShowDebugTargetActor_Offset = offsetof(UHUD, ShowDebugTargetActor);
	static_assert(UHUD_ShowDebugTargetActor_Offset == 0x478, "UHUD::ShowDebugTargetActor offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
