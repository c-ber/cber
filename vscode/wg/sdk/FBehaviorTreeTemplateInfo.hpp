#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBehaviorTreeTemplateInfo // Size: 0x18
{
public:
    ExternalPtr<struct UBehaviorTree> Asset; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.BehaviorTreeTemplateInfo.Asset */
    ExternalPtr<struct UBTCompositeNode> Template; /* Ofs: 0x8 Size: 0x8 ObjectProperty AIModule.BehaviorTreeTemplateInfo.Template */
    uint8_t UnknownData10[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBehaviorTreeTemplateInfo = sizeof(FBehaviorTreeTemplateInfo); // 24
    static_assert(sizeof(FBehaviorTreeTemplateInfo) == 0x18, "Size of FBehaviorTreeTemplateInfo is not correct.");
	auto constexpr FBehaviorTreeTemplateInfo_Asset_Offset = offsetof(FBehaviorTreeTemplateInfo, Asset);
	static_assert(FBehaviorTreeTemplateInfo_Asset_Offset == 0x0, "FBehaviorTreeTemplateInfo::Asset offset is not 0");
	auto constexpr FBehaviorTreeTemplateInfo_Template_Offset = offsetof(FBehaviorTreeTemplateInfo, Template);
	static_assert(FBehaviorTreeTemplateInfo_Template_Offset == 0x8, "FBehaviorTreeTemplateInfo::Template offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
