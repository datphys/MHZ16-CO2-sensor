#include <Mhz16.h>
Mhz16 mhz16(A1, A0);
void setup() {
  mhz16.begin(9600);
  Serial.begin(9600);
}

void loop() {
  int co2 = mhz16.readGasConcentration();
  Serial.println(co2);
  delay(1000);
}
