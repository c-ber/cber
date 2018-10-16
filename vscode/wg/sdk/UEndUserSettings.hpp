#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEndUserSettings // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UEndUserSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(768); // id32("Class Engine.EndUserSettings")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	uint8_t boolField38;
	uint8_t boolField39;
	uint8_t boolField3A;
	uint8_t UnknownData3B[0x5];


	inline bool bSendAnonymousUsageDataToEpic()
	{
		return boolField38& 0x1;
	}
	inline bool SetbSendAnonymousUsageDataToEpic(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSendMeanTimeBetweenFailureDataToEpic()
	{
		return boolField39& 0x1;
	}
	inline bool SetbSendMeanTimeBetweenFailureDataToEpic(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x39, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowUserIdInUsageData()
	{
		return boolField3A& 0x1;
	}
	inline bool SetbAllowUserIdInUsageData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEndUserSettings = sizeof(UEndUserSettings); // 64
    static_assert(sizeof(UEndUserSettings) == 0x40, "Size of UEndUserSettings is not correct.");
	auto constexpr UEndUserSettings_boolField38_Offset = offsetof(UEndUserSettings, boolField38);
	static_assert(UEndUserSettings_boolField38_Offset == 0x38, "UEndUserSettings::boolField38 offset is not 38");
	auto constexpr UEndUserSettings_boolField39_Offset = offsetof(UEndUserSettings, boolField39);
	static_assert(UEndUserSettings_boolField39_Offset == 0x39, "UEndUserSettings::boolField39 offset is not 39");
	auto constexpr UEndUserSettings_boolField3A_Offset = offsetof(UEndUserSettings, boolField3A);
	static_assert(UEndUserSettings_boolField3A_Offset == 0x3a, "UEndUserSettings::boolField3A offset is not 3a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
