#pragma once

#include <string>

#include "plot.hpp"

class Carrot : public Plot {
  private:
    int age = 0;
    int ripe = 2;

  public:
    int getAge() override;
    int getRipe() override;
    char symbol() override;
    void end_day() override;
};
