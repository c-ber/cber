#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkAudioBank // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UAkAudioBank t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2135); // id32("Class AkAudio.AkAudioBank")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];


	inline bool AutoLoad()
	{
		return boolField30& 0x1;
	}
	inline bool SetAutoLoad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkAudioBank = sizeof(UAkAudioBank); // 56
    static_assert(sizeof(UAkAudioBank) == 0x38, "Size of UAkAudioBank is not correct.");
	auto constexpr UAkAudioBank_boolField30_Offset = offsetof(UAkAudioBank, boolField30);
	static_assert(UAkAudioBank_boolField30_Offset == 0x30, "UAkAudioBank::boolField30 offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
