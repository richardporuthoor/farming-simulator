//
// Created by richard on 11/7/2025.
//

#include <string>

#include "lettuce.h"

char Lettuce::symbol() {
    if(age < 2)
        return '~';
    if (age < 4)
        return 'd';
    return 'D';
}

void Lettuce::end_day() {
    if (watered)
        age += 2;
    else
        age += 1;
    watered = false;
}

int Lettuce::getAge() {
    return age;
}

int Lettuce::getRipe() {
    return ripe;
}

void Lettuce::water() {
    watered += 1;
}
