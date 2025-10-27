#include <iostream>

#include "src/player.hpp"
#include "src/farm.hpp"
#include "src/farm_printer.hpp"
#include "src/carrot.hpp"
#include "src/ansi_clear.hpp"

int main() {
  Player player;
  Farm farm(7, 8, &player);
  FarmPrinter printer(&farm);
  int day_counter = 0;
  bool game_in_progress = true;
  std::string player_input;

  while(game_in_progress) {
    ansi_clear();
    std::cout << printer.pp();
    std::cout << "Day: " << day_counter << std::endl << std::endl;
    std::cin >> player_input;

    if(player_input == "q") {
      game_in_progress = false;
    } else if(player_input == "d" && (player.column() + 1) < 8 ) {
      player.move_right();
    } else if(player_input == "s" && (player.row() + 1) < 7 ) {
      player.move_down();
    } else if(player_input == "w" && (player.row() - 1) >= 0 ) {
      player.move_up();
    } else if(player_input == "a" && (player.column() - 1) >= 0 ) {
      player.move_left();
    } else if(player_input == "c") {
      Carrot *carrot = new Carrot();
      farm.plant(player.row(), player.column(), carrot);
    } else if(player_input == "e") {
      farm.end_day();
      day_counter++;
    } else if(player_input == "h") {
      farm.harvest(player.row(), player.column());
    }
  }
}
