#pragma once
#include "UBTTaskNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_MakeNoise // Size: 0x80
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_MakeNoise t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(602); // id32("Class AIModule.BTTask_MakeNoise")
		return ptr;
	}
	float Loudnes; /* Ofs: 0x78 Size: 0x4 - FloatProperty AIModule.BTTask_MakeNoise.Loudnes */
	uint8_t UnknownData7C[0x4];


	inline bool SetLoudnes(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_MakeNoise = sizeof(UBTTask_MakeNoise); // 128
    static_assert(sizeof(UBTTask_MakeNoise) == 0x80, "Size of UBTTask_MakeNoise is not correct.");
	auto constexpr UBTTask_MakeNoise_Loudnes_Offset = offsetof(UBTTask_MakeNoise, Loudnes);
	static_assert(UBTTask_MakeNoise_Loudnes_Offset == 0x78, "UBTTask_MakeNoise::Loudnes offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
