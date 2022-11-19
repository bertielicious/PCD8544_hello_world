#include "constants.h"
#include "sendSPIbyte.h"
void writeData(uint8_t data)
{
    CE1 = LO;
    DCI = HI;   // data to be interpretted as data
    sendSPIbyte(data);
    CE1 = HI;
}
