# cheat sheet

## allgemein

### setup

```
pinMode(12, OUTPUT);
pinMode(12, INPUT);
```

### input

```
digitalRead(12);
analogRead(12);
```

### logik 1

```
if( aussage stimmt ){
// mach was
} else {
// mach was anderes
}
```

### logik 2

```
a == b → gleich
a != b → ungleich
a > b → größer
a < b → kleiner
```

### rechnen 1

```
int a = 10 + 20;
int b = 20 - 10;
int c = a + b;

int a = 10 * 20;
int b = 20 / 10;
int c = a * b;

```

### rechnen 2

umrechnen von wertebereichen

```
map ( value , minRange1, maxRange1, minRange2, maxRange 2)

int a = analogRead(A0); // analogRead hat einen Wertebereich von 0 - 1023
int b = map(a, 0,1023, 0,100);

```

### kommunikation

```
Serial.begin(115200);
Serial.println("hello");
```

### zeit

```
delay(1000);
millis(); // zeit seit start in ms
```

### output

```
digitalWrite(9,HIGH);
digitalWrite(9,LOW);
analogWrite(9,123);
```

## libraries

### link

über library manager suchen -> "Ticker" (Stefan Staub)

**oder**

-> https://github.com/sstaub/Ticker

und in Ordner "Libraries" verschieben

### nutzung

```
#include "Ticker.h"

void blinkLED();

boolean ledState;

Ticker timer1(blinkLED, 500);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  timer1.start();
}

void loop() {
  timer1.update();
}

void blinkLED() {
  digitalWrite(LED_BUILTIN, ledState);
  ledState = !ledState;
}
```
