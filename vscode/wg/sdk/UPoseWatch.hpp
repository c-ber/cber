#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPoseWatch // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UPoseWatch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(674); // id32("Class Engine.PoseWatch")
		return ptr;
	}
	ExternalPtr<struct UEdGraphNode> Node; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.PoseWatch.Node */
	FColor PoseWatchColour; /* Ofs: 0x38 Size: 0x4 - StructProperty Engine.PoseWatch.PoseWatchColour */
	uint8_t UnknownData3C[0x4];


	inline bool SetNode(t_structHelper inst, ExternalPtr<struct UEdGraphNode> value) { inst.WriteOffset(0x30, value); }
	inline bool SetPoseWatchColour(t_structHelper inst, FColor value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPoseWatch = sizeof(UPoseWatch); // 64
    static_assert(sizeof(UPoseWatch) == 0x40, "Size of UPoseWatch is not correct.");
	auto constexpr UPoseWatch_Node_Offset = offsetof(UPoseWatch, Node);
	static_assert(UPoseWatch_Node_Offset == 0x30, "UPoseWatch::Node offset is not 30");
	auto constexpr UPoseWatch_PoseWatchColour_Offset = offsetof(UPoseWatch, PoseWatchColour);
	static_assert(UPoseWatch_PoseWatchColour_Offset == 0x38, "UPoseWatch::PoseWatchColour offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
