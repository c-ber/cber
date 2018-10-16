#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FWidgetTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHudAlwaysOn_C // Size: 0x29A
	: public UUserWidget // Size: 0x248
{
private:
	typedef UHudAlwaysOn_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69092); // id32("WidgetBlueprintGeneratedClass HudAlwaysOn.HudAlwaysOn_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty HudAlwaysOn.HudAlwaysOn_C.UberGraphFrame */
	ExternalPtr<struct UTslHUD> refHUD; /* Ofs: 0x250 Size: 0x8 - ObjectProperty HudAlwaysOn.HudAlwaysOn_C.refHUD */
	ExternalPtr<struct UTslCharacter> CachedCharacter; /* Ofs: 0x258 Size: 0x8 - ObjectProperty HudAlwaysOn.HudAlwaysOn_C.CachedCharacter */
	FWidgetTransform CharacterInfoDownPos; /* Ofs: 0x260 Size: 0x1C - StructProperty HudAlwaysOn.HudAlwaysOn_C.CharacterInfoDownPos */
	FWidgetTransform CharacterInfoUpPos; /* Ofs: 0x27C Size: 0x1C - StructProperty HudAlwaysOn.HudAlwaysOn_C.CharacterInfoUpPos */
	uint8_t boolField298;
	uint8_t boolField299;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetrefHUD(t_structHelper inst, ExternalPtr<struct UTslHUD> value) { inst.WriteOffset(0x250, value); }
	inline bool SetCachedCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x258, value); }
	inline bool SetCharacterInfoDownPos(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x260, value); }
	inline bool SetCharacterInfoUpPos(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x27C, value); }
	inline bool IsFirstConstruct()
	{
		return boolField298& 0x1;
	}
	inline bool SetIsFirstConstruct(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x298, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bObserverTeamList()
	{
		return boolField299& 0x1;
	}
	inline bool SetbObserverTeamList(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x299, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHudAlwaysOn_C = sizeof(UHudAlwaysOn_C); // 666
    static_assert(sizeof(UHudAlwaysOn_C) == 0x29A, "Size of UHudAlwaysOn_C is not correct.");
	auto constexpr UHudAlwaysOn_C_UberGraphFrame_Offset = offsetof(UHudAlwaysOn_C, UberGraphFrame);
	static_assert(UHudAlwaysOn_C_UberGraphFrame_Offset == 0x248, "UHudAlwaysOn_C::UberGraphFrame offset is not 248");
	auto constexpr UHudAlwaysOn_C_refHUD_Offset = offsetof(UHudAlwaysOn_C, refHUD);
	static_assert(UHudAlwaysOn_C_refHUD_Offset == 0x250, "UHudAlwaysOn_C::refHUD offset is not 250");
	auto constexpr UHudAlwaysOn_C_CachedCharacter_Offset = offsetof(UHudAlwaysOn_C, CachedCharacter);
	static_assert(UHudAlwaysOn_C_CachedCharacter_Offset == 0x258, "UHudAlwaysOn_C::CachedCharacter offset is not 258");
	auto constexpr UHudAlwaysOn_C_CharacterInfoDownPos_Offset = offsetof(UHudAlwaysOn_C, CharacterInfoDownPos);
	static_assert(UHudAlwaysOn_C_CharacterInfoDownPos_Offset == 0x260, "UHudAlwaysOn_C::CharacterInfoDownPos offset is not 260");
	auto constexpr UHudAlwaysOn_C_CharacterInfoUpPos_Offset = offsetof(UHudAlwaysOn_C, CharacterInfoUpPos);
	static_assert(UHudAlwaysOn_C_CharacterInfoUpPos_Offset == 0x27c, "UHudAlwaysOn_C::CharacterInfoUpPos offset is not 27c");
	auto constexpr UHudAlwaysOn_C_boolField298_Offset = offsetof(UHudAlwaysOn_C, boolField298);
	static_assert(UHudAlwaysOn_C_boolField298_Offset == 0x298, "UHudAlwaysOn_C::boolField298 offset is not 298");
	auto constexpr UHudAlwaysOn_C_boolField299_Offset = offsetof(UHudAlwaysOn_C, boolField299);
	static_assert(UHudAlwaysOn_C_boolField299_Offset == 0x299, "UHudAlwaysOn_C::boolField299 offset is not 299");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
