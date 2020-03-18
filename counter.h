#ifndef COUNTER_H
#define COUNTER_H

#define STOP_POINT 93
#define STOP_LOWER 83
#define STOP_UPPER 104

class Counter {
  public:
    void count();
    int getLeft();
    int getRight();
  private:
    int l = STOP_LOWER;
    int r = STOP_UPPER;
    bool direction = false;
};

#endif
