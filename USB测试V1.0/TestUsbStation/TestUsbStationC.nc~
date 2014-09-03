/*************************************************************************
	> File Name: TestUsbStationC.nc
	> Author:WangQi 
	> Mail:912293097@qq.com
	> Created Time: 2014年09月2日 星期二 10时04分30秒
	>发送端
 ************************************************************************/
#include "Timer.h"
#include "TestUsbStation.h"
#include "printf.h"
module TestUsbStationC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Leds;
  uses interface Boot;

  uses interface AMSend;
  uses interface AMPacket;

  uses interface Receive;

  uses interface SplitControl as AMControl;

	uses interface PacketField<uint8_t> as PacketRSSI;

	uses interface PacketAcknowledgements;
	uses interface RadioChannel;
}
implementation
{
  bool BUSY = FALSE;
  message_t msgpacket;
  uint16_t counter;

  event void Boot.booted()
  {
    call AMControl.start();
  }

  event void AMControl.startDone(error_t error)
  {
    if(error == SUCCESS)
    {
        call Timer0.startPeriodic( TIMER_PERIOD_MILLI );
    }
    else
    {
        call AMControl.start();
        call Leds.set(0xff);
    }
  }

  event void AMControl.stopDone(error_t error)
  {
        
  }

  event void Timer0.fired()
  {
    counter ++;
    if(counter >= 1000) counter = 0;
    if(BUSY == FALSE)
    {
        CountStruct * sendpkt=(CountStruct* )call AMSend.getPayload(&msgpacket,NULL);
        if(sendpkt == NULL)
        {
            return;
        }
        sendpkt->counter=counter;

				call PacketAcknowledgements.requestAck(&msgpacket);
        if(call AMSend.send(2000, &msgpacket, sizeof(CountStruct))==SUCCESS)
        {
            BUSY = TRUE;
        }

    }
    else
    {
        return;
    }
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
  {

    if(len == sizeof(CountStruct))
    {
        CountStruct * receivepkt=(CountStruct* )payload;
      
		if(call PacketRSSI.isSet(msg))
		{
		 	receivepkt->RSSI = (nx_int16_t) call	PacketRSSI.get(msg);	
		}
		printf("count:%d   RSSI:%d\n",receivepkt->counter,receivepkt->RSSI);
    printfflush();   

        if(receivepkt->counter & 0x01)
        {
            call Leds.led0On();
        }
        else
        {
            call Leds.led0Off();
        }
        if(receivepkt->counter & 0x02)
        {
            call Leds.led1On();
        }
        else
        {
            call Leds.led1Off();
        }
        if(receivepkt->counter & 0x04)
        {
            call Leds.led2On();
        }
        else
        {
            call Leds.led2Off();
        }
        return msg;
    }
    else
    {
        return msg;
    }
  }
  event void AMSend.sendDone(message_t* msg, error_t error)
  {
		uint8_t channelnum;
    if(&msgpacket == msg) 
    {
        BUSY = FALSE;
    }
		if(call PacketAcknowledgements.wasAcked(msg)==TRUE)
		{
				channelnum=call RadioChannel.getChannel();
				printf("*receive ack!*    channel:%d\n",channelnum);
				printfflush();
				if(++channelnum>=24) channelnum=11;
				call RadioChannel.setChannel(channelnum);	
		}
		else
		{
				printf("no ack\n");
				printfflush();		
		}
  }
	
		event void RadioChannel.setChannelDone()
		{
				
		}

}


