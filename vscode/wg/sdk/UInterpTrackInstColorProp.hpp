#pragma once
#include "UInterpTrackInstProperty.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstColorProp // Size: 0x50
	: public UInterpTrackInstProperty // Size: 0x40
{
private:
	typedef UInterpTrackInstColorProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(836); // id32("Class Engine.InterpTrackInstColorProp")
		return ptr;
	}
	uint8_t UnknownData40[0x8];
	FColor ResetColor; /* Ofs: 0x48 Size: 0x4 - StructProperty Engine.InterpTrackInstColorProp.ResetColor */
	uint8_t UnknownData4C[0x4];


	inline bool SetResetColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstColorProp = sizeof(UInterpTrackInstColorProp); // 80
    static_assert(sizeof(UInterpTrackInstColorProp) == 0x50, "Size of UInterpTrackInstColorProp is not correct.");
	auto constexpr UInterpTrackInstColorProp_ResetColor_Offset = offsetof(UInterpTrackInstColorProp, ResetColor);
	static_assert(UInterpTrackInstColorProp_ResetColor_Offset == 0x48, "UInterpTrackInstColorProp::ResetColor offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
