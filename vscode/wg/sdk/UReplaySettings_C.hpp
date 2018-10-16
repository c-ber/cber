#pragma once
#include "UTslBaseOptionWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplaySettings_C // Size: 0x418
	: public UTslBaseOptionWidget // Size: 0x3D0
{
private:
	typedef UReplaySettings_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169772); // id32("WidgetBlueprintGeneratedClass ReplaySettings.ReplaySettings_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3D0 Size: 0x8 - StructProperty ReplaySettings.ReplaySettings_C.UberGraphFrame */
	ExternalPtr<struct UQualityComboBox_C> KillcamComboBox; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty ReplaySettings.ReplaySettings_C.KillcamComboBox */
	ExternalPtr<struct UQualityComboBox_C> ReplayComboBox; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty ReplaySettings.ReplaySettings_C.ReplayComboBox */
	TArray<ExternalPtr<struct UQualityComboBox_C>> ContentsForClientReplay; /* Ofs: 0x3E8 Size: 0x10 - ArrayProperty ReplaySettings.ReplaySettings_C.ContentsForClientReplay */
	FString StrEnable; /* Ofs: 0x3F8 Size: 0x10 - StrProperty ReplaySettings.ReplaySettings_C.StrEnable */
	FString StrDisable; /* Ofs: 0x408 Size: 0x10 - StrProperty ReplaySettings.ReplaySettings_C.StrDisable */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetKillcamComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetReplayComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetContentsForClientReplay(t_structHelper inst, TArray<ExternalPtr<struct UQualityComboBox_C>> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetStrEnable(t_structHelper inst, FString value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetStrDisable(t_structHelper inst, FString value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplaySettings_C = sizeof(UReplaySettings_C); // 1048
    static_assert(sizeof(UReplaySettings_C) == 0x418, "Size of UReplaySettings_C is not correct.");
	auto constexpr UReplaySettings_C_UberGraphFrame_Offset = offsetof(UReplaySettings_C, UberGraphFrame);
	static_assert(UReplaySettings_C_UberGraphFrame_Offset == 0x3d0, "UReplaySettings_C::UberGraphFrame offset is not 3d0");
	auto constexpr UReplaySettings_C_KillcamComboBox_Offset = offsetof(UReplaySettings_C, KillcamComboBox);
	static_assert(UReplaySettings_C_KillcamComboBox_Offset == 0x3d8, "UReplaySettings_C::KillcamComboBox offset is not 3d8");
	auto constexpr UReplaySettings_C_ReplayComboBox_Offset = offsetof(UReplaySettings_C, ReplayComboBox);
	static_assert(UReplaySettings_C_ReplayComboBox_Offset == 0x3e0, "UReplaySettings_C::ReplayComboBox offset is not 3e0");
	auto constexpr UReplaySettings_C_ContentsForClientReplay_Offset = offsetof(UReplaySettings_C, ContentsForClientReplay);
	static_assert(UReplaySettings_C_ContentsForClientReplay_Offset == 0x3e8, "UReplaySettings_C::ContentsForClientReplay offset is not 3e8");
	auto constexpr UReplaySettings_C_StrEnable_Offset = offsetof(UReplaySettings_C, StrEnable);
	static_assert(UReplaySettings_C_StrEnable_Offset == 0x3f8, "UReplaySettings_C::StrEnable offset is not 3f8");
	auto constexpr UReplaySettings_C_StrDisable_Offset = offsetof(UReplaySettings_C, StrDisable);
	static_assert(UReplaySettings_C_StrDisable_Offset == 0x408, "UReplaySettings_C::StrDisable offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
