#pragma once
#include "FFilePath.hpp"
#include "FDirectoryPath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkSettings // Size: 0xA8
	: public UObject // Size: 0x30
{
private:
	typedef UAkSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2141); // id32("Class AkAudio.AkSettings")
		return ptr;
	}
	uint8_t MaxSimultaneousReverbVolumes; /* Ofs: 0x30 Size: 0x1 - ByteProperty AkAudio.AkSettings.MaxSimultaneousReverbVolumes */
	uint8_t UnknownData31[0x7];
	FFilePath WwiseProjectPath; /* Ofs: 0x38 Size: 0x10 - StructProperty AkAudio.AkSettings.WwiseProjectPath */
	FDirectoryPath WwiseWindowsInstallationPath; /* Ofs: 0x48 Size: 0x10 - StructProperty AkAudio.AkSettings.WwiseWindowsInstallationPath */
	FFilePath WwiseMacInstallationPath; /* Ofs: 0x58 Size: 0x10 - StructProperty AkAudio.AkSettings.WwiseMacInstallationPath */
	uint8_t boolField68;
	uint8_t UnknownData69[0x3F];


	inline bool SetMaxSimultaneousReverbVolumes(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetWwiseProjectPath(t_structHelper inst, FFilePath value) { inst.WriteOffset(0x38, value); }
	inline bool SetWwiseWindowsInstallationPath(t_structHelper inst, FDirectoryPath value) { inst.WriteOffset(0x48, value); }
	inline bool SetWwiseMacInstallationPath(t_structHelper inst, FFilePath value) { inst.WriteOffset(0x58, value); }
	inline bool SuppressWwiseProjectPathWarnings()
	{
		return boolField68& 0x1;
	}
	inline bool SetSuppressWwiseProjectPathWarnings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkSettings = sizeof(UAkSettings); // 168
    static_assert(sizeof(UAkSettings) == 0xA8, "Size of UAkSettings is not correct.");
	auto constexpr UAkSettings_MaxSimultaneousReverbVolumes_Offset = offsetof(UAkSettings, MaxSimultaneousReverbVolumes);
	static_assert(UAkSettings_MaxSimultaneousReverbVolumes_Offset == 0x30, "UAkSettings::MaxSimultaneousReverbVolumes offset is not 30");
	auto constexpr UAkSettings_WwiseProjectPath_Offset = offsetof(UAkSettings, WwiseProjectPath);
	static_assert(UAkSettings_WwiseProjectPath_Offset == 0x38, "UAkSettings::WwiseProjectPath offset is not 38");
	auto constexpr UAkSettings_WwiseWindowsInstallationPath_Offset = offsetof(UAkSettings, WwiseWindowsInstallationPath);
	static_assert(UAkSettings_WwiseWindowsInstallationPath_Offset == 0x48, "UAkSettings::WwiseWindowsInstallationPath offset is not 48");
	auto constexpr UAkSettings_WwiseMacInstallationPath_Offset = offsetof(UAkSettings, WwiseMacInstallationPath);
	static_assert(UAkSettings_WwiseMacInstallationPath_Offset == 0x58, "UAkSettings::WwiseMacInstallationPath offset is not 58");
	auto constexpr UAkSettings_boolField68_Offset = offsetof(UAkSettings, boolField68);
	static_assert(UAkSettings_boolField68_Offset == 0x68, "UAkSettings::boolField68 offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
