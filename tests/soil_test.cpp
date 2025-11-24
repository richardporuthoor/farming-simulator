#include <catch2/catch_test_macros.hpp>
#include "../src/soil.hpp"

TEST_CASE("Soil behaves correctly") {
    Soil s;
    REQUIRE(s.symbol() == '.');
    REQUIRE(s.getAge() == 0);
    REQUIRE(s.getRipe() == 0);

    s.end_day();   // no-op
    REQUIRE(s.getAge() == 0);

    s.water();     // no-op
    REQUIRE(s.getAge() == 0);
}
