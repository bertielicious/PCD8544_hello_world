#include "constants.h"
void enableInterrupts(void)
{
    // enable interrupt on change
    
    //enable global interrupts
    INTCONbits.GIE = HI;
    
    //enable Peripheral interrupts
    INTCONbits.PEIE = HI;
    
    // enable interrupt on change
    
    INTCONbits.IOCIE = HI;
    
   
    
    // enable RA3 to detect a falling edge change to trigger an interrupt
    // Interrupt-on-Change enabled on the pin for a negative going edge. 
    // IOCAF3 bit and IOCIF flag will be set upon detecting an edge
    
    IOCANbits.IOCAN4 = HI;
    
    
    // clear interrupt flag for RA3 pin 3 
    
    IOCAFbits.IOCAF4 = LO;       
    
    
     // clear interrupt on change flag
    
    INTCONbits.IOCIF = LO;
    
}
