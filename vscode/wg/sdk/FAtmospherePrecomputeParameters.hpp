#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAtmospherePrecomputeParameters // Size: 0x2C
{
public:
    float DensityHeight; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.AtmospherePrecomputeParameters.DensityHeight */
    float DecayHeight; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.AtmospherePrecomputeParameters.DecayHeight */
    int32_t MaxScatteringOrder; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.MaxScatteringOrder */
    int32_t TransmittanceTexWidth; /* Ofs: 0xC Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.TransmittanceTexWidth */
    int32_t TransmittanceTexHeight; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.TransmittanceTexHeight */
    int32_t IrradianceTexWidth; /* Ofs: 0x14 Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.IrradianceTexWidth */
    int32_t IrradianceTexHeight; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.IrradianceTexHeight */
    int32_t InscatterAltitudeSampleNum; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.InscatterAltitudeSampleNum */
    int32_t InscatterMuNum; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.InscatterMuNum */
    int32_t InscatterMuSNum; /* Ofs: 0x24 Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.InscatterMuSNum */
    int32_t InscatterNuNum; /* Ofs: 0x28 Size: 0x4 IntProperty Engine.AtmospherePrecomputeParameters.InscatterNuNum */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAtmospherePrecomputeParameters = sizeof(FAtmospherePrecomputeParameters); // 44
    static_assert(sizeof(FAtmospherePrecomputeParameters) == 0x2C, "Size of FAtmospherePrecomputeParameters is not correct.");
	auto constexpr FAtmospherePrecomputeParameters_DensityHeight_Offset = offsetof(FAtmospherePrecomputeParameters, DensityHeight);
	static_assert(FAtmospherePrecomputeParameters_DensityHeight_Offset == 0x0, "FAtmospherePrecomputeParameters::DensityHeight offset is not 0");
	auto constexpr FAtmospherePrecomputeParameters_DecayHeight_Offset = offsetof(FAtmospherePrecomputeParameters, DecayHeight);
	static_assert(FAtmospherePrecomputeParameters_DecayHeight_Offset == 0x4, "FAtmospherePrecomputeParameters::DecayHeight offset is not 4");
	auto constexpr FAtmospherePrecomputeParameters_MaxScatteringOrder_Offset = offsetof(FAtmospherePrecomputeParameters, MaxScatteringOrder);
	static_assert(FAtmospherePrecomputeParameters_MaxScatteringOrder_Offset == 0x8, "FAtmospherePrecomputeParameters::MaxScatteringOrder offset is not 8");
	auto constexpr FAtmospherePrecomputeParameters_TransmittanceTexWidth_Offset = offsetof(FAtmospherePrecomputeParameters, TransmittanceTexWidth);
	static_assert(FAtmospherePrecomputeParameters_TransmittanceTexWidth_Offset == 0xc, "FAtmospherePrecomputeParameters::TransmittanceTexWidth offset is not c");
	auto constexpr FAtmospherePrecomputeParameters_TransmittanceTexHeight_Offset = offsetof(FAtmospherePrecomputeParameters, TransmittanceTexHeight);
	static_assert(FAtmospherePrecomputeParameters_TransmittanceTexHeight_Offset == 0x10, "FAtmospherePrecomputeParameters::TransmittanceTexHeight offset is not 10");
	auto constexpr FAtmospherePrecomputeParameters_IrradianceTexWidth_Offset = offsetof(FAtmospherePrecomputeParameters, IrradianceTexWidth);
	static_assert(FAtmospherePrecomputeParameters_IrradianceTexWidth_Offset == 0x14, "FAtmospherePrecomputeParameters::IrradianceTexWidth offset is not 14");
	auto constexpr FAtmospherePrecomputeParameters_IrradianceTexHeight_Offset = offsetof(FAtmospherePrecomputeParameters, IrradianceTexHeight);
	static_assert(FAtmospherePrecomputeParameters_IrradianceTexHeight_Offset == 0x18, "FAtmospherePrecomputeParameters::IrradianceTexHeight offset is not 18");
	auto constexpr FAtmospherePrecomputeParameters_InscatterAltitudeSampleNum_Offset = offsetof(FAtmospherePrecomputeParameters, InscatterAltitudeSampleNum);
	static_assert(FAtmospherePrecomputeParameters_InscatterAltitudeSampleNum_Offset == 0x1c, "FAtmospherePrecomputeParameters::InscatterAltitudeSampleNum offset is not 1c");
	auto constexpr FAtmospherePrecomputeParameters_InscatterMuNum_Offset = offsetof(FAtmospherePrecomputeParameters, InscatterMuNum);
	static_assert(FAtmospherePrecomputeParameters_InscatterMuNum_Offset == 0x20, "FAtmospherePrecomputeParameters::InscatterMuNum offset is not 20");
	auto constexpr FAtmospherePrecomputeParameters_InscatterMuSNum_Offset = offsetof(FAtmospherePrecomputeParameters, InscatterMuSNum);
	static_assert(FAtmospherePrecomputeParameters_InscatterMuSNum_Offset == 0x24, "FAtmospherePrecomputeParameters::InscatterMuSNum offset is not 24");
	auto constexpr FAtmospherePrecomputeParameters_InscatterNuNum_Offset = offsetof(FAtmospherePrecomputeParameters, InscatterNuNum);
	static_assert(FAtmospherePrecomputeParameters_InscatterNuNum_Offset == 0x28, "FAtmospherePrecomputeParameters::InscatterNuNum offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
