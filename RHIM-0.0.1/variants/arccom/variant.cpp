/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

/*
 * Pins descriptions
 */

// TCC0 IOSET6
// TCC1 IOSET1
// TCC2 IOSET1
const PinDescription g_APinDescription[]=
{
  // 0..31 - All pins
  // ----------------------
  // 0/1 - SERCOM/UART (Serial1) - for Wifi
  { PORTB, 17, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TCC0_CH4, NOT_ON_TIMER, EXTERNAL_INT_1 }, // RX: SERCOM5/PAD[1]
  { PORTB, 16, PIO_SERCOM, PIN_ATTR_PWM_G, No_ADC_Channel, TCC0_CH5, NOT_ON_TIMER, EXTERNAL_INT_0 }, // TX: SERCOM5/PAD[0]

  // 2..9 - Arc interrupt
  { PORTA,  17, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 }, 
  { PORTA,  16, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 },   
  { PORTA,  18, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },
  { PORTA,  19, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 },
  { PORTA,  15, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 },
  { PORTA,  14, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_14 },    
  { PORTA,  13, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13 },  
  { PORTA,  12, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_12 }, 
  
  //10..18 Trip Out
  { PORTA,  7, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel7, NOT_ON_PWM, TC1_CH1, EXTERNAL_INT_7 },
  { PORTA,  6, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel6, NOT_ON_PWM, TC1_CH0, EXTERNAL_INT_6 },
  { PORTA,  5, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel5, NOT_ON_PWM, TC0_CH1, EXTERNAL_INT_5 },
  { PORTA,  4, PIO_ANALOG, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_E), ADC_Channel4, NOT_ON_PWM, TC0_CH0, EXTERNAL_INT_4 },
  { PORTA,  11, PIO_DIGITAL, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_F), ADC_Channel11, TCC0_CH3, TC1_CH1, EXTERNAL_INT_11 },
  { PORTA,  10, PIO_DIGITAL, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_F), ADC_Channel10, TCC0_CH2, TC1_CH0, EXTERNAL_INT_10 },
  { PORTA,  9, PIO_DIGITAL, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_F), ADC_Channel9, TCC0_CH1, TC0_CH1, EXTERNAL_INT_9 },
  { PORTA,  8, PIO_DIGITAL, (PIN_ATTR_ANALOG|PIN_ATTR_PWM_F), ADC_Channel8, TCC0_CH0, TC0_CH0, EXTERNAL_INT_NMI },
 
  // 18..26 - Pulse Input     
  { PORTA,  20, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC0_CH0, NOT_ON_TIMER, EXTERNAL_INT_4 },
  { PORTA,  21, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC0_CH1, NOT_ON_TIMER, EXTERNAL_INT_5 },
  { PORTA,  22, PIO_DIGITAL, PIN_ATTR_PWM_G, No_ADC_Channel, TCC0_CH2, TC3_CH1, EXTERNAL_INT_6 }, 
  { PORTA,  23, PIO_DIGITAL, PIN_ATTR_PWM_G, No_ADC_Channel, TCC0_CH3, TC3_CH0, EXTERNAL_INT_7 },
  { PORTB,  15, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC4_CH1, NOT_ON_TIMER, EXTERNAL_INT_15 },
  { PORTB,  14, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC4_CH0, NOT_ON_TIMER, EXTERNAL_INT_14 },      
  { PORTB,  13, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC3_CH1, NOT_ON_TIMER, EXTERNAL_INT_13 }, 
  { PORTB,  12, PIO_DIGITAL, PIN_ATTR_PWM_F, No_ADC_Channel, TCC3_CH0, NOT_ON_TIMER, EXTERNAL_INT_12 }, 

  // 27 - LED
  { PORTA,  27, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 }, //LED

  //28 sennsor Reset
  { PORTB, 23, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 }, 

  // 29..31 - USB
  // --------------------
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE  }, // USB Host enable
  { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 }, // USB/DM
  { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 }, // USB/DP

} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC0, TC1, TC2, TC3 } ;
const uint32_t GCLK_CLKCTRL_IDs[TCC_INST_NUM+TC_INST_NUM] = { TCC0_GCLK_ID, TCC1_GCLK_ID, TCC2_GCLK_ID, TC0_GCLK_ID, TC1_GCLK_ID, TC2_GCLK_ID, TC3_GCLK_ID } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;

Uart Serial(&sercom5, PIN_SERIAL_RX, PIN_SERIAL_TX, PAD_SERIAL_RX, PAD_SERIAL_TX ); // Wifi

Uart Serial1( &sercom5, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM5_0_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM5_1_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM5_2_Handler()
{
  Serial1.IrqHandler();
}
void SERCOM5_3_Handler()
{
  Serial1.IrqHandler();
}
