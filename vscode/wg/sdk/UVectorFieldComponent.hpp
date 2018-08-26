#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVectorFieldComponent // Size: 0x910
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UVectorFieldComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(227); // id32("Class Engine.VectorFieldComponent")
		return ptr;
	}
//	ExternalPtr<struct UVectorField> VectorField; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty Engine.VectorFieldComponent.VectorField */
	float Intensity; /* Ofs: 0x8F0 Size: 0x4 - FloatProperty Engine.VectorFieldComponent.Intensity */
	float Tightness; /* Ofs: 0x8F4 Size: 0x4 - FloatProperty Engine.VectorFieldComponent.Tightness */
	uint8_t boolField8F8;
	uint8_t UnknownData8F9[0x17];


//	inline bool SetVectorField(t_structHelper inst, ExternalPtr<struct UVectorField> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetTightness(t_structHelper inst, float value) { inst.WriteOffset(0x8F4, value); }
	inline bool bPreviewVectorField()
	{
		return boolField8F8& 0x1;
	}
	inline bool SetbPreviewVectorField(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVectorFieldComponent = sizeof(UVectorFieldComponent); // 2320
    static_assert(sizeof(UVectorFieldComponent) == 0x910, "Size of UVectorFieldComponent is not correct.");
//	auto constexpr UVectorFieldComponent_VectorField_Offset = offsetof(UVectorFieldComponent, VectorField);
//	static_assert(UVectorFieldComponent_VectorField_Offset == 0x8e8, "UVectorFieldComponent::VectorField offset is not 8e8");
	auto constexpr UVectorFieldComponent_Intensity_Offset = offsetof(UVectorFieldComponent, Intensity);
	static_assert(UVectorFieldComponent_Intensity_Offset == 0x8f0, "UVectorFieldComponent::Intensity offset is not 8f0");
	auto constexpr UVectorFieldComponent_Tightness_Offset = offsetof(UVectorFieldComponent, Tightness);
	static_assert(UVectorFieldComponent_Tightness_Offset == 0x8f4, "UVectorFieldComponent::Tightness offset is not 8f4");
	auto constexpr UVectorFieldComponent_boolField8F8_Offset = offsetof(UVectorFieldComponent, boolField8F8);
	static_assert(UVectorFieldComponent_boolField8F8_Offset == 0x8f8, "UVectorFieldComponent::boolField8F8 offset is not 8f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
