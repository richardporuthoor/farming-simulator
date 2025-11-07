#include <string>

#include "carrot.hpp"

char Carrot::symbol() {
  if(age == 0)
    return '~';
  if (age == 1)
    return 'v';
  return 'V';
}

void Carrot::end_day() {
  age += 1;
}

int Carrot::getAge() {
  return age;
}

int Carrot::getRipe() {
  return ripe;
}
