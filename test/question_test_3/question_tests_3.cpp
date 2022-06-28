#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify area of rectangle.") {

	Rectangle1 rectangle1(5,5);

	Rectangle1 rectangle2(3,10);

	Rectangle1 rectangle3(10,10);

	REQUIRE(rectangle1.get_area() == 25);

	REQUIRE(rectangle2.get_area() == 30);

	REQUIRE(rectangle3.get_area() == 100);

}
