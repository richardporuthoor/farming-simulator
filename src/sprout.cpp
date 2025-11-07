//
// Created by richard on 11/7/2025.
//

#include <string>

#include "sprout.h"

char Sprout::symbol() {
    if(age < 5)
        return '~';
    if (age < 10)
        return 'q';
    return 'Q';
}

void Sprout::end_day() {
    age += 1;
}

int Sprout::getAge() {
    return age;
}

int Sprout::getRipe() {
    return ripe;
}
