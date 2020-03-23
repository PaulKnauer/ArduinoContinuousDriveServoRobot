#ifndef ROBOT_H
#define ROBOT_H

#include <Servo.h>

#define LEFT_PIN 9
#define RIGHT_PIN 10

class Robot {
  public:
    Robot();
    void setSpeed(int l, int r); 
  private:
    Servo *left;
    Servo *right;
};

#endif
