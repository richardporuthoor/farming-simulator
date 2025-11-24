//
// Created by richard on 11/7/2025.
//

#include <string>

#include "sprout.h"

#include <iostream>
#include <ostream>

char Sprout::symbol() {
    if(age < 5)
        return '~';
    if (age < 10)
        return 'q';
    return 'Q';
}

void Sprout::end_day() {
    if (watered == 1)
        age += 2;
    else
        age += 1;
}

int Sprout::getAge() {
    return age;
}

int Sprout::getRipe() {
    return ripe;
}

void Sprout::water() {
    watered += 1;
}