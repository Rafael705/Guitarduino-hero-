#include <Keyboard.h>

#define teclaA 2
#define teclaS 3
#define teclaJ 4
#define teclaK 5
#define teclaL 6

void setup() {
  Serial.begin(9600); // Habilita o monitor serial

  pinMode(teclaA, INPUT_PULLUP);
  pinMode(teclaS, INPUT_PULLUP);
  pinMode(teclaJ, INPUT_PULLUP);
  pinMode(teclaK, INPUT_PULLUP);
  pinMode(teclaL, INPUT_PULLUP);

  Keyboard.begin();
}

void loop() {
  if (digitalRead(teclaA) == LOW) {
    Keyboard.press('a');
    Serial.println("Tecla A pressionada");
  } else {
    Keyboard.release('a');
  }

  if (digitalRead(teclaS) == LOW) {
    Keyboard.press('s');
    Serial.println("Tecla S pressionada");
  } else {
    Keyboard.release('s');
  }

  if (digitalRead(teclaJ) == LOW) {
    Keyboard.press('j');
    Serial.println("Tecla J pressionada");
  } else {
    Keyboard.release('j');
  }

  if (digitalRead(teclaK) == LOW) {
    Keyboard.press('k');
    Serial.println("Tecla K pressionada");
  } else {
    Keyboard.release('k');
  }

  if (digitalRead(teclaL) == LOW) {
    Keyboard.press('l');
    Serial.println("Tecla L pressionada");
  } else {
    Keyboard.release('l');
  }

  delay(10); // Reduz repetição de comandos e evita bugs
}
