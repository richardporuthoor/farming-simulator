#include <catch2/catch_test_macros.hpp>
#include "../src/player.hpp"

TEST_CASE("Player movement works") {
    Player p;
    REQUIRE(p.row() == 0);
    REQUIRE(p.column() == 0);

    p.move_right();
    REQUIRE(p.column() == 1);

    p.move_left();
    REQUIRE(p.column() == 0);

    p.move_down();
    REQUIRE(p.row() == 1);

    p.move_up();
    REQUIRE(p.row() == 0);
}
