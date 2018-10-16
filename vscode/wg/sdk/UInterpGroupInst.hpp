#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpGroupInst // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UInterpGroupInst t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(793); // id32("Class Engine.InterpGroupInst")
		return ptr;
	}
	ExternalPtr<struct UInterpGroup> Group; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.InterpGroupInst.Group */
	ExternalPtr<struct UActor> GroupActor; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.InterpGroupInst.GroupActor */
	TArray<ExternalPtr<struct UInterpTrackInst>> TrackInst; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.InterpGroupInst.TrackInst */


	inline bool SetGroup(t_structHelper inst, ExternalPtr<struct UInterpGroup> value) { inst.WriteOffset(0x30, value); }
	inline bool SetGroupActor(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x38, value); }
	inline bool SetTrackInst(t_structHelper inst, TArray<ExternalPtr<struct UInterpTrackInst>> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpGroupInst = sizeof(UInterpGroupInst); // 80
    static_assert(sizeof(UInterpGroupInst) == 0x50, "Size of UInterpGroupInst is not correct.");
	auto constexpr UInterpGroupInst_Group_Offset = offsetof(UInterpGroupInst, Group);
	static_assert(UInterpGroupInst_Group_Offset == 0x30, "UInterpGroupInst::Group offset is not 30");
	auto constexpr UInterpGroupInst_GroupActor_Offset = offsetof(UInterpGroupInst, GroupActor);
	static_assert(UInterpGroupInst_GroupActor_Offset == 0x38, "UInterpGroupInst::GroupActor offset is not 38");
	auto constexpr UInterpGroupInst_TrackInst_Offset = offsetof(UInterpGroupInst, TrackInst);
	static_assert(UInterpGroupInst_TrackInst_Offset == 0x40, "UInterpGroupInst::TrackInst offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
