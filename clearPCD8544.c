#include "constants.h"
#include "setAddress.h"
#include "writeData.h"
void clearPCD8544(void)
{
    uint8_t col, row;
    for (row = 0; row < 6; row++)
    {
        for(col = 0; col < 84; col++)
        {
            setAddress(col, row);
            writeData(0x00);
        }
    }
}
