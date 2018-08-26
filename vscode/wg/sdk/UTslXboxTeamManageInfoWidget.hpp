#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslXboxTeamManageInfoWidget // Size: 0x328
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslXboxTeamManageInfoWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1588); // id32("Class TslGame.TslXboxTeamManageInfoWidget")
		return ptr;
	}
	int32_t MemberNumber; /* Ofs: 0x300 Size: 0x4 - IntProperty TslGame.TslXboxTeamManageInfoWidget.MemberNumber */
	uint8_t UnknownData304[0x4];
	FName UserName; /* Ofs: 0x308 Size: 0x8 - NameProperty TslGame.TslXboxTeamManageInfoWidget.UserName */
	uint8_t boolField310;
	uint8_t UnknownData311[0x17];


	inline bool SetMemberNumber(t_structHelper inst, int32_t value) { inst.WriteOffset(0x300, value); }
	inline bool SetUserName(t_structHelper inst, FName value) { inst.WriteOffset(0x308, value); }
	inline bool bIsVoiceMute()
	{
		return boolField310& 0x1;
	}
	inline bool SetbIsVoiceMute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x310, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslXboxTeamManageInfoWidget = sizeof(UTslXboxTeamManageInfoWidget); // 808
    static_assert(sizeof(UTslXboxTeamManageInfoWidget) == 0x328, "Size of UTslXboxTeamManageInfoWidget is not correct.");
	auto constexpr UTslXboxTeamManageInfoWidget_MemberNumber_Offset = offsetof(UTslXboxTeamManageInfoWidget, MemberNumber);
	static_assert(UTslXboxTeamManageInfoWidget_MemberNumber_Offset == 0x300, "UTslXboxTeamManageInfoWidget::MemberNumber offset is not 300");
	auto constexpr UTslXboxTeamManageInfoWidget_UserName_Offset = offsetof(UTslXboxTeamManageInfoWidget, UserName);
	static_assert(UTslXboxTeamManageInfoWidget_UserName_Offset == 0x308, "UTslXboxTeamManageInfoWidget::UserName offset is not 308");
	auto constexpr UTslXboxTeamManageInfoWidget_boolField310_Offset = offsetof(UTslXboxTeamManageInfoWidget, boolField310);
	static_assert(UTslXboxTeamManageInfoWidget_boolField310_Offset == 0x310, "UTslXboxTeamManageInfoWidget::boolField310 offset is not 310");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
