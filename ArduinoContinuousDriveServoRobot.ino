#include "robot.h"
#include "counter.h"

Robot *r;
Counter *c;

void setup() {
  r = new Robot();
  c = new Counter();
}

void loop() {
  c->count();
  r->setSpeed(c->getLeft(), c->getRight());
  delay(500);
}
