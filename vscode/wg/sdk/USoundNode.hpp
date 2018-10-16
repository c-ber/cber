#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNode // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef USoundNode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1204); // id32("Class Engine.SoundNode")
		return ptr;
	}
	TArray<ExternalPtr<struct USoundNode>> ChildNodes; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.SoundNode.ChildNodes */


	inline bool SetChildNodes(t_structHelper inst, TArray<ExternalPtr<struct USoundNode>> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNode = sizeof(USoundNode); // 64
    static_assert(sizeof(USoundNode) == 0x40, "Size of USoundNode is not correct.");
	auto constexpr USoundNode_ChildNodes_Offset = offsetof(USoundNode, ChildNodes);
	static_assert(USoundNode_ChildNodes_Offset == 0x30, "USoundNode::ChildNodes offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
