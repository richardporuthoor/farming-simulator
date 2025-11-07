#pragma once

#include <string>

class Plot {
  public:
    virtual char symbol() = 0;
    virtual void end_day() = 0;
    virtual int getAge() = 0;
    virtual  int getRipe() = 0;
};
