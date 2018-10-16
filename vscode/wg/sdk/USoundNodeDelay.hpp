#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeDelay // Size: 0x48
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeDelay t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1216); // id32("Class Engine.SoundNodeDelay")
		return ptr;
	}
	float DelayMin; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.SoundNodeDelay.DelayMin */
	float DelayMax; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.SoundNodeDelay.DelayMax */


	inline bool SetDelayMin(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetDelayMax(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeDelay = sizeof(USoundNodeDelay); // 72
    static_assert(sizeof(USoundNodeDelay) == 0x48, "Size of USoundNodeDelay is not correct.");
	auto constexpr USoundNodeDelay_DelayMin_Offset = offsetof(USoundNodeDelay, DelayMin);
	static_assert(USoundNodeDelay_DelayMin_Offset == 0x40, "USoundNodeDelay::DelayMin offset is not 40");
	auto constexpr USoundNodeDelay_DelayMax_Offset = offsetof(USoundNodeDelay, DelayMax);
	static_assert(USoundNodeDelay_DelayMax_Offset == 0x44, "USoundNodeDelay::DelayMax offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
