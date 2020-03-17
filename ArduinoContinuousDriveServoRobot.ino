#include <Servo.h>

Servo left;
Servo right;

int i = 0;

void setup() {
  left.attach(9);
  right.attach(10);
}

void loop() {
  counter();
  left.write(i);
  right.write(0);
  delay(15);
}

void counter() {
  if (i <= 255) {
    i++;
  } else {
    i = 0;
  }
}
