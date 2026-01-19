#pragma once

#include <string> 
#include "point.h"
 
using namespace std; 

class line
{
    public:
    line(point p1, point p2);
    double getLength();
    double getSlope();
    bool pointOnLine(point p);
    string toString();
    point getMidpoint();
    void extendLine(double value);

    private:
    point point1; 
    point point2; 
    double length; 
    double slope; 

};