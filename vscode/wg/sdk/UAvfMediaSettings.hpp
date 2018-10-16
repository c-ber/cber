#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAvfMediaSettings // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UAvfMediaSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2131); // id32("Class AvfMediaFactory.AvfMediaSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];


	inline bool NativeAudioOut()
	{
		return boolField30& 0x1;
	}
	inline bool SetNativeAudioOut(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAvfMediaSettings = sizeof(UAvfMediaSettings); // 56
    static_assert(sizeof(UAvfMediaSettings) == 0x38, "Size of UAvfMediaSettings is not correct.");
	auto constexpr UAvfMediaSettings_boolField30_Offset = offsetof(UAvfMediaSettings, boolField30);
	static_assert(UAvfMediaSettings_boolField30_Offset == 0x30, "UAvfMediaSettings::boolField30 offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
