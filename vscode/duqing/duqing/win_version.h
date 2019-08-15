#include <windows.h>
#include <stdio.h>
#include "dq_errno.h"



#define WIN_NT4                    0x0400
#define WIN_WIN2K                  0x0500
#define WIN_WINXP                  0x0501
#define WIN_WS03                   0x0502
#define WIN_VISTA                  0x0600
#define WIN_WIN7                   0x0601




dq_code_t get_system_version(OSVERSIONINFOEX *pos);