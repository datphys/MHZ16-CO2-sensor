# MHZ16-CO2-sensor
Arduino library for MH-Z16 CO2 sensor bases on SoftwareSerail library.
## Functions
### ```Mhz16()```
Create an instance of a Mhz16 object.
```cpp
Mhz16 mhz16(rx_pin, tx_pin);
```
### ```begin()```
Start Mhz16 object.
```cpp
mhz16.begin(9600);
```
### ```readGasConcentration()```
Return co2 concentration value.
```cpp
int co2 = mhz16.readGasConcentration();
```
### ```calibrateZeroPoint()```
```cpp
mhz16.calibrateZeroPoint()
```
