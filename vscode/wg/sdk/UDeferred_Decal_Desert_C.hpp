#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDeferred_Decal_Desert_C // Size: 0x434
	: public UActor // Size: 0x410
{
private:
	typedef UDeferred_Decal_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(145610); // id32("BlueprintGeneratedClass Deferred_Decal_Desert.Deferred_Decal_Desert_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty Deferred_Decal_Desert.Deferred_Decal_Desert_C.UberGraphFrame */
	ExternalPtr<struct UDecalComponent> Decal; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Deferred_Decal_Desert.Deferred_Decal_Desert_C.Decal */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x420 Size: 0x8 - ObjectProperty Deferred_Decal_Desert.Deferred_Decal_Desert_C.DefaultSceneRoot */
	FVector MyLoc; /* Ofs: 0x428 Size: 0xC - StructProperty Deferred_Decal_Desert.Deferred_Decal_Desert_C.MyLoc */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetDecal(t_structHelper inst, ExternalPtr<struct UDecalComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetMyLoc(t_structHelper inst, FVector value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDeferred_Decal_Desert_C = sizeof(UDeferred_Decal_Desert_C); // 1076
    static_assert(sizeof(UDeferred_Decal_Desert_C) == 0x434, "Size of UDeferred_Decal_Desert_C is not correct.");
	auto constexpr UDeferred_Decal_Desert_C_UberGraphFrame_Offset = offsetof(UDeferred_Decal_Desert_C, UberGraphFrame);
	static_assert(UDeferred_Decal_Desert_C_UberGraphFrame_Offset == 0x410, "UDeferred_Decal_Desert_C::UberGraphFrame offset is not 410");
	auto constexpr UDeferred_Decal_Desert_C_Decal_Offset = offsetof(UDeferred_Decal_Desert_C, Decal);
	static_assert(UDeferred_Decal_Desert_C_Decal_Offset == 0x418, "UDeferred_Decal_Desert_C::Decal offset is not 418");
	auto constexpr UDeferred_Decal_Desert_C_DefaultSceneRoot_Offset = offsetof(UDeferred_Decal_Desert_C, DefaultSceneRoot);
	static_assert(UDeferred_Decal_Desert_C_DefaultSceneRoot_Offset == 0x420, "UDeferred_Decal_Desert_C::DefaultSceneRoot offset is not 420");
	auto constexpr UDeferred_Decal_Desert_C_MyLoc_Offset = offsetof(UDeferred_Decal_Desert_C, MyLoc);
	static_assert(UDeferred_Decal_Desert_C_MyLoc_Offset == 0x428, "UDeferred_Decal_Desert_C::MyLoc offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
