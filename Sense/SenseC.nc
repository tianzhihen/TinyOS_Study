/*************************************************************************
	> File Name: SenseC.nc
	> Author: wangqi
	> Mail: 912293097@qq.com
	> Created Time: 2014年08月27日 星期三 14时35分22秒
 ************************************************************************/
#include "printf.h"
#include "Sense.h"
module SenseC
{
    uses interface Timer<TMilli> as SenseTimer;
    uses interface Leds;
    uses interface Boot;
    uses interface Read<uint16_t>;
}
implementation
{
    event void Boot.booted()
    {
        call SenseTimer.startPeriodic( SAMPLING_PERIOD);
    }
    event void SenseTimer.fired()
    {
        call Read.read();
    }
    event void Read.readDone( error_t result, uint16_t val )
    {
        if(result == SUCCESS)
        {
            printf("Voltage is :%d \n",val);
            printfflush();
            if(val > 10) 
            {
                call Leds.set(0x0f);
            }
            else if(val > 5)
            {
                call Leds.set(0x03);
            }
            else 
            {
                call Leds.set(0x01);
            }
        }
    }
}
