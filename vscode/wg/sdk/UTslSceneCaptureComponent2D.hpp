#pragma once
#include "USceneCaptureComponent2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSceneCaptureComponent2D // Size: 0xAF0
	: public USceneCaptureComponent2D // Size: 0xAE0
{
private:
	typedef UTslSceneCaptureComponent2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1492); // id32("Class TslGame.TslSceneCaptureComponent2D")
		return ptr;
	}
	uint8_t UnknownDataAE0[0x8];
	ExternalPtr<struct UWorld> World; /* Ofs: 0xAE8 Size: 0x8 - ObjectProperty TslGame.TslSceneCaptureComponent2D.World */


	inline bool SetWorld(t_structHelper inst, ExternalPtr<struct UWorld> value) { inst.WriteOffset(0xAE8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSceneCaptureComponent2D = sizeof(UTslSceneCaptureComponent2D); // 2800
    static_assert(sizeof(UTslSceneCaptureComponent2D) == 0xAF0, "Size of UTslSceneCaptureComponent2D is not correct.");
	auto constexpr UTslSceneCaptureComponent2D_World_Offset = offsetof(UTslSceneCaptureComponent2D, World);
	static_assert(UTslSceneCaptureComponent2D_World_Offset == 0xae8, "UTslSceneCaptureComponent2D::World offset is not ae8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
