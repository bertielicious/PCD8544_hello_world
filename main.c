/* Project: Stereo VU meter using 16f1459 microcontroller and Nokia PCD8544 48 x 84 pixels LCD
 * File:   main.c
 * Author: Phil Glazzard
 * MPLABX IDE v6.00
 * XC8 v2.36
 * Optimisations 0
 * Created on 15 November 2022, 18:07
 */


#include <xc.h>
#include "configurationBits.h"
#include "constants.h"
#include "configPins.h"
#include "configOsc.h"
#include "configSPI.h"
#include "configPCD8544.h"
#include "sendSPIbyte.h"
#include "__interrupt.h"
#include "enableInterrupts.h"
#include "clearPCD8544.h"
#include "setAddress.h"
#include "writeData.h"
#include "writeCommand.h"

void main(void) 
{
    configOsc();
    configPins();
    configSPI();
    enableInterrupts();
    configPCD8544();
   __delay_ms(1000);
    clearPCD8544();
    writeCommand(0x22);   // vertical addressing mode
    writeCommand(0x40|2);  // set Y address to value held in page (0 - 5)
    writeCommand(0x80| 42);
    writeData(0xff);
    // writeData(0xaa);
    while(1)
    {
     
    }
}
