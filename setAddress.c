#include "constants.h"
#include "writeCommand.h"
void setAddress(uint8_t col, uint8_t row)
{
    writeCommand(0x22);   // vertical addressing mode
    writeCommand(0x40|row);  // set Y address to value held in page (0 - 5)
   
    writeCommand(0x20);  // horizontal addressing mode
    writeCommand(0x80|col);     // set X address to value (0 - 83)  
   
}
