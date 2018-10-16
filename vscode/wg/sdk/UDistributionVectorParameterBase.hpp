#pragma once
#include "UDistributionVectorConstant.hpp"
#include "FVector.hpp"
#include "DistributionParamMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionVectorParameterBase // Size: 0x98
	: public UDistributionVectorConstant // Size: 0x58
{
private:
	typedef UDistributionVectorParameterBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(748); // id32("Class Engine.DistributionVectorParameterBase")
		return ptr;
	}
	FName ParameterName; /* Ofs: 0x58 Size: 0x8 - NameProperty Engine.DistributionVectorParameterBase.ParameterName */
	FVector MinInput; /* Ofs: 0x60 Size: 0xC - StructProperty Engine.DistributionVectorParameterBase.MinInput */
	FVector MaxInput; /* Ofs: 0x6C Size: 0xC - StructProperty Engine.DistributionVectorParameterBase.MaxInput */
	FVector MinOutput; /* Ofs: 0x78 Size: 0xC - StructProperty Engine.DistributionVectorParameterBase.MinOutput */
	FVector MaxOutput; /* Ofs: 0x84 Size: 0xC - StructProperty Engine.DistributionVectorParameterBase.MaxOutput */
	TEnumAsByte<enum DistributionParamMode> ParamModes[3]; /* Ofs: 0x3 Size: 0x1 - ByteProperty Engine.DistributionVectorParameterBase.ParamModes */
	uint8_t UnknownData93[0x5];


	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x58, value); }
	inline bool SetMinInput(t_structHelper inst, FVector value) { inst.WriteOffset(0x60, value); }
	inline bool SetMaxInput(t_structHelper inst, FVector value) { inst.WriteOffset(0x6C, value); }
	inline bool SetMinOutput(t_structHelper inst, FVector value) { inst.WriteOffset(0x78, value); }
	inline bool SetMaxOutput(t_structHelper inst, FVector value) { inst.WriteOffset(0x84, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionVectorParameterBase = sizeof(UDistributionVectorParameterBase); // 152
    static_assert(sizeof(UDistributionVectorParameterBase) == 0x98, "Size of UDistributionVectorParameterBase is not correct.");
	auto constexpr UDistributionVectorParameterBase_ParameterName_Offset = offsetof(UDistributionVectorParameterBase, ParameterName);
	static_assert(UDistributionVectorParameterBase_ParameterName_Offset == 0x58, "UDistributionVectorParameterBase::ParameterName offset is not 58");
	auto constexpr UDistributionVectorParameterBase_MinInput_Offset = offsetof(UDistributionVectorParameterBase, MinInput);
	static_assert(UDistributionVectorParameterBase_MinInput_Offset == 0x60, "UDistributionVectorParameterBase::MinInput offset is not 60");
	auto constexpr UDistributionVectorParameterBase_MaxInput_Offset = offsetof(UDistributionVectorParameterBase, MaxInput);
	static_assert(UDistributionVectorParameterBase_MaxInput_Offset == 0x6c, "UDistributionVectorParameterBase::MaxInput offset is not 6c");
	auto constexpr UDistributionVectorParameterBase_MinOutput_Offset = offsetof(UDistributionVectorParameterBase, MinOutput);
	static_assert(UDistributionVectorParameterBase_MinOutput_Offset == 0x78, "UDistributionVectorParameterBase::MinOutput offset is not 78");
	auto constexpr UDistributionVectorParameterBase_MaxOutput_Offset = offsetof(UDistributionVectorParameterBase, MaxOutput);
	static_assert(UDistributionVectorParameterBase_MaxOutput_Offset == 0x84, "UDistributionVectorParameterBase::MaxOutput offset is not 84");
	auto constexpr UDistributionVectorParameterBase_ParamModes_Offset = offsetof(UDistributionVectorParameterBase, ParamModes);
	static_assert(UDistributionVectorParameterBase_ParamModes_Offset == 0x90, "UDistributionVectorParameterBase::ParamModes offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
