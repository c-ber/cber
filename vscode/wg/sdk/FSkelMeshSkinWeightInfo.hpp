#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkelMeshSkinWeightInfo // Size: 0x28
{
public:
    int32_t Bones[8]; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.SkelMeshSkinWeightInfo.Bones */
    uint8_t Weights[8]; /* Ofs: 0x20 Size: 0x1 ByteProperty Engine.SkelMeshSkinWeightInfo.Weights */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkelMeshSkinWeightInfo = sizeof(FSkelMeshSkinWeightInfo); // 40
    static_assert(sizeof(FSkelMeshSkinWeightInfo) == 0x28, "Size of FSkelMeshSkinWeightInfo is not correct.");
	auto constexpr FSkelMeshSkinWeightInfo_Bones_Offset = offsetof(FSkelMeshSkinWeightInfo, Bones);
	static_assert(FSkelMeshSkinWeightInfo_Bones_Offset == 0x0, "FSkelMeshSkinWeightInfo::Bones offset is not 0");
	auto constexpr FSkelMeshSkinWeightInfo_Weights_Offset = offsetof(FSkelMeshSkinWeightInfo, Weights);
	static_assert(FSkelMeshSkinWeightInfo_Weights_Offset == 0x20, "FSkelMeshSkinWeightInfo::Weights offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
