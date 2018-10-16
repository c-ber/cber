#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URig // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef URig t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1190); // id32("Class Engine.Rig")
		return ptr;
	}
	TArray<struct FTransformBase> TransformBases; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.Rig.TransformBases */
	TArray<struct FNode> Nodes; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.Rig.Nodes */


	inline bool SetTransformBases(t_structHelper inst, TArray<struct FTransformBase> value) { inst.WriteOffset(0x30, value); }
	inline bool SetNodes(t_structHelper inst, TArray<struct FNode> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURig = sizeof(URig); // 80
    static_assert(sizeof(URig) == 0x50, "Size of URig is not correct.");
	auto constexpr URig_TransformBases_Offset = offsetof(URig, TransformBases);
	static_assert(URig_TransformBases_Offset == 0x30, "URig::TransformBases offset is not 30");
	auto constexpr URig_Nodes_Offset = offsetof(URig, Nodes);
	static_assert(URig_Nodes_Offset == 0x40, "URig::Nodes offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
