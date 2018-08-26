#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMorphTarget // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UMorphTarget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1026); // id32("Class Engine.MorphTarget")
		return ptr;
	}
	ExternalPtr<struct USkeletalMesh> BaseSkelMesh; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.MorphTarget.BaseSkelMesh */
	uint8_t UnknownData38[0x10];


	inline bool SetBaseSkelMesh(t_structHelper inst, ExternalPtr<struct USkeletalMesh> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMorphTarget = sizeof(UMorphTarget); // 72
    static_assert(sizeof(UMorphTarget) == 0x48, "Size of UMorphTarget is not correct.");
	auto constexpr UMorphTarget_BaseSkelMesh_Offset = offsetof(UMorphTarget, BaseSkelMesh);
	static_assert(UMorphTarget_BaseSkelMesh_Offset == 0x30, "UMorphTarget::BaseSkelMesh offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
