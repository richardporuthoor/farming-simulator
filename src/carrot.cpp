#include <string>

#include "carrot.hpp"

char Carrot::symbol() {
  if(age == 0)
    return '_';
  if (age == 1)
    return ',';
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
