#include <string>
#include "farm.hpp"
#include "farm_printer.hpp"

FarmPrinter::FarmPrinter(Farm *farm) : farm(farm) {}

std::string colorize(char c) {
  switch (c) {
    // soil
    case '.': return "\033[38;5;130m.\033[0m";
    case '~': return "\033[38;5;137m~\033[0m";
    // carrot
    case 'v': return "\033[38;5;46mv\033[0m";
    case 'V': return "\033[38;5;208mV\033[0m";
    // beet
    case 'w': return "\033[38;5;46mw\033[0m";
    case 'W': return "\033[38;5;125mW\033[0m";
    // brussel sprout
    case 'q': return "\033[38;5;46mq\033[0m";
    case 'Q': return "\033[38;5;70mQ\033[0m";
    // lettuce
    case 'd': return "\033[38;5;46md\033[0m";
    case 'D': return "\033[38;5;34mD\033[0m";
    // spinach
    case 'u': return "\033[38;5;46mu\033[0m";
    case 'U': return "\033[38;5;22mU\033[0m";
    // player
    case '&': return "\033[38;5;220m&\033[0m";
    default:  return std::string(1, c);
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
  output += "Press Z to plant a carrot\n";
  output += "Press X to plant spinach\n";
  output += "Press C to plant lettuce\n";
  output += "Press V to plant beets\n";
  output += "Press B to plant brussel sprouts\n";
  output += "Press H to harvest a mature plant\n";
  output += "Press E to end day\n";
  output += "Press Q to quit the game\n\n";

  return output;
}
