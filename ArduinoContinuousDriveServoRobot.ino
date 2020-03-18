#include <Servo.h>

#include "counter.h"

#define LEFT_PIN 9
#define RIGHT_PIN 10

Servo left;
Servo right;

Counter *c = new Counter();

void setup() {
  left.attach(LEFT_PIN);
  right.attach(RIGHT_PIN);
}

void loop() {
  c->count();
  left.write(c->getLeft());
  right.write(c->getRight());
  delay(500);
}
