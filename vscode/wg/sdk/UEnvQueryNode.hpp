#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryNode // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UEnvQueryNode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(627); // id32("Class AIModule.EnvQueryNode")
		return ptr;
	}
	int32_t VerNum; /* Ofs: 0x30 Size: 0x4 - IntProperty AIModule.EnvQueryNode.VerNum */
	uint8_t UnknownData34[0x4];


	inline bool SetVerNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryNode = sizeof(UEnvQueryNode); // 56
    static_assert(sizeof(UEnvQueryNode) == 0x38, "Size of UEnvQueryNode is not correct.");
	auto constexpr UEnvQueryNode_VerNum_Offset = offsetof(UEnvQueryNode, VerNum);
	static_assert(UEnvQueryNode_VerNum_Offset == 0x30, "UEnvQueryNode::VerNum offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
