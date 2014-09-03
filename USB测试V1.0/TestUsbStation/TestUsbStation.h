/*************************************************************************
	> File Name: TestUsbStation.h
	> Author:WangQi 
	> Mail:912293097@qq.com
	> Created Time: 2014年09月2日 星期二 10时04分30秒
	>发送端
 ************************************************************************/
#ifndef COUNT_TO_RADIO_H
#define COUNT_TO_RADIO_H
/*************************************************************************
 *struct define
 *************************************************************************/
typedef nx_struct CountStruct
{
	nx_uint16_t counter;
	nx_uint16_t RSSI;	
} CountStruct;

enum
{
    AM_Counter_Radio = 6,
    TIMER_PERIOD_MILLI = 1000,
};


#endif 
