#pragma once
#include "EGrammaticalGender.hpp"
#include "EGrammaticalNumber.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDialogueVoice // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UDialogueVoice t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(736); // id32("Class Engine.DialogueVoice")
		return ptr;
	}
	TEnumAsByte<enum EGrammaticalGender> Gender; /* Ofs: 0x30 Size: 0x1 - ByteProperty Engine.DialogueVoice.Gender */
	TEnumAsByte<enum EGrammaticalNumber> Plurality; /* Ofs: 0x31 Size: 0x1 - ByteProperty Engine.DialogueVoice.Plurality */
	uint8_t UnknownData32[0x2];
	FGuid LocalizationGUID; /* Ofs: 0x34 Size: 0x10 - StructProperty Engine.DialogueVoice.LocalizationGUID */
	uint8_t UnknownData44[0x4];


	inline bool SetGender(t_structHelper inst, TEnumAsByte<enum EGrammaticalGender> value) { inst.WriteOffset(0x30, value); }
	inline bool SetPlurality(t_structHelper inst, TEnumAsByte<enum EGrammaticalNumber> value) { inst.WriteOffset(0x31, value); }
	inline bool SetLocalizationGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0x34, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDialogueVoice = sizeof(UDialogueVoice); // 72
    static_assert(sizeof(UDialogueVoice) == 0x48, "Size of UDialogueVoice is not correct.");
	auto constexpr UDialogueVoice_Gender_Offset = offsetof(UDialogueVoice, Gender);
	static_assert(UDialogueVoice_Gender_Offset == 0x30, "UDialogueVoice::Gender offset is not 30");
	auto constexpr UDialogueVoice_Plurality_Offset = offsetof(UDialogueVoice, Plurality);
	static_assert(UDialogueVoice_Plurality_Offset == 0x31, "UDialogueVoice::Plurality offset is not 31");
	auto constexpr UDialogueVoice_LocalizationGUID_Offset = offsetof(UDialogueVoice, LocalizationGUID);
	static_assert(UDialogueVoice_LocalizationGUID_Offset == 0x34, "UDialogueVoice::LocalizationGUID offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
