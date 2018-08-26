#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstSlomo // Size: 0x38
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstSlomo t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(840); // id32("Class Engine.InterpTrackInstSlomo")
		return ptr;
	}
	float OldTimeDilation; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.InterpTrackInstSlomo.OldTimeDilation */
	uint8_t UnknownData34[0x4];


	inline bool SetOldTimeDilation(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstSlomo = sizeof(UInterpTrackInstSlomo); // 56
    static_assert(sizeof(UInterpTrackInstSlomo) == 0x38, "Size of UInterpTrackInstSlomo is not correct.");
	auto constexpr UInterpTrackInstSlomo_OldTimeDilation_Offset = offsetof(UInterpTrackInstSlomo, OldTimeDilation);
	static_assert(UInterpTrackInstSlomo_OldTimeDilation_Offset == 0x30, "UInterpTrackInstSlomo::OldTimeDilation offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
