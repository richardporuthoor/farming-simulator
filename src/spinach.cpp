//
// Created by richard on 11/7/2025.
//

#include <string>

#include "spinach.h"

char Spinach::symbol() {
    if(age < 2)
        return '~';
    if (age < 5)
        return 'u';
    return 'U';
}

void Spinach::end_day() {
    if (watered)
        age += 2;
    else
        age += 1;
    watered = false;
}

int Spinach::getAge() {
    return age;
}

int Spinach::getRipe() {
    return ripe;
}

void Spinach::water() {
    watered = true;
}
