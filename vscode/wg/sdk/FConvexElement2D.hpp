#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConvexElement2D // Size: 0x10
{
public:
    TArray<struct FVector2D> VertexData; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.ConvexElement2D.VertexData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConvexElement2D = sizeof(FConvexElement2D); // 16
    static_assert(sizeof(FConvexElement2D) == 0x10, "Size of FConvexElement2D is not correct.");
	auto constexpr FConvexElement2D_VertexData_Offset = offsetof(FConvexElement2D, VertexData);
	static_assert(FConvexElement2D_VertexData_Offset == 0x0, "FConvexElement2D::VertexData offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
