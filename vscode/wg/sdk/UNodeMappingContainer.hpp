#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNodeMappingContainer // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UNodeMappingContainer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1045); // id32("Class Engine.NodeMappingContainer")
		return ptr;
	}
	TMap<struct FName, struct FNodeMap> NodeMapping; /* Ofs: 0x30 Size: 0x50 - MapProperty Engine.NodeMappingContainer.NodeMapping */
	TAssetPtr<ExternalPtr<struct UBlueprint>> SourceAsset; /* Ofs: 0x80 Size: 0x1C - AssetObjectProperty Engine.NodeMappingContainer.SourceAsset */
	uint8_t UnknownData9C[0x4];


	inline bool SetNodeMapping(t_structHelper inst, TMap<struct FName, struct FNodeMap> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSourceAsset(t_structHelper inst, TAssetPtr<ExternalPtr<struct UBlueprint>> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNodeMappingContainer = sizeof(UNodeMappingContainer); // 160
    static_assert(sizeof(UNodeMappingContainer) == 0xA0, "Size of UNodeMappingContainer is not correct.");
	auto constexpr UNodeMappingContainer_NodeMapping_Offset = offsetof(UNodeMappingContainer, NodeMapping);
	static_assert(UNodeMappingContainer_NodeMapping_Offset == 0x30, "UNodeMappingContainer::NodeMapping offset is not 30");
	auto constexpr UNodeMappingContainer_SourceAsset_Offset = offsetof(UNodeMappingContainer, SourceAsset);
	static_assert(UNodeMappingContainer_SourceAsset_Offset == 0x80, "UNodeMappingContainer::SourceAsset offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
