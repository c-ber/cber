#pragma once
#include "UEnvQueryTest.hpp"
#include "FEnvTraceData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_Project // Size: 0x1F8
	: public UEnvQueryTest // Size: 0x1C8
{
private:
	typedef UEnvQueryTest_Project t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(646); // id32("Class AIModule.EnvQueryTest_Project")
		return ptr;
	}
	FEnvTraceData ProjectionData; /* Ofs: 0x1C8 Size: 0x30 - StructProperty AIModule.EnvQueryTest_Project.ProjectionData */


	inline bool SetProjectionData(t_structHelper inst, FEnvTraceData value) { inst.WriteOffset(0x1C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_Project = sizeof(UEnvQueryTest_Project); // 504
    static_assert(sizeof(UEnvQueryTest_Project) == 0x1F8, "Size of UEnvQueryTest_Project is not correct.");
	auto constexpr UEnvQueryTest_Project_ProjectionData_Offset = offsetof(UEnvQueryTest_Project, ProjectionData);
	static_assert(UEnvQueryTest_Project_ProjectionData_Offset == 0x1c8, "UEnvQueryTest_Project::ProjectionData offset is not 1c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
