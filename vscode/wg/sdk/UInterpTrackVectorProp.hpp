#pragma once
#include "UInterpTrackVectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackVectorProp // Size: 0xA0
	: public UInterpTrackVectorBase // Size: 0x98
{
private:
	typedef UInterpTrackVectorProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(820); // id32("Class Engine.InterpTrackVectorProp")
		return ptr;
	}
	FName PropertyName; /* Ofs: 0x98 Size: 0x8 - NameProperty Engine.InterpTrackVectorProp.PropertyName */


	inline bool SetPropertyName(t_structHelper inst, FName value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackVectorProp = sizeof(UInterpTrackVectorProp); // 160
    static_assert(sizeof(UInterpTrackVectorProp) == 0xA0, "Size of UInterpTrackVectorProp is not correct.");
	auto constexpr UInterpTrackVectorProp_PropertyName_Offset = offsetof(UInterpTrackVectorProp, PropertyName);
	static_assert(UInterpTrackVectorProp_PropertyName_Offset == 0x98, "UInterpTrackVectorProp::PropertyName offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
