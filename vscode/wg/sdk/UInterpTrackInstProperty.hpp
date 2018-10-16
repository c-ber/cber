#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstProperty // Size: 0x40
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstProperty t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(834); // id32("Class Engine.InterpTrackInstProperty")
		return ptr;
	}
	ExternalPtr<struct UProperty> InterpProperty; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.InterpTrackInstProperty.InterpProperty */
	ExternalPtr<struct UObject> PropertyOuterObjectInst; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.InterpTrackInstProperty.PropertyOuterObjectInst */


	inline bool SetInterpProperty(t_structHelper inst, ExternalPtr<struct UProperty> value) { inst.WriteOffset(0x30, value); }
	inline bool SetPropertyOuterObjectInst(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstProperty = sizeof(UInterpTrackInstProperty); // 64
    static_assert(sizeof(UInterpTrackInstProperty) == 0x40, "Size of UInterpTrackInstProperty is not correct.");
	auto constexpr UInterpTrackInstProperty_InterpProperty_Offset = offsetof(UInterpTrackInstProperty, InterpProperty);
	static_assert(UInterpTrackInstProperty_InterpProperty_Offset == 0x30, "UInterpTrackInstProperty::InterpProperty offset is not 30");
	auto constexpr UInterpTrackInstProperty_PropertyOuterObjectInst_Offset = offsetof(UInterpTrackInstProperty, PropertyOuterObjectInst);
	static_assert(UInterpTrackInstProperty_PropertyOuterObjectInst_Offset == 0x38, "UInterpTrackInstProperty::PropertyOuterObjectInst offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
