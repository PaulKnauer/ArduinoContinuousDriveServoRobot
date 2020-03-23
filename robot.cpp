#include "robot.h"

Robot::Robot() {
  left = new Servo();
  right = new Servo();
  left->attach(LEFT_PIN);
  right->attach(RIGHT_PIN);
}

void Robot::setSpeed(int l, int r) {
  left->write(l);
  right->write(l);
}
