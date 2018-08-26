#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundOptionWidget_C // Size: 0x410
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef USoundOptionWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169134); // id32("WidgetBlueprintGeneratedClass SoundOptionWidget.SoundOptionWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty SoundOptionWidget.SoundOptionWidget_C.UberGraphFrame */
	ExternalPtr<struct USoundSettingWidget_C> SoundSettingWidget; /* Ofs: 0x400 Size: 0x8 - ObjectProperty SoundOptionWidget.SoundOptionWidget_C.SoundSettingWidget */
	ExternalPtr<struct UVoiceSettingWidget_C> VoiceSettingWidget; /* Ofs: 0x408 Size: 0x8 - ObjectProperty SoundOptionWidget.SoundOptionWidget_C.VoiceSettingWidget */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetSoundSettingWidget(t_structHelper inst, ExternalPtr<struct USoundSettingWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetVoiceSettingWidget(t_structHelper inst, ExternalPtr<struct UVoiceSettingWidget_C> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundOptionWidget_C = sizeof(USoundOptionWidget_C); // 1040
    static_assert(sizeof(USoundOptionWidget_C) == 0x410, "Size of USoundOptionWidget_C is not correct.");
	auto constexpr USoundOptionWidget_C_UberGraphFrame_Offset = offsetof(USoundOptionWidget_C, UberGraphFrame);
	static_assert(USoundOptionWidget_C_UberGraphFrame_Offset == 0x3f8, "USoundOptionWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr USoundOptionWidget_C_SoundSettingWidget_Offset = offsetof(USoundOptionWidget_C, SoundSettingWidget);
	static_assert(USoundOptionWidget_C_SoundSettingWidget_Offset == 0x400, "USoundOptionWidget_C::SoundSettingWidget offset is not 400");
	auto constexpr USoundOptionWidget_C_VoiceSettingWidget_Offset = offsetof(USoundOptionWidget_C, VoiceSettingWidget);
	static_assert(USoundOptionWidget_C_VoiceSettingWidget_Offset == 0x408, "USoundOptionWidget_C::VoiceSettingWidget offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
