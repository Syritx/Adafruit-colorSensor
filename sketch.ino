#include <Adafruit_TCS34725.h>
#include <Wire.h>

Adafruit_TCS34725 TCS = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
    Serial.begin(9600);
    TCS.begin();
}

void loop() {
    uint16_t c, r, g, b;
    delay(60);
    
    if (r == 0 || r == 65535) TCS.begin();

    TCS.getRawData(&r, &g, &b, &c);
    Serial.println("R:"+String(r)+" G:"+String(g)+" B:"+String(b));
}
