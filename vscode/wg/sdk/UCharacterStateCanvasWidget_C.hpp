#pragma once
#include "UCharacterStateCanvasBaseWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FWidgetTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterStateCanvasWidget_C // Size: 0x4B4
	: public UCharacterStateCanvasBaseWidget // Size: 0x458
{
private:
	typedef UCharacterStateCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69096); // id32("WidgetBlueprintGeneratedClass CharacterStateCanvasWidget.CharacterStateCanvasWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.UberGraphFrame */
	ExternalPtr<struct URetainerBox> BreathBarRetainerBox; /* Ofs: 0x460 Size: 0x8 - ObjectProperty CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.BreathBarRetainerBox */
	ExternalPtr<struct UCanvasPanel> CharacterStateCanvas; /* Ofs: 0x468 Size: 0x8 - ObjectProperty CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateCanvas */
	ExternalPtr<struct UTslCharacter> CachedCharacter; /* Ofs: 0x470 Size: 0x8 - ObjectProperty CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CachedCharacter */
	uint8_t boolField478;
	uint8_t UnknownData479[0x3];
	FWidgetTransform CharacterStateReplayTimelineInitTransform; /* Ofs: 0x47C Size: 0x1C - StructProperty CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineInitTransform */
	FWidgetTransform CharacterStateReplayTimelineUpTransform; /* Ofs: 0x498 Size: 0x1C - StructProperty CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineUpTransform */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetBreathBarRetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x460, value); }
	inline bool SetCharacterStateCanvas(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x468, value); }
	inline bool SetCachedCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x470, value); }
	inline bool IsFirstConstruct()
	{
		return boolField478& 0x1;
	}
	inline bool SetIsFirstConstruct(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x478, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCharacterStateReplayTimelineInitTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x47C, value); }
	inline bool SetCharacterStateReplayTimelineUpTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterStateCanvasWidget_C = sizeof(UCharacterStateCanvasWidget_C); // 1204
    static_assert(sizeof(UCharacterStateCanvasWidget_C) == 0x4B4, "Size of UCharacterStateCanvasWidget_C is not correct.");
	auto constexpr UCharacterStateCanvasWidget_C_UberGraphFrame_Offset = offsetof(UCharacterStateCanvasWidget_C, UberGraphFrame);
	static_assert(UCharacterStateCanvasWidget_C_UberGraphFrame_Offset == 0x458, "UCharacterStateCanvasWidget_C::UberGraphFrame offset is not 458");
	auto constexpr UCharacterStateCanvasWidget_C_BreathBarRetainerBox_Offset = offsetof(UCharacterStateCanvasWidget_C, BreathBarRetainerBox);
	static_assert(UCharacterStateCanvasWidget_C_BreathBarRetainerBox_Offset == 0x460, "UCharacterStateCanvasWidget_C::BreathBarRetainerBox offset is not 460");
	auto constexpr UCharacterStateCanvasWidget_C_CharacterStateCanvas_Offset = offsetof(UCharacterStateCanvasWidget_C, CharacterStateCanvas);
	static_assert(UCharacterStateCanvasWidget_C_CharacterStateCanvas_Offset == 0x468, "UCharacterStateCanvasWidget_C::CharacterStateCanvas offset is not 468");
	auto constexpr UCharacterStateCanvasWidget_C_CachedCharacter_Offset = offsetof(UCharacterStateCanvasWidget_C, CachedCharacter);
	static_assert(UCharacterStateCanvasWidget_C_CachedCharacter_Offset == 0x470, "UCharacterStateCanvasWidget_C::CachedCharacter offset is not 470");
	auto constexpr UCharacterStateCanvasWidget_C_boolField478_Offset = offsetof(UCharacterStateCanvasWidget_C, boolField478);
	static_assert(UCharacterStateCanvasWidget_C_boolField478_Offset == 0x478, "UCharacterStateCanvasWidget_C::boolField478 offset is not 478");
	auto constexpr UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineInitTransform_Offset = offsetof(UCharacterStateCanvasWidget_C, CharacterStateReplayTimelineInitTransform);
	static_assert(UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineInitTransform_Offset == 0x47c, "UCharacterStateCanvasWidget_C::CharacterStateReplayTimelineInitTransform offset is not 47c");
	auto constexpr UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineUpTransform_Offset = offsetof(UCharacterStateCanvasWidget_C, CharacterStateReplayTimelineUpTransform);
	static_assert(UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineUpTransform_Offset == 0x498, "UCharacterStateCanvasWidget_C::CharacterStateReplayTimelineUpTransform offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
