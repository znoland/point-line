#pragma once

#include <string> 
 
using namespace std; 

class point
{
    public:

    point(double x, double y);
    double getX();
    double getY();
    string getPoint();
    
    private:
    double pointX;
    double pointY;
    string Point;
};