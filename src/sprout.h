//
// Created by richard on 11/7/2025.
//

#ifndef FARMING_SIMULATOR_SPINACH_H
#define FARMING_SIMULATOR_SPINACH_H

#endif //FARMING_SIMULATOR_SPINACH_H

#pragma once
#include <string>
#include "plot.hpp"

class Sprout : public Plot {
private:
    int age = 0;
    int watered = 0;
    int ripe = 10;

public:
    int getAge() override;
    int getRipe() override;
    char symbol() override;
    void end_day() override;
    void water() override;
};
