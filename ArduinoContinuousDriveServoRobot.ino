#include <Servo.h>

#define STOP_POINT 93
#define STOP_LOWER 83
#define STOP_UPPER 104

Servo left;
Servo right;

int l = STOP_LOWER;
int r = STOP_UPPER;
bool direction = 1;

void setup() {
  Serial.begin(9600);
  left.attach(9);
  right.attach(10);
}

void loop() {
  counter();
  left.write(l);
  right.write(r);
  Serial.println(l);
  delay(500);
}

void counter() {
  if (direction) {
    l++;
    r--;
    if (l >= STOP_UPPER - 1) {
      direction = 0;
    }
  } else {
    l--;
    r++;
    if (l <= STOP_LOWER) {
      direction = 1;
    }
  }
}
