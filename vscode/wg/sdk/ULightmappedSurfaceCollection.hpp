#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightmappedSurfaceCollection // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef ULightmappedSurfaceCollection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(852); // id32("Class Engine.LightmappedSurfaceCollection")
		return ptr;
	}
	ExternalPtr<struct UModel> SourceModel; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.LightmappedSurfaceCollection.SourceModel */
	TArray<int32_t> Surfaces; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.LightmappedSurfaceCollection.Surfaces */


	inline bool SetSourceModel(t_structHelper inst, ExternalPtr<struct UModel> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSurfaces(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightmappedSurfaceCollection = sizeof(ULightmappedSurfaceCollection); // 72
    static_assert(sizeof(ULightmappedSurfaceCollection) == 0x48, "Size of ULightmappedSurfaceCollection is not correct.");
	auto constexpr ULightmappedSurfaceCollection_SourceModel_Offset = offsetof(ULightmappedSurfaceCollection, SourceModel);
	static_assert(ULightmappedSurfaceCollection_SourceModel_Offset == 0x30, "ULightmappedSurfaceCollection::SourceModel offset is not 30");
	auto constexpr ULightmappedSurfaceCollection_Surfaces_Offset = offsetof(ULightmappedSurfaceCollection, Surfaces);
	static_assert(ULightmappedSurfaceCollection_Surfaces_Offset == 0x38, "ULightmappedSurfaceCollection::Surfaces offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
