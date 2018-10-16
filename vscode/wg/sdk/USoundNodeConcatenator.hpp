#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeConcatenator // Size: 0x50
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeConcatenator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1215); // id32("Class Engine.SoundNodeConcatenator")
		return ptr;
	}
	TArray<float> InputVolume; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.SoundNodeConcatenator.InputVolume */


	inline bool SetInputVolume(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeConcatenator = sizeof(USoundNodeConcatenator); // 80
    static_assert(sizeof(USoundNodeConcatenator) == 0x50, "Size of USoundNodeConcatenator is not correct.");
	auto constexpr USoundNodeConcatenator_InputVolume_Offset = offsetof(USoundNodeConcatenator, InputVolume);
	static_assert(USoundNodeConcatenator_InputVolume_Offset == 0x40, "USoundNodeConcatenator::InputVolume offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
