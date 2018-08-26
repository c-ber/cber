#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUMGSequencePlayer // Size: 0x6B0
	: public UObject // Size: 0x30
{
private:
	typedef UUMGSequencePlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(461); // id32("Class UMG.UMGSequencePlayer")
		return ptr;
	}
	uint8_t UnknownData30[0x348];
	ExternalPtr<struct UWidgetAnimation> Animation; /* Ofs: 0x378 Size: 0x8 - ObjectProperty UMG.UMGSequencePlayer.Animation */
	uint8_t UnknownData380[0x330];


	inline bool SetAnimation(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x378, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUMGSequencePlayer = sizeof(UUMGSequencePlayer); // 1712
    static_assert(sizeof(UUMGSequencePlayer) == 0x6B0, "Size of UUMGSequencePlayer is not correct.");
	auto constexpr UUMGSequencePlayer_Animation_Offset = offsetof(UUMGSequencePlayer, Animation);
	static_assert(UUMGSequencePlayer_Animation_Offset == 0x378, "UUMGSequencePlayer::Animation offset is not 378");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
