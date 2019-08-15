#include "win_version.h"

dq_code_t get_system_version(OSVERSIONINFOEX *os)
{
	dq_code_t ret = DQ_OK;

	os->dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);


	if(!GetVersionEx((OSVERSIONINFO *)os))
	{
		return DQ_FAIL;
	}

	return ret;
}