#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTireType // Size: 0x40
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTireType t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(714); // id32("Class Engine.TireType")
		return ptr;
	}
	float FrictionScale; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.TireType.FrictionScale */
	uint8_t UnknownData3C[0x4];


	inline bool SetFrictionScale(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTireType = sizeof(UTireType); // 64
    static_assert(sizeof(UTireType) == 0x40, "Size of UTireType is not correct.");
	auto constexpr UTireType_FrictionScale_Offset = offsetof(UTireType, FrictionScale);
	static_assert(UTireType_FrictionScale_Offset == 0x38, "UTireType::FrictionScale offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
