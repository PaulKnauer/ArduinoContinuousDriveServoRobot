#include "counter.h"

void Counter::count() {
  if (direction) {
    l++;
    r--;
    if (l >= STOP_UPPER - 1) {
      direction = false;
    }
  } else {
    l--;
    r++;
    if (l <= STOP_LOWER) {
      direction = true;
    }
  }
}

int Counter::getLeft() {
  return l;
}

int Counter::getRight() {
  return r;
}
