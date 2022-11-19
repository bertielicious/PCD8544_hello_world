#include "constants.h"
void __interrupt() isr(void)
{
   
    if(INTCONbits.IOCIF == HI)  // test to see if an interrupt on change has occurred
    {
        if(IOCAFbits.IOCAF4 == HI)
        {
             LATBbits.LATB7 = ~LATBbits.LATB7;
        }
    }
        
    IOCAFbits.IOCAF4 = LO;
    INTCONbits.IOCIF = LO;
    
}
