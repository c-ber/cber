#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslParticleInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTslParticleInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1845); // id32("Class TslGame.TslParticleInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslParticleInterface = sizeof(UTslParticleInterface); // 48
    static_assert(sizeof(UTslParticleInterface) == 0x30, "Size of UTslParticleInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
