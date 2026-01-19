#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "point.h"
using namespace std;

//--
TEST_CASE("Test Template")  
{ 
	SECTION("Create Points")
	{
		point p1(12.0,7.0);

		REQUIRE(p1.getX() == 12.0);
		REQUIRE(p1.getY() == 7.0);
		REQUIRE(p1.getPoint()== "X: 12.0, Y: 7.0");

	}
	
}