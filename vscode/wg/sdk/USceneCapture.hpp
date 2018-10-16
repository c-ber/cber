#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USceneCapture // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef USceneCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1782); // id32("Class Engine.SceneCapture")
		return ptr;
	}
//	ExternalPtr<struct UStaticMeshComponent> MeshComp; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.SceneCapture.MeshComp */


//	inline bool SetMeshComp(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSceneCapture = sizeof(USceneCapture); // 1040
    static_assert(sizeof(USceneCapture) == 0x410, "Size of USceneCapture is not correct.");
//	auto constexpr USceneCapture_MeshComp_Offset = offsetof(USceneCapture, MeshComp);
//	static_assert(USceneCapture_MeshComp_Offset == 0x408, "USceneCapture::MeshComp offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
