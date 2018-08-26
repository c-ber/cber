#pragma once
#include "UDistributionFloatConstant.hpp"
#include "DistributionParamMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionFloatParameterBase // Size: 0x68
	: public UDistributionFloatConstant // Size: 0x48
{
private:
	typedef UDistributionFloatParameterBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(741); // id32("Class Engine.DistributionFloatParameterBase")
		return ptr;
	}
	FName ParameterName; /* Ofs: 0x48 Size: 0x8 - NameProperty Engine.DistributionFloatParameterBase.ParameterName */
	float MinInput; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.DistributionFloatParameterBase.MinInput */
	float MaxInput; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.DistributionFloatParameterBase.MaxInput */
	float MinOutput; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.DistributionFloatParameterBase.MinOutput */
	float MaxOutput; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.DistributionFloatParameterBase.MaxOutput */
	TEnumAsByte<enum DistributionParamMode> ParamMode; /* Ofs: 0x60 Size: 0x1 - ByteProperty Engine.DistributionFloatParameterBase.ParamMode */
	uint8_t UnknownData61[0x7];


	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x48, value); }
	inline bool SetMinInput(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetMaxInput(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetMinOutput(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetMaxOutput(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetParamMode(t_structHelper inst, TEnumAsByte<enum DistributionParamMode> value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionFloatParameterBase = sizeof(UDistributionFloatParameterBase); // 104
    static_assert(sizeof(UDistributionFloatParameterBase) == 0x68, "Size of UDistributionFloatParameterBase is not correct.");
	auto constexpr UDistributionFloatParameterBase_ParameterName_Offset = offsetof(UDistributionFloatParameterBase, ParameterName);
	static_assert(UDistributionFloatParameterBase_ParameterName_Offset == 0x48, "UDistributionFloatParameterBase::ParameterName offset is not 48");
	auto constexpr UDistributionFloatParameterBase_MinInput_Offset = offsetof(UDistributionFloatParameterBase, MinInput);
	static_assert(UDistributionFloatParameterBase_MinInput_Offset == 0x50, "UDistributionFloatParameterBase::MinInput offset is not 50");
	auto constexpr UDistributionFloatParameterBase_MaxInput_Offset = offsetof(UDistributionFloatParameterBase, MaxInput);
	static_assert(UDistributionFloatParameterBase_MaxInput_Offset == 0x54, "UDistributionFloatParameterBase::MaxInput offset is not 54");
	auto constexpr UDistributionFloatParameterBase_MinOutput_Offset = offsetof(UDistributionFloatParameterBase, MinOutput);
	static_assert(UDistributionFloatParameterBase_MinOutput_Offset == 0x58, "UDistributionFloatParameterBase::MinOutput offset is not 58");
	auto constexpr UDistributionFloatParameterBase_MaxOutput_Offset = offsetof(UDistributionFloatParameterBase, MaxOutput);
	static_assert(UDistributionFloatParameterBase_MaxOutput_Offset == 0x5c, "UDistributionFloatParameterBase::MaxOutput offset is not 5c");
	auto constexpr UDistributionFloatParameterBase_ParamMode_Offset = offsetof(UDistributionFloatParameterBase, ParamMode);
	static_assert(UDistributionFloatParameterBase_ParamMode_Offset == 0x60, "UDistributionFloatParameterBase::ParamMode offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
