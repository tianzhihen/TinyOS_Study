// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*									tab:4
 * Copyright (c) 2000-2005 The Regents of the University  of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the University of California nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA,
 * 94704.  Attention:  Intel License Inquiry.
 */

/**
 * Implementation for Blink application.  Toggle the red LED when a
 * Timer fires.
 **/

#include "Timer.h"
#include "CountToRadio.h"
module CountToRadioC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Leds;
  uses interface Boot;

  uses interface AMSend;
  uses interface AMPacket;

  uses interface SplitControl as RadioControl;
}
implementation
{
  bool BUSY = FALSE;
  message_t msgpacket;
  uint16_t counter;

  event void Boot.booted()
  {
    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t error)
  {
    if(error = SUCCESS)
    {
        call Timer0.startPeriodic( 500 );
    }
    else
    {
        call RadioControl.start();
    }
  }

  event void RadioControl.stopDone(error_t error)
  {
        
  }

  event void Timer0.fired()
  {
    counter ++;
    if(counter>=1000) counter=0;
    call Leds.led0Toggle();
    if(BUSY==FALSE)
    {
        CountStruct * sendpkt=(CountStruct* )call AMSend.getPayload(&msgpacket,NULL);
        sendpkt->counter=counter;


        if(call AMSend.send(AM_BROADCAST_ADDR, &msgpacket, sizeof(CountStruct))==SUCCESS)
        {
            BUSY=TRUE;
        }

    }
  }


  event void AMSend.sendDone(message_t* msg, error_t error)
  {
    if(&msgpacket==msg) 
    {
        BUSY=FALSE;
    }
  }

}


