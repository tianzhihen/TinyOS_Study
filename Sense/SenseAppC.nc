/*************************************************************************
	> File Name: SenseAppC.nc
	> Author: wangqi
	> Mail: 912293097@qq.com
	> Created Time: 2014年08月27日 星期三 14时35分22秒
 ************************************************************************/
 configuration SenseAppC
 {
 }
 implementation
 {
    components SenseC,MainC,LedsC,PrintfC,SerialStartC;
    SenseC.Boot->MainC;
    SenseC.Leds->LedsC;
    components new TimerMilliC() as Timer1;
    SenseC.SenseTimer->Timer1;
    components new DemoSensorC() as Sensor;
    SenseC.Read->Sensor;

 }
