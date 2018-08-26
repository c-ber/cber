#pragma once
#include "UInterpTrackInstProperty.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstFloatProp // Size: 0x50
	: public UInterpTrackInstProperty // Size: 0x40
{
private:
	typedef UInterpTrackInstFloatProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(837); // id32("Class Engine.InterpTrackInstFloatProp")
		return ptr;
	}
	uint8_t UnknownData40[0x8];
	float ResetFloat; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.InterpTrackInstFloatProp.ResetFloat */
	uint8_t UnknownData4C[0x4];


	inline bool SetResetFloat(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstFloatProp = sizeof(UInterpTrackInstFloatProp); // 80
    static_assert(sizeof(UInterpTrackInstFloatProp) == 0x50, "Size of UInterpTrackInstFloatProp is not correct.");
	auto constexpr UInterpTrackInstFloatProp_ResetFloat_Offset = offsetof(UInterpTrackInstFloatProp, ResetFloat);
	static_assert(UInterpTrackInstFloatProp_ResetFloat_Offset == 0x48, "UInterpTrackInstFloatProp::ResetFloat offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
