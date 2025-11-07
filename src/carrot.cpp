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
  if (watered == 1)
    age += 2;
  else
    age += 1;
}

int Carrot::getAge() {
  return age;
}

int Carrot::getRipe() {
  return ripe;
}

void Carrot::water() {
  watered += 1;
}
