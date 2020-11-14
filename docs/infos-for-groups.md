# infos für einzelne gruppen

## veith, ravi, bastian

### zählen durch verschiedene stages

[code beispiel](./../beispielDateien/tickerCount)

### DFRobot mp3 module

https://wiki.dfrobot.com/DFPlayer_Mini_SKU_DFR0299

### Adafruit Soundboard

#### Produkt

https://www.exp-tech.de/module/audio/6045/adafruit-audio-fx-sound-board-wav/ogg-trigger-with-2mb-flash
https://www.adafruit.com/product/2133

#### Library

```c
#include <SoftwareSerial.h>


#define SFX_TX 5
#define SFX_RX 6
#define SFX_RST 4

SoftwareSerial ss = SoftwareSerial(SFX_TX, SFX_RX);
Adafruit_Soundboard sfx = Adafruit_Soundboard(&ss, NULL, SFX_RST);

void setup() {
  Serial.begin(115200);
  ss.begin(9600);
  if (!sfx.reset()) {
    Serial.println("Not found");
    while (1);
  }
}

void loop() {
  Serial.println("R2D2.WAV");
  sfx.playTrack("R2D2.WAV");
  delay(5000);
}
```

## lena, noah, jonny

### links

https://funduino.de/nr-12-servo-ansteuern
https://howtomechatronics.com/tutorials/arduino/diy-arduino-robot-arm-with-smartphone-control/

### code

[beispiel](./../beispielDateien/servoSensor)

### netzteil

https://www.amazon.de/Universal-Ladeger%C3%A4t-Laufwerke-Festplatten-Ladestationen/dp/B01I1LRCXW/
https://www.amazon.de/DeLock-Adapter-Terminalblock-5mm-Buchse/dp/B00E8CURKO/
