#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWmfMediaSettings // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UWmfMediaSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2155); // id32("Class WmfMediaFactory.WmfMediaSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t boolField31;
	uint8_t UnknownData32[0x6];


	inline bool AllowNonStandardCodecs()
	{
		return boolField30& 0x1;
	}
	inline bool SetAllowNonStandardCodecs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool NativeAudioOut()
	{
		return boolField31& 0x1;
	}
	inline bool SetNativeAudioOut(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWmfMediaSettings = sizeof(UWmfMediaSettings); // 56
    static_assert(sizeof(UWmfMediaSettings) == 0x38, "Size of UWmfMediaSettings is not correct.");
	auto constexpr UWmfMediaSettings_boolField30_Offset = offsetof(UWmfMediaSettings, boolField30);
	static_assert(UWmfMediaSettings_boolField30_Offset == 0x30, "UWmfMediaSettings::boolField30 offset is not 30");
	auto constexpr UWmfMediaSettings_boolField31_Offset = offsetof(UWmfMediaSettings, boolField31);
	static_assert(UWmfMediaSettings_boolField31_Offset == 0x31, "UWmfMediaSettings::boolField31 offset is not 31");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
