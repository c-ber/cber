#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeLooping // Size: 0x48
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeLooping t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1223); // id32("Class Engine.SoundNodeLooping")
		return ptr;
	}
	int32_t LoopCount; /* Ofs: 0x40 Size: 0x4 - IntProperty Engine.SoundNodeLooping.LoopCount */
	uint8_t boolField44;
	uint8_t UnknownData45[0x3];


	inline bool SetLoopCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40, value); }
	inline bool bLoopIndefinitely()
	{
		return boolField44& 0x1;
	}
	inline bool SetbLoopIndefinitely(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeLooping = sizeof(USoundNodeLooping); // 72
    static_assert(sizeof(USoundNodeLooping) == 0x48, "Size of USoundNodeLooping is not correct.");
	auto constexpr USoundNodeLooping_LoopCount_Offset = offsetof(USoundNodeLooping, LoopCount);
	static_assert(USoundNodeLooping_LoopCount_Offset == 0x40, "USoundNodeLooping::LoopCount offset is not 40");
	auto constexpr USoundNodeLooping_boolField44_Offset = offsetof(USoundNodeLooping, boolField44);
	static_assert(USoundNodeLooping_boolField44_Offset == 0x44, "USoundNodeLooping::boolField44 offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
