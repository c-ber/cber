#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMeshSimplificationSettings // Size: 0x48
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UMeshSimplificationSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(729); // id32("Class Engine.MeshSimplificationSettings")
		return ptr;
	}
	FName MeshReductionModuleName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.MeshSimplificationSettings.MeshReductionModuleName */


	inline bool SetMeshReductionModuleName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMeshSimplificationSettings = sizeof(UMeshSimplificationSettings); // 72
    static_assert(sizeof(UMeshSimplificationSettings) == 0x48, "Size of UMeshSimplificationSettings is not correct.");
	auto constexpr UMeshSimplificationSettings_MeshReductionModuleName_Offset = offsetof(UMeshSimplificationSettings, MeshReductionModuleName);
	static_assert(UMeshSimplificationSettings_MeshReductionModuleName_Offset == 0x40, "UMeshSimplificationSettings::MeshReductionModuleName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
