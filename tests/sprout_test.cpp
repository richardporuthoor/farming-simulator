#include <catch2/catch_test_macros.hpp>
#include "../src/sprout.h"

TEST_CASE("Sprout grows correctly") {
    Sprout s;

    REQUIRE(s.symbol() == '~');

    for (int i = 0; i < 5; i++) s.end_day();
    REQUIRE(s.symbol() == 'q');

    for (int i = s.getAge(); i < 10; i++) s.end_day();
    REQUIRE(s.symbol() == 'Q');

    REQUIRE(s.getRipe() == 10);
}
