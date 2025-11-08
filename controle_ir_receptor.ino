#include <IRremote.h>

const int led = 13;
IRrecv irrecv(11);
decode_results results;

void setup() {
  pinMode(led, OUTPUT);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results)) {
    if (results.value == 0xFFA25D) {
      digitalWrite(led, HIGH);
    }
    if (results.value == 0xFF629D) {
      digitalWrite(led, LOW);
    }
    irrecv.resume();
  }
}
