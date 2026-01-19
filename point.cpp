#include "point.h"
#include <sstream>
#include <iomanip>


    point::point(double x, double y)
    {
        pointX = x;
        pointY = y;
    }

    point::point()
    {
        pointX = 0; 
        pointY = 0; 
    }

    double point::getX()
    {
        return pointX;
    }

    double point::getY()
    {
        return pointY;
    }

    string point::getPoint()
    {
        ostringstream stringX;
        stringX << fixed << setprecision(1) << pointX;
        string X = stringX.str();

        ostringstream stringY;
        stringY << fixed << setprecision(1) << pointY;
        string Y = stringY.str();
    
        return "X: "  + X + ", Y: " +  Y;
    }