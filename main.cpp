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
		point p1(4.2, 10.7);
		point p2(8.3, 2.1);
		line l1(p1, p2);
		point p3(5.2, 20.5);
		point midPoint(l1.getMidpoint());
		l1.pointOnLine(p3);

		REQUIRE(fabs(l1.getLength()-9.53) < .01);
		REQUIRE(fabs(l1.getSlope()+2.1) < .01);
		REQUIRE(l1.pointOnLine(p3) == false);
		REQUIRE(midPoint.getPoint() == "X: 6.2, Y: 6.4");
		REQUIRE(l1.toString() == "Line- Point 1: [X: 4.2, Y: 10.7], Point 2: [X: 8.3, Y: 2.1], Length: 9.5");

		l1.extendLine(2); 
		REQUIRE(fabs(l1.getLength()-13.53) < .01);
	}
	
}