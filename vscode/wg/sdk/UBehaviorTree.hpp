#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBehaviorTree // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef UBehaviorTree t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(553); // id32("Class AIModule.BehaviorTree")
		return ptr;
	}
	ExternalPtr<struct UBTCompositeNode> RootNode; /* Ofs: 0x30 Size: 0x8 - ObjectProperty AIModule.BehaviorTree.RootNode */
	ExternalPtr<struct UBlackboardData> BlackboardAsset; /* Ofs: 0x38 Size: 0x8 - ObjectProperty AIModule.BehaviorTree.BlackboardAsset */
	TArray<ExternalPtr<struct UBTDecorator>> RootDecorators; /* Ofs: 0x40 Size: 0x10 - ArrayProperty AIModule.BehaviorTree.RootDecorators */
	TArray<struct FBTDecoratorLogic> RootDecoratorOps; /* Ofs: 0x50 Size: 0x10 - ArrayProperty AIModule.BehaviorTree.RootDecoratorOps */
	uint8_t UnknownData60[0x8];


	inline bool SetRootNode(t_structHelper inst, ExternalPtr<struct UBTCompositeNode> value) { inst.WriteOffset(0x30, value); }
	inline bool SetBlackboardAsset(t_structHelper inst, ExternalPtr<struct UBlackboardData> value) { inst.WriteOffset(0x38, value); }
	inline bool SetRootDecorators(t_structHelper inst, TArray<ExternalPtr<struct UBTDecorator>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetRootDecoratorOps(t_structHelper inst, TArray<struct FBTDecoratorLogic> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBehaviorTree = sizeof(UBehaviorTree); // 104
    static_assert(sizeof(UBehaviorTree) == 0x68, "Size of UBehaviorTree is not correct.");
	auto constexpr UBehaviorTree_RootNode_Offset = offsetof(UBehaviorTree, RootNode);
	static_assert(UBehaviorTree_RootNode_Offset == 0x30, "UBehaviorTree::RootNode offset is not 30");
	auto constexpr UBehaviorTree_BlackboardAsset_Offset = offsetof(UBehaviorTree, BlackboardAsset);
	static_assert(UBehaviorTree_BlackboardAsset_Offset == 0x38, "UBehaviorTree::BlackboardAsset offset is not 38");
	auto constexpr UBehaviorTree_RootDecorators_Offset = offsetof(UBehaviorTree, RootDecorators);
	static_assert(UBehaviorTree_RootDecorators_Offset == 0x40, "UBehaviorTree::RootDecorators offset is not 40");
	auto constexpr UBehaviorTree_RootDecoratorOps_Offset = offsetof(UBehaviorTree, RootDecoratorOps);
	static_assert(UBehaviorTree_RootDecoratorOps_Offset == 0x50, "UBehaviorTree::RootDecoratorOps offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
