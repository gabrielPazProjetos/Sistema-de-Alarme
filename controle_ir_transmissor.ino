#include <IRremote.h>

const int botao1 = 2;
const int botao2 = 3;
IRsend irsend;

void setup() {
  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(botao1) == LOW) {
    irsend.sendNEC(0xFFA25D, 32);
    delay(500);
  }
  if (digitalRead(botao2) == LOW) {
    irsend.sendNEC(0xFF629D, 32);
    delay(500);
  }
}
