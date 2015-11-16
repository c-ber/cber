#include "cb_time.h"

//msec millisecond
cb_code_t msecond_to_time(int64_t msec, uint8_t time_zone, Time *time)
{
    int64_t seconds = 0;
    CB_PARAM_POINT_CHECK(time);

    seconds =  msec /1000 - SECONDS_HOUR*time_zone;
    time->sec_tm = (time_t)(seconds);
    localtime_r( &(time->sec_tm), &(time->stuc_tm) );
    strftime(time->str_tm,64, "%Y-%m-%d %H:%M:%S", &(time->stuc_tm) );
    return CB_OK;
}

