#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "point.h"
#include "line.h"
using namespace std;

//--
TEST_CASE("Test Template")  
{ 
	/*
	SECTION("Create Points")
	{
		point p1(12.0,7.0);

		REQUIRE(p1.getX() == 12.0);
		REQUIRE(p1.getY() == 7.0);
		REQUIRE(p1.getPoint()== "X: 12.0, Y: 7.0");

	}
	*/
	SECTION("Line Tests")
	{
		point p1(11.6, 7.4);
		point p2(4.6, 2.6);
		line l1(p1, p2);
		point p3(8.1, 5.3);
		point midPoint(l1.getMidpoint());
		l1.pointOnLine(p3);


		REQUIRE(l1.getLength() == 8.4);
		REQUIRE(l1.getSlope() == 0.6);
		REQUIRE(l1.pointOnLine(p3) == true);
		REQUIRE(midPoint.getPoint() == "X: 8.1, Y: 5.0");
		REQUIRE(l1.toString() == "Line- Point 1: [X: 11.6, Y: 7.4], Point 2: [X: 4.6, Y: 2.6], Length: 8.4");

		l1.extendLine(2);
		REQUIRE(l1.getLength() == 12.4);
	}
	
}