//
// Created by richard on 11/7/2025.
//

#include <string>

#include "beet.h"

char Beet::symbol() {
    if(age < 2)
        return '~';
    if (age < 7)
        return 'w';
    return 'W';
}

void Beet::end_day() {
    if (watered == 1)
        age += 2;
    else
        age += 1;
}

int Beet::getAge() {
    return age;
}

int Beet::getRipe() {
    return ripe;
}

void Beet::water() {
    watered += 1;
}
