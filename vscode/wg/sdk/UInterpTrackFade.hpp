#pragma once
#include "UInterpTrackFloatBase.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackFade // Size: 0xB0
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackFade t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(802); // id32("Class Engine.InterpTrackFade")
		return ptr;
	}
	uint8_t boolField98;
	uint8_t UnknownData99[0x3];
	FLinearColor FadeColor; /* Ofs: 0x9C Size: 0x10 - StructProperty Engine.InterpTrackFade.FadeColor */
	uint8_t UnknownDataAC[0x4];


	inline bool bPersistFade()
	{
		return boolField98& 0x1;
	}
	inline bool SetbPersistFade(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFadeAudio()
	{
		return boolField98& 0x2;
	}
	inline bool SetbFadeAudio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetFadeColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x9C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackFade = sizeof(UInterpTrackFade); // 176
    static_assert(sizeof(UInterpTrackFade) == 0xB0, "Size of UInterpTrackFade is not correct.");
	auto constexpr UInterpTrackFade_boolField98_Offset = offsetof(UInterpTrackFade, boolField98);
	static_assert(UInterpTrackFade_boolField98_Offset == 0x98, "UInterpTrackFade::boolField98 offset is not 98");
	auto constexpr UInterpTrackFade_FadeColor_Offset = offsetof(UInterpTrackFade, FadeColor);
	static_assert(UInterpTrackFade_FadeColor_Offset == 0x9c, "UInterpTrackFade::FadeColor offset is not 9c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
