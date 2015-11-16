
#ifndef CB_TIME_H_
#define CB_TIME_H_

#include    <time.h>
#include    <stdint.h>

#include    <cb_code.h>

/* �ö����˼������Ʋ�ʵ�ֹ��� */
typedef struct
{
    struct tm stuc_tm;        /* ȡ����ֵ */
    time_t    sec_tm;        /* ������uint64_t */
    uint8_t   str_tm[32];    /* ����ַ���������ʾ��ӡ
                                �� 2015-11-15 11:35:51*/
}Time;

#define SECONDS_MIN   60
#define SECONDS_HOUR  SECONDS_MIN*60
#define SECONDS_DAY   SECONDS_HOUR*24


cb_code_t msecond_to_time(int64_t msec, uint8_t time_zone, Time *time);
#endif /* CB_TIME_H_ */
