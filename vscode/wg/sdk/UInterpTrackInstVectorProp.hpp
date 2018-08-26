#pragma once
#include "UInterpTrackInstProperty.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstVectorProp // Size: 0x58
	: public UInterpTrackInstProperty // Size: 0x40
{
private:
	typedef UInterpTrackInstVectorProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(839); // id32("Class Engine.InterpTrackInstVectorProp")
		return ptr;
	}
	uint8_t UnknownData40[0x8];
	FVector ResetVector; /* Ofs: 0x48 Size: 0xC - StructProperty Engine.InterpTrackInstVectorProp.ResetVector */
	uint8_t UnknownData54[0x4];


	inline bool SetResetVector(t_structHelper inst, FVector value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstVectorProp = sizeof(UInterpTrackInstVectorProp); // 88
    static_assert(sizeof(UInterpTrackInstVectorProp) == 0x58, "Size of UInterpTrackInstVectorProp is not correct.");
	auto constexpr UInterpTrackInstVectorProp_ResetVector_Offset = offsetof(UInterpTrackInstVectorProp, ResetVector);
	static_assert(UInterpTrackInstVectorProp_ResetVector_Offset == 0x48, "UInterpTrackInstVectorProp::ResetVector offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
