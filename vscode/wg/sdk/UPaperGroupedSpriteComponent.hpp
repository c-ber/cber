#pragma once
#include "UMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperGroupedSpriteComponent // Size: 0xA20
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UPaperGroupedSpriteComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2028); // id32("Class Paper2D.PaperGroupedSpriteComponent")
		return ptr;
	}
	TArray<ExternalPtr<struct UMaterialInterface>> InstanceMaterials; /* Ofs: 0x9F0 Size: 0x10 - ArrayProperty Paper2D.PaperGroupedSpriteComponent.InstanceMaterials */
	TArray<struct FSpriteInstanceData> PerInstanceSpriteData; /* Ofs: 0xA00 Size: 0x10 - ArrayProperty Paper2D.PaperGroupedSpriteComponent.PerInstanceSpriteData */
	uint8_t UnknownDataA10[0x10];


	inline bool SetInstanceMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetPerInstanceSpriteData(t_structHelper inst, TArray<struct FSpriteInstanceData> value) { inst.WriteOffset(0xA00, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperGroupedSpriteComponent = sizeof(UPaperGroupedSpriteComponent); // 2592
    static_assert(sizeof(UPaperGroupedSpriteComponent) == 0xA20, "Size of UPaperGroupedSpriteComponent is not correct.");
	auto constexpr UPaperGroupedSpriteComponent_InstanceMaterials_Offset = offsetof(UPaperGroupedSpriteComponent, InstanceMaterials);
	static_assert(UPaperGroupedSpriteComponent_InstanceMaterials_Offset == 0x9f0, "UPaperGroupedSpriteComponent::InstanceMaterials offset is not 9f0");
	auto constexpr UPaperGroupedSpriteComponent_PerInstanceSpriteData_Offset = offsetof(UPaperGroupedSpriteComponent, PerInstanceSpriteData);
	static_assert(UPaperGroupedSpriteComponent_PerInstanceSpriteData_Offset == 0xa00, "UPaperGroupedSpriteComponent::PerInstanceSpriteData offset is not a00");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
