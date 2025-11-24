#include <catch2/catch_test_macros.hpp>
#include "../src/spinach.h"

TEST_CASE("Spinach grows correctly") {
    Spinach s;

    REQUIRE(s.symbol() == '~');

    s.end_day();   // age=1
    REQUIRE(s.symbol() == '~');

    s.end_day();   // age=2
    REQUIRE(s.symbol() == 'u');

    s.water();
    s.end_day();   // watered → +2 (age=4)
    REQUIRE(s.symbol() == 'u');

    s.end_day();   // age=5
    REQUIRE(s.symbol() == 'U');

    REQUIRE(s.getRipe() == 5);
}
