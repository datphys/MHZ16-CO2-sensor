#ifndef Mhz16_h
#define Mhz16_h
#include "Arduino.h"
#include <SoftwareSerial.h>

class Mhz16 : public SoftwareSerial
{
  private:
    uint8_t gasConcentration[9] = {0xff, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79};
    uint8_t zeroPoint[9] = {0xff, 0x01, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78};
  public:
    Mhz16(uint8_t rx,uint8_t tx);
    ~Mhz16();
    int readGasConcentration();
    void calibrateZeroPoint();
};
#endif