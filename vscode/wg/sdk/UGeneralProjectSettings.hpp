#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeneralProjectSettings // Size: 0x118
	: public UObject // Size: 0x30
{
private:
	typedef UGeneralProjectSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1278); // id32("Class EngineSettings.GeneralProjectSettings")
		return ptr;
	}
	FString CompanyName; /* Ofs: 0x30 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.CompanyName */
	FString CompanyDistinguishedName; /* Ofs: 0x40 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.CompanyDistinguishedName */
	FString CopyrightNotice; /* Ofs: 0x50 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.CopyrightNotice */
	FString Description; /* Ofs: 0x60 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.Description */
	FString Homepage; /* Ofs: 0x70 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.Homepage */
	FString LicensingTerms; /* Ofs: 0x80 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.LicensingTerms */
	FString PrivacyPolicy; /* Ofs: 0x90 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.PrivacyPolicy */
	FGuid ProjectID; /* Ofs: 0xA0 Size: 0x10 - StructProperty EngineSettings.GeneralProjectSettings.ProjectID */
	FString ProjectName; /* Ofs: 0xB0 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.ProjectName */
	FString ProjectVersion; /* Ofs: 0xC0 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.ProjectVersion */
	FString SupportContact; /* Ofs: 0xD0 Size: 0x10 - StrProperty EngineSettings.GeneralProjectSettings.SupportContact */
	FText ProjectDisplayedTitle; /* Ofs: 0xE0 Size: 0x18 - TextProperty EngineSettings.GeneralProjectSettings.ProjectDisplayedTitle */
	FText ProjectDebugTitleInfo; /* Ofs: 0xF8 Size: 0x18 - TextProperty EngineSettings.GeneralProjectSettings.ProjectDebugTitleInfo */
	uint8_t boolField110;
	uint8_t boolField111;
	uint8_t boolField112;
	uint8_t boolField113;
	uint8_t boolField114;
	uint8_t boolField115;
	uint8_t boolField116;
	uint8_t UnknownData117[0x1];


	inline bool SetCompanyName(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetCompanyDistinguishedName(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetCopyrightNotice(t_structHelper inst, FString value) { inst.WriteOffset(0x50, value); }
	inline bool SetDescription(t_structHelper inst, FString value) { inst.WriteOffset(0x60, value); }
	inline bool SetHomepage(t_structHelper inst, FString value) { inst.WriteOffset(0x70, value); }
	inline bool SetLicensingTerms(t_structHelper inst, FString value) { inst.WriteOffset(0x80, value); }
	inline bool SetPrivacyPolicy(t_structHelper inst, FString value) { inst.WriteOffset(0x90, value); }
	inline bool SetProjectID(t_structHelper inst, FGuid value) { inst.WriteOffset(0xA0, value); }
	inline bool SetProjectName(t_structHelper inst, FString value) { inst.WriteOffset(0xB0, value); }
	inline bool SetProjectVersion(t_structHelper inst, FString value) { inst.WriteOffset(0xC0, value); }
	inline bool SetSupportContact(t_structHelper inst, FString value) { inst.WriteOffset(0xD0, value); }
	inline bool SetProjectDisplayedTitle(t_structHelper inst, FText value) { inst.WriteOffset(0xE0, value); }
	inline bool SetProjectDebugTitleInfo(t_structHelper inst, FText value) { inst.WriteOffset(0xF8, value); }
	inline bool bShouldWindowPreserveAspectRatio()
	{
		return boolField110& 0x1;
	}
	inline bool SetbShouldWindowPreserveAspectRatio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x110, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseBorderlessWindow()
	{
		return boolField111& 0x1;
	}
	inline bool SetbUseBorderlessWindow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x111, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStartInVR()
	{
		return boolField112& 0x1;
	}
	inline bool SetbStartInVR(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x112, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowWindowResize()
	{
		return boolField113& 0x1;
	}
	inline bool SetbAllowWindowResize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x113, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowClose()
	{
		return boolField114& 0x1;
	}
	inline bool SetbAllowClose(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x114, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowMaximize()
	{
		return boolField115& 0x1;
	}
	inline bool SetbAllowMaximize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x115, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowMinimize()
	{
		return boolField116& 0x1;
	}
	inline bool SetbAllowMinimize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x116, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeneralProjectSettings = sizeof(UGeneralProjectSettings); // 280
    static_assert(sizeof(UGeneralProjectSettings) == 0x118, "Size of UGeneralProjectSettings is not correct.");
	auto constexpr UGeneralProjectSettings_CompanyName_Offset = offsetof(UGeneralProjectSettings, CompanyName);
	static_assert(UGeneralProjectSettings_CompanyName_Offset == 0x30, "UGeneralProjectSettings::CompanyName offset is not 30");
	auto constexpr UGeneralProjectSettings_CompanyDistinguishedName_Offset = offsetof(UGeneralProjectSettings, CompanyDistinguishedName);
	static_assert(UGeneralProjectSettings_CompanyDistinguishedName_Offset == 0x40, "UGeneralProjectSettings::CompanyDistinguishedName offset is not 40");
	auto constexpr UGeneralProjectSettings_CopyrightNotice_Offset = offsetof(UGeneralProjectSettings, CopyrightNotice);
	static_assert(UGeneralProjectSettings_CopyrightNotice_Offset == 0x50, "UGeneralProjectSettings::CopyrightNotice offset is not 50");
	auto constexpr UGeneralProjectSettings_Description_Offset = offsetof(UGeneralProjectSettings, Description);
	static_assert(UGeneralProjectSettings_Description_Offset == 0x60, "UGeneralProjectSettings::Description offset is not 60");
	auto constexpr UGeneralProjectSettings_Homepage_Offset = offsetof(UGeneralProjectSettings, Homepage);
	static_assert(UGeneralProjectSettings_Homepage_Offset == 0x70, "UGeneralProjectSettings::Homepage offset is not 70");
	auto constexpr UGeneralProjectSettings_LicensingTerms_Offset = offsetof(UGeneralProjectSettings, LicensingTerms);
	static_assert(UGeneralProjectSettings_LicensingTerms_Offset == 0x80, "UGeneralProjectSettings::LicensingTerms offset is not 80");
	auto constexpr UGeneralProjectSettings_PrivacyPolicy_Offset = offsetof(UGeneralProjectSettings, PrivacyPolicy);
	static_assert(UGeneralProjectSettings_PrivacyPolicy_Offset == 0x90, "UGeneralProjectSettings::PrivacyPolicy offset is not 90");
	auto constexpr UGeneralProjectSettings_ProjectID_Offset = offsetof(UGeneralProjectSettings, ProjectID);
	static_assert(UGeneralProjectSettings_ProjectID_Offset == 0xa0, "UGeneralProjectSettings::ProjectID offset is not a0");
	auto constexpr UGeneralProjectSettings_ProjectName_Offset = offsetof(UGeneralProjectSettings, ProjectName);
	static_assert(UGeneralProjectSettings_ProjectName_Offset == 0xb0, "UGeneralProjectSettings::ProjectName offset is not b0");
	auto constexpr UGeneralProjectSettings_ProjectVersion_Offset = offsetof(UGeneralProjectSettings, ProjectVersion);
	static_assert(UGeneralProjectSettings_ProjectVersion_Offset == 0xc0, "UGeneralProjectSettings::ProjectVersion offset is not c0");
	auto constexpr UGeneralProjectSettings_SupportContact_Offset = offsetof(UGeneralProjectSettings, SupportContact);
	static_assert(UGeneralProjectSettings_SupportContact_Offset == 0xd0, "UGeneralProjectSettings::SupportContact offset is not d0");
	auto constexpr UGeneralProjectSettings_ProjectDisplayedTitle_Offset = offsetof(UGeneralProjectSettings, ProjectDisplayedTitle);
	static_assert(UGeneralProjectSettings_ProjectDisplayedTitle_Offset == 0xe0, "UGeneralProjectSettings::ProjectDisplayedTitle offset is not e0");
	auto constexpr UGeneralProjectSettings_ProjectDebugTitleInfo_Offset = offsetof(UGeneralProjectSettings, ProjectDebugTitleInfo);
	static_assert(UGeneralProjectSettings_ProjectDebugTitleInfo_Offset == 0xf8, "UGeneralProjectSettings::ProjectDebugTitleInfo offset is not f8");
	auto constexpr UGeneralProjectSettings_boolField110_Offset = offsetof(UGeneralProjectSettings, boolField110);
	static_assert(UGeneralProjectSettings_boolField110_Offset == 0x110, "UGeneralProjectSettings::boolField110 offset is not 110");
	auto constexpr UGeneralProjectSettings_boolField111_Offset = offsetof(UGeneralProjectSettings, boolField111);
	static_assert(UGeneralProjectSettings_boolField111_Offset == 0x111, "UGeneralProjectSettings::boolField111 offset is not 111");
	auto constexpr UGeneralProjectSettings_boolField112_Offset = offsetof(UGeneralProjectSettings, boolField112);
	static_assert(UGeneralProjectSettings_boolField112_Offset == 0x112, "UGeneralProjectSettings::boolField112 offset is not 112");
	auto constexpr UGeneralProjectSettings_boolField113_Offset = offsetof(UGeneralProjectSettings, boolField113);
	static_assert(UGeneralProjectSettings_boolField113_Offset == 0x113, "UGeneralProjectSettings::boolField113 offset is not 113");
	auto constexpr UGeneralProjectSettings_boolField114_Offset = offsetof(UGeneralProjectSettings, boolField114);
	static_assert(UGeneralProjectSettings_boolField114_Offset == 0x114, "UGeneralProjectSettings::boolField114 offset is not 114");
	auto constexpr UGeneralProjectSettings_boolField115_Offset = offsetof(UGeneralProjectSettings, boolField115);
	static_assert(UGeneralProjectSettings_boolField115_Offset == 0x115, "UGeneralProjectSettings::boolField115 offset is not 115");
	auto constexpr UGeneralProjectSettings_boolField116_Offset = offsetof(UGeneralProjectSettings, boolField116);
	static_assert(UGeneralProjectSettings_boolField116_Offset == 0x116, "UGeneralProjectSettings::boolField116 offset is not 116");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
