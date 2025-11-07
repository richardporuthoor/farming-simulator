#pragma once

#include <string>

#include "plot.hpp"

class Soil : public Plot {
  public:
    char symbol() override;
    void end_day() override;
    int getAge() override;
    int getRipe() override;
    void water() override;
};
