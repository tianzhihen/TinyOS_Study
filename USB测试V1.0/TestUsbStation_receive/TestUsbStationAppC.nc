/*************************************************************************
	> File Name: TestUsbStationAppC.nc
	> Author:WangQi 
	> Mail:912293097@qq.com
	> Created Time: 2014年09月2日 星期二 10时04分30秒
	>接收端
 ************************************************************************/
#include "TestUsbStation.h"
configuration TestUsbStationAppC
{
}
implementation
{
  components MainC, TestUsbStationC as App, LedsC,PrintfC,SerialStartC;
    
    App->MainC.Boot;
    App.Leds->LedsC;

  components new TimerMilliC() as Timer0;
    
    App.Timer0 -> Timer0;
  
  components ActiveMessageC;
    
    App.AMControl->ActiveMessageC;
  
  components new AMSenderC(AM_Counter_Radio);
    
    App.AMSend->AMSenderC;
    App.AMPacket->AMSenderC;
  
  components new AMReceiverC(AM_Counter_Radio),RFA1ActiveMessageC,RFA1RadioC;
    
    App.Receive->AMReceiverC;

		App.PacketRSSI -> RFA1ActiveMessageC.PacketRSSI;
		App.PacketAcknowledgements -> ActiveMessageC.PacketAcknowledgements;
		App.RadioChannel -> RFA1RadioC;

}
