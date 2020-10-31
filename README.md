# gtke / creative-hacking

## beispiele

-> [beispieldateien](/beispielDateien)

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

## cheat-sheet

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

```

```
