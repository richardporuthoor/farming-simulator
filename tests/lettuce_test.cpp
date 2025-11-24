#include <catch2/catch_test_macros.hpp>
#include "../src/lettuce.h"

TEST_CASE("Lettuce grows correctly") {
    Lettuce l;

    REQUIRE(l.symbol() == '~');

    l.end_day();   // age=1
    REQUIRE(l.symbol() == '~');

    l.end_day();   // age=2
    REQUIRE(l.symbol() == 'd');

    l.water();
    l.end_day();   // watered → +2 (age=4)
    REQUIRE(l.symbol() == 'D');

    REQUIRE(l.getRipe() == 4);
}
