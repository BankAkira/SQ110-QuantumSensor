#include <Adafruit_ADS1015.h>


//ADS 1115
/*
0x48 (1001000) ADR -> GND (Default)
0x49 (1001001) ADR -> VDD
0x4A (1001010) ADR -> SDA
0x4B (1001011) ADR -> SCL
*/
Adafruit_ADS1115 ads1;
float analogData, light;

void readAnalog() {
    analogData = ads1.readADC_Differential_0_1();
}


void convertAnalogData() {
    // function for convert analog value from sensor to data
    float lightMultiply = 5;
    light = analogData * 0.125 * lightMultiply;
}



void setup() {
    Serial.begin(9600);
    ads1.begin();
    ads1.setGain(GAIN_ONE); // Gain 0.125 mV per value
}

void loop() {
    // read  analog data
    readAnalog();
    // convert analog data to something if need
    convertAnalogData();
    Serial.print("Ouput: ");
    Serial.print(light);
    Serial.println(" µmol m-2 s-1");
}
