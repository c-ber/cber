#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVMExternalFunctionBindingInfo // Size: 0x30
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Niagara.VMExternalFunctionBindingInfo.Name */
    FGuid OwnerId; /* Ofs: 0x8 Size: 0x10 StructProperty Niagara.VMExternalFunctionBindingInfo.OwnerId */
    TArray<bool> InputParamLocations; /* Ofs: 0x18 Size: 0x10 ArrayProperty Niagara.VMExternalFunctionBindingInfo.InputParamLocations */
    int32_t NumOutputs; /* Ofs: 0x28 Size: 0x4 IntProperty Niagara.VMExternalFunctionBindingInfo.NumOutputs */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVMExternalFunctionBindingInfo = sizeof(FVMExternalFunctionBindingInfo); // 48
    static_assert(sizeof(FVMExternalFunctionBindingInfo) == 0x30, "Size of FVMExternalFunctionBindingInfo is not correct.");
	auto constexpr FVMExternalFunctionBindingInfo_Name_Offset = offsetof(FVMExternalFunctionBindingInfo, Name);
	static_assert(FVMExternalFunctionBindingInfo_Name_Offset == 0x0, "FVMExternalFunctionBindingInfo::Name offset is not 0");
	auto constexpr FVMExternalFunctionBindingInfo_OwnerId_Offset = offsetof(FVMExternalFunctionBindingInfo, OwnerId);
	static_assert(FVMExternalFunctionBindingInfo_OwnerId_Offset == 0x8, "FVMExternalFunctionBindingInfo::OwnerId offset is not 8");
	auto constexpr FVMExternalFunctionBindingInfo_InputParamLocations_Offset = offsetof(FVMExternalFunctionBindingInfo, InputParamLocations);
	static_assert(FVMExternalFunctionBindingInfo_InputParamLocations_Offset == 0x18, "FVMExternalFunctionBindingInfo::InputParamLocations offset is not 18");
	auto constexpr FVMExternalFunctionBindingInfo_NumOutputs_Offset = offsetof(FVMExternalFunctionBindingInfo, NumOutputs);
	static_assert(FVMExternalFunctionBindingInfo_NumOutputs_Offset == 0x28, "FVMExternalFunctionBindingInfo::NumOutputs offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
