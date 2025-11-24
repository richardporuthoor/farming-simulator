cmake_minimum_required(VERSION 3.24)

project(farming_sim)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(soil_test
        tests/soil_test.cpp
        src/soil.cpp
)
target_link_libraries(soil_test PRIVATE Catch2::Catch2WithMain)

add_executable(player_test
        tests/player_test.cpp
        src/player.cpp
)
target_link_libraries(player_test PRIVATE Catch2::Catch2WithMain)

add_executable(carrot_test
        tests/carrot_test.cpp
        src/carrot.cpp
)
target_link_libraries(carrot_test PRIVATE Catch2::Catch2WithMain)

add_executable(spinach_test
        tests/spinach_test.cpp
        src/spinach.cpp
)
target_link_libraries(spinach_test PRIVATE Catch2::Catch2WithMain)

add_executable(lettuce_test
        tests/lettuce_test.cpp
        src/lettuce.cpp
)
target_link_libraries(lettuce_test PRIVATE Catch2::Catch2WithMain)

add_executable(beet_test
        tests/beet_test.cpp
        src/beet.cpp
)
target_link_libraries(beet_test PRIVATE Catch2::Catch2WithMain)

add_executable(sprout_test
        tests/sprout_test.cpp
        src/sprout.cpp
)
target_link_libraries(sprout_test PRIVATE Catch2::Catch2WithMain)

add_executable(farm_test
        tests/farm_test.cpp
        src/farm.cpp
        src/soil.cpp
        src/player.cpp
        src/carrot.cpp
)
target_link_libraries(farm_test PRIVATE Catch2::Catch2WithMain)

add_executable(main
        main.cpp
        src/farm.cpp
        src/farm_printer.cpp
        src/soil.cpp
        src/player.cpp
        src/carrot.cpp
        src/spinach.cpp
        src/lettuce.cpp
        src/beet.cpp
        src/sprout.cpp
)
