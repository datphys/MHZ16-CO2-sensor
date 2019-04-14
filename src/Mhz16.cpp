#include <Mhz16.h>

Mhz16::Mhz16(uint8_t rx, uint8_t tx) : SoftwareSerial(rx, tx) {}
Mhz16::~Mhz16()
{
    end();
}
int Mhz16::readGasConcentration()
{
    uint8_t i = 0;
    uint8_t returnValue[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (available())
    {
        read();
    }
    write(gasConcentration, 9);
    delay(100);
    while (available())
    {
        returnValue[i] = read();
        i++;
        delay(1);
    }
    return returnValue[2] * 256 + returnValue[3];
}
void Mhz16::calibrateZeroPoint()
{
    write(zeroPoint, 9);
}