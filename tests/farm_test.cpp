#include <catch2/catch_test_macros.hpp>
#include "../src/farm.hpp"
#include "../src/soil.hpp"
#include "../src/carrot.hpp"
#include "../src/player.hpp"


TEST_CASE("Farm end_day updates crops") {
    Player p;
    Farm f(1, 1, &p);

    f.plant(0, 0, new Carrot());
    char before = f.get_symbol(0, 0);

    f.end_day();
    char after = f.get_symbol(0, 0);

    REQUIRE(before != after);
}

TEST_CASE("Farm harvest replaces with soil") {
    Player p;
    Farm f(1, 1, &p);

    Carrot* c = new Carrot();
    f.plant(0, 0, c);

    while (c->getAge() < c->getRipe()) c->end_day();

    f.harvest(0, 0);
    REQUIRE(f.get_symbol(0, 0) == '.');
}

TEST_CASE("Farm watering calls plant.water()") {
    Player p;
    Farm f(1, 1, &p);

    Carrot* c = new Carrot();
    f.plant(0, 0, c);

    f.water(0, 0);
    c->end_day();
    REQUIRE(c->getAge() >= 2);  
}
