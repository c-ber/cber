#pragma once
#include "UMaterialExpressionParameter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionScalarParameter // Size: 0x98
	: public UMaterialExpressionParameter // Size: 0x88
{
private:
	typedef UMaterialExpressionScalarParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(945); // id32("Class Engine.MaterialExpressionScalarParameter")
		return ptr;
	}
	float DefaultValue; /* Ofs: 0x88 Size: 0x4 - FloatProperty Engine.MaterialExpressionScalarParameter.DefaultValue */
	float SliderMin; /* Ofs: 0x8C Size: 0x4 - FloatProperty Engine.MaterialExpressionScalarParameter.SliderMin */
	float SliderMax; /* Ofs: 0x90 Size: 0x4 - FloatProperty Engine.MaterialExpressionScalarParameter.SliderMax */
	uint8_t UnknownData94[0x4];


	inline bool SetDefaultValue(t_structHelper inst, float value) { inst.WriteOffset(0x88, value); }
	inline bool SetSliderMin(t_structHelper inst, float value) { inst.WriteOffset(0x8C, value); }
	inline bool SetSliderMax(t_structHelper inst, float value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionScalarParameter = sizeof(UMaterialExpressionScalarParameter); // 152
    static_assert(sizeof(UMaterialExpressionScalarParameter) == 0x98, "Size of UMaterialExpressionScalarParameter is not correct.");
	auto constexpr UMaterialExpressionScalarParameter_DefaultValue_Offset = offsetof(UMaterialExpressionScalarParameter, DefaultValue);
	static_assert(UMaterialExpressionScalarParameter_DefaultValue_Offset == 0x88, "UMaterialExpressionScalarParameter::DefaultValue offset is not 88");
	auto constexpr UMaterialExpressionScalarParameter_SliderMin_Offset = offsetof(UMaterialExpressionScalarParameter, SliderMin);
	static_assert(UMaterialExpressionScalarParameter_SliderMin_Offset == 0x8c, "UMaterialExpressionScalarParameter::SliderMin offset is not 8c");
	auto constexpr UMaterialExpressionScalarParameter_SliderMax_Offset = offsetof(UMaterialExpressionScalarParameter, SliderMax);
	static_assert(UMaterialExpressionScalarParameter_SliderMax_Offset == 0x90, "UMaterialExpressionScalarParameter::SliderMax offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
