#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SubInstance // Size: 0xC8
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink InPose; /* Ofs: 0x30 Size: 0x18 StructProperty Engine.AnimNode_SubInstance.InPose */
    ExternalPtr<struct UClass> InstanceClass; /* Ofs: 0x48 Size: 0x8 ClassProperty Engine.AnimNode_SubInstance.InstanceClass */
    ExternalPtr<struct UAnimInstance> InstanceToRun; /* Ofs: 0x50 Size: 0x8 ObjectProperty Engine.AnimNode_SubInstance.InstanceToRun */
    TArray<ExternalPtr<struct UProperty>> InstanceProperties; /* Ofs: 0x58 Size: 0x10 ArrayProperty Engine.AnimNode_SubInstance.InstanceProperties */
    TArray<ExternalPtr<struct UProperty>> SubInstanceProperties; /* Ofs: 0x68 Size: 0x10 ArrayProperty Engine.AnimNode_SubInstance.SubInstanceProperties */
    TArray<struct FName> SourcePropertyNames; /* Ofs: 0x78 Size: 0x10 ArrayProperty Engine.AnimNode_SubInstance.SourcePropertyNames */
    TArray<struct FName> DestPropertyNames; /* Ofs: 0x88 Size: 0x10 ArrayProperty Engine.AnimNode_SubInstance.DestPropertyNames */
    uint8_t UnknownData98[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SubInstance = sizeof(FAnimNode_SubInstance); // 200
    static_assert(sizeof(FAnimNode_SubInstance) == 0xC8, "Size of FAnimNode_SubInstance is not correct.");
	auto constexpr FAnimNode_SubInstance_InPose_Offset = offsetof(FAnimNode_SubInstance, InPose);
	static_assert(FAnimNode_SubInstance_InPose_Offset == 0x30, "FAnimNode_SubInstance::InPose offset is not 30");
	auto constexpr FAnimNode_SubInstance_InstanceClass_Offset = offsetof(FAnimNode_SubInstance, InstanceClass);
	static_assert(FAnimNode_SubInstance_InstanceClass_Offset == 0x48, "FAnimNode_SubInstance::InstanceClass offset is not 48");
	auto constexpr FAnimNode_SubInstance_InstanceToRun_Offset = offsetof(FAnimNode_SubInstance, InstanceToRun);
	static_assert(FAnimNode_SubInstance_InstanceToRun_Offset == 0x50, "FAnimNode_SubInstance::InstanceToRun offset is not 50");
	auto constexpr FAnimNode_SubInstance_InstanceProperties_Offset = offsetof(FAnimNode_SubInstance, InstanceProperties);
	static_assert(FAnimNode_SubInstance_InstanceProperties_Offset == 0x58, "FAnimNode_SubInstance::InstanceProperties offset is not 58");
	auto constexpr FAnimNode_SubInstance_SubInstanceProperties_Offset = offsetof(FAnimNode_SubInstance, SubInstanceProperties);
	static_assert(FAnimNode_SubInstance_SubInstanceProperties_Offset == 0x68, "FAnimNode_SubInstance::SubInstanceProperties offset is not 68");
	auto constexpr FAnimNode_SubInstance_SourcePropertyNames_Offset = offsetof(FAnimNode_SubInstance, SourcePropertyNames);
	static_assert(FAnimNode_SubInstance_SourcePropertyNames_Offset == 0x78, "FAnimNode_SubInstance::SourcePropertyNames offset is not 78");
	auto constexpr FAnimNode_SubInstance_DestPropertyNames_Offset = offsetof(FAnimNode_SubInstance, DestPropertyNames);
	static_assert(FAnimNode_SubInstance_DestPropertyNames_Offset == 0x88, "FAnimNode_SubInstance::DestPropertyNames offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
