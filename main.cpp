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
		point p1(1, 1);
		point p2(1, 5);
		line l1(p1, p2);
		point p3(2, 1);
		point midPoint(l1.getMidpoint());
		l1.pointOnLine(p3);

		cout << l1.toString() << endl; 
		REQUIRE(l1.getLength() == 4);
		REQUIRE(l1.getSlope() == 0);
		REQUIRE(l1.pointOnLine(p3) == true);
		REQUIRE(midPoint.getPoint() == "X: 3.0, Y: 1.0");
		REQUIRE(l1.toString() == "Line- Point 1: [X: 1.0, Y: 1.0], Point 2: [X: 5.0, Y: 1.0], Length: 4.0");

		l1.extendLine(2);
		cout << l1.toString() << endl; 
		REQUIRE(l1.getLength() == 8);
	}
	
}