#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBTCompositeChild // Size: 0x30
{
public:
    ExternalPtr<struct UBTCompositeNode> ChildComposite; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.BTCompositeChild.ChildComposite */
    ExternalPtr<struct UBTTaskNode> ChildTask; /* Ofs: 0x8 Size: 0x8 ObjectProperty AIModule.BTCompositeChild.ChildTask */
    TArray<ExternalPtr<struct UBTDecorator>> Decorators; /* Ofs: 0x10 Size: 0x10 ArrayProperty AIModule.BTCompositeChild.Decorators */
    TArray<struct FBTDecoratorLogic> DecoratorOps; /* Ofs: 0x20 Size: 0x10 ArrayProperty AIModule.BTCompositeChild.DecoratorOps */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBTCompositeChild = sizeof(FBTCompositeChild); // 48
    static_assert(sizeof(FBTCompositeChild) == 0x30, "Size of FBTCompositeChild is not correct.");
	auto constexpr FBTCompositeChild_ChildComposite_Offset = offsetof(FBTCompositeChild, ChildComposite);
	static_assert(FBTCompositeChild_ChildComposite_Offset == 0x0, "FBTCompositeChild::ChildComposite offset is not 0");
	auto constexpr FBTCompositeChild_ChildTask_Offset = offsetof(FBTCompositeChild, ChildTask);
	static_assert(FBTCompositeChild_ChildTask_Offset == 0x8, "FBTCompositeChild::ChildTask offset is not 8");
	auto constexpr FBTCompositeChild_Decorators_Offset = offsetof(FBTCompositeChild, Decorators);
	static_assert(FBTCompositeChild_Decorators_Offset == 0x10, "FBTCompositeChild::Decorators offset is not 10");
	auto constexpr FBTCompositeChild_DecoratorOps_Offset = offsetof(FBTCompositeChild, DecoratorOps);
	static_assert(FBTCompositeChild_DecoratorOps_Offset == 0x20, "FBTCompositeChild::DecoratorOps offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
