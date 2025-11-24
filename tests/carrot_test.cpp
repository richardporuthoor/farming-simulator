#include <catch2/catch_test_macros.hpp>
#include "../src/carrot.hpp"

TEST_CASE("Carrot grows correctly") {
    Carrot c;

    REQUIRE(c.symbol() == '~');
    REQUIRE(c.getAge() == 0);

    c.end_day();       // watered=false → +1
    REQUIRE(c.getAge() == 1);
    REQUIRE(c.symbol() == 'v');

    c.water();
    c.end_day();       // watered=true → +2
    REQUIRE(c.getAge() == 3);
    REQUIRE(c.symbol() == 'V');

    REQUIRE(c.getRipe() == 2);
}
