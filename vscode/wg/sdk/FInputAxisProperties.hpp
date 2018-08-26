#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInputAxisProperties // Size: 0x20
{
public:
    float DEADZONE; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.InputAxisProperties.DEADZONE */
    float OuterDeadZone; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.InputAxisProperties.OuterDeadZone */
    float Sensitivity; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.InputAxisProperties.Sensitivity */
    float Exponent; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.InputAxisProperties.Exponent */
    bool bInvert; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.InputAxisProperties.bInvert */
    uint8_t UnknownData11[0x7];
    ExternalPtr<struct UCurveFloat> MultiplierAxisValueCurve; /* Ofs: 0x18 Size: 0x8 ObjectProperty Engine.InputAxisProperties.MultiplierAxisValueCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInputAxisProperties = sizeof(FInputAxisProperties); // 32
    static_assert(sizeof(FInputAxisProperties) == 0x20, "Size of FInputAxisProperties is not correct.");
	auto constexpr FInputAxisProperties_DEADZONE_Offset = offsetof(FInputAxisProperties, DEADZONE);
	static_assert(FInputAxisProperties_DEADZONE_Offset == 0x0, "FInputAxisProperties::DEADZONE offset is not 0");
	auto constexpr FInputAxisProperties_OuterDeadZone_Offset = offsetof(FInputAxisProperties, OuterDeadZone);
	static_assert(FInputAxisProperties_OuterDeadZone_Offset == 0x4, "FInputAxisProperties::OuterDeadZone offset is not 4");
	auto constexpr FInputAxisProperties_Sensitivity_Offset = offsetof(FInputAxisProperties, Sensitivity);
	static_assert(FInputAxisProperties_Sensitivity_Offset == 0x8, "FInputAxisProperties::Sensitivity offset is not 8");
	auto constexpr FInputAxisProperties_Exponent_Offset = offsetof(FInputAxisProperties, Exponent);
	static_assert(FInputAxisProperties_Exponent_Offset == 0xc, "FInputAxisProperties::Exponent offset is not c");
	auto constexpr FInputAxisProperties_MultiplierAxisValueCurve_Offset = offsetof(FInputAxisProperties, MultiplierAxisValueCurve);
	static_assert(FInputAxisProperties_MultiplierAxisValueCurve_Offset == 0x18, "FInputAxisProperties::MultiplierAxisValueCurve offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
