#include <string>
#include "farm.hpp"
#include "farm_printer.hpp"

FarmPrinter::FarmPrinter(Farm *farm) : farm(farm) {}

std::string FarmPrinter::pp() {
  std::string output = "";
  for(int i = 0; i < farm->number_of_rows(); i++) {
    for(int j = 0; j < farm->number_of_columns(); j++) {
      output += farm-> get_symbol(i, j);
      output += " ";
    }
    output += "\n";
  }

  output += "\nWelcome to the Farming Simulator Program!\n";
  output += "Use WASD to move\n";
  output += "Player is '@'\n";
  output += "Carrots are 'v' (seedlings)\n";
  output += "Mature Carrots are 'V' (mature)\n";
  output += "Press C to plant a carrot\n";
  output += "Press H to harvest a mature carrot\n";
  output += "Press E to end day\n";
  output += "Press q to quit the game\n\n";

  return output;
}
