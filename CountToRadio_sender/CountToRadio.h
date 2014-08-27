/*************************************************************************
	> File Name: CountToRadio.h
	> Author: wangqi
	> Mail: 912293097@qq.com
	> Created Time: 2014年08月26日 星期二 17时50分18秒
 ************************************************************************/
#ifndef COUNT_TO_RADIO_H
#define COUNT_TO_RADIO_H
/*************************************************************************
 *struct define
 *************************************************************************/
typedef nx_struct CountStruct
{
   nx_uint16_t counter;
} CountStruct;

enum
{
    AM_Counter_Radio = 6,
    TIMER_PERIOD_MILLI = 300
};


#endif 
