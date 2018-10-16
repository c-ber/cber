#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkAuxBus // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UAkAuxBus t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2137); // id32("Class AkAudio.AkAuxBus")
		return ptr;
	}
	ExternalPtr<struct UAkAudioBank> RequiredBank; /* Ofs: 0x30 Size: 0x8 - ObjectProperty AkAudio.AkAuxBus.RequiredBank */
	uint8_t UnknownData38[0x8];


	inline bool SetRequiredBank(t_structHelper inst, ExternalPtr<struct UAkAudioBank> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkAuxBus = sizeof(UAkAuxBus); // 64
    static_assert(sizeof(UAkAuxBus) == 0x40, "Size of UAkAuxBus is not correct.");
	auto constexpr UAkAuxBus_RequiredBank_Offset = offsetof(UAkAuxBus, RequiredBank);
	static_assert(UAkAuxBus_RequiredBank_Offset == 0x30, "UAkAuxBus::RequiredBank offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
