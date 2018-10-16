#pragma once
#include "UEnvQueryGenerator.hpp"
#include "FEnvTraceData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_ProjectedPoints // Size: 0x88
	: public UEnvQueryGenerator // Size: 0x58
{
private:
	typedef UEnvQueryGenerator_ProjectedPoints t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(633); // id32("Class AIModule.EnvQueryGenerator_ProjectedPoints")
		return ptr;
	}
	FEnvTraceData ProjectionData; /* Ofs: 0x58 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_ProjectedPoints.ProjectionData */


	inline bool SetProjectionData(t_structHelper inst, FEnvTraceData value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_ProjectedPoints = sizeof(UEnvQueryGenerator_ProjectedPoints); // 136
    static_assert(sizeof(UEnvQueryGenerator_ProjectedPoints) == 0x88, "Size of UEnvQueryGenerator_ProjectedPoints is not correct.");
	auto constexpr UEnvQueryGenerator_ProjectedPoints_ProjectionData_Offset = offsetof(UEnvQueryGenerator_ProjectedPoints, ProjectionData);
	static_assert(UEnvQueryGenerator_ProjectedPoints_ProjectionData_Offset == 0x58, "UEnvQueryGenerator_ProjectedPoints::ProjectionData offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
