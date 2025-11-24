#include <catch2/catch_test_macros.hpp>
#include "../src/beet.h"

TEST_CASE("Beet grows correctly") {
    Beet b;

    REQUIRE(b.symbol() == '~');

    b.end_day();   // age=1
    REQUIRE(b.symbol() == '~');

    b.end_day();   // age=2
    REQUIRE(b.symbol() == 'w');

    b.water();
    b.end_day();   // +2 → age=4
    REQUIRE(b.symbol() == 'w');

    while (b.getAge() < 7) b.end_day();
    REQUIRE(b.symbol() == 'W');

    REQUIRE(b.getRipe() == 7);
}
