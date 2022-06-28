#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify kinetic energy calculation"){
	REQUIRE(get_kinetic_energy(10,9) == 405);
	REQUIRE(get_kinetic_energy(20,5) == 250);
	REQUIRE(get_kinetic_energy(30,7) == 735);
}
