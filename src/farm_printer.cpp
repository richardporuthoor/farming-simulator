#include <string>
#include "farm.hpp"
#include "farm_printer.hpp"

FarmPrinter::FarmPrinter(Farm *farm) : farm(farm) {}

std::string colorize(char c) {
  switch (c) {
    case '.': return "\033[38;5;130m.\033[0m";   // darker brown soil
    case '_': return "\033[38;5;137m_\033[0m";   // light brown tilled soil
    case ',': return "\033[38;5;46m,\033[0m";   // bright green comma (seedling)
    case 'v': return "\033[38;5;34mv\033[0m";    // leafy green young plant
    case 'V': return "\033[38;5;208mV\033[0m";  // bright orange mature carrot
    default:  return std::string(1, c);          // default color
  }
}

std::string FarmPrinter::pp() {
  std::string output = "";
  for(int i = 0; i < farm->number_of_rows(); i++) {
    for(int j = 0; j < farm->number_of_columns(); j++) {
      output += colorize(farm-> get_symbol(i, j));
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
