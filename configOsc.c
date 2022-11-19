#include "constants.h"
void configOsc(void)
{
    //select frquency of internal osc freqency to be 16MHz
    OSCCONbits.IRCF3 = 1;
    OSCCONbits.IRCF2 = 1;
    OSCCONbits.IRCF1 = 1;
    OSCCONbits.IRCF0 = 1;
    
    //select internal oscillator
    OSCCONbits.SCS1 = 1;
    OSCCONbits.SCS0 = 0;
}
