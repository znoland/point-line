#include "line.h"
#include <cmath>
#include <iomanip>
#include <iostream>

line::line(point p1, point p2)
{   
    point1 = p1;
    point2 = p2;
}
double line::getLength()
{
    length = sqrt(pow((point1.getX()-point2.getX()),2)+pow((point1.getY()-point2.getY()),2));

    return trunc(length*10)/10; 
}
double line::getSlope()
{
    slope = (point1.getY()-point2.getY())/(point1.getX()-point2.getX());

    return trunc(slope*10)/10; 
}
bool line::pointOnLine(point p)
{
    double newPointY = p.getY();
    double equation = getSlope()*(p.getX()-point1.getX())+point1.getY();
    cout << newPointY << endl; 
    cout << equation << endl; 
    if(newPointY == equation)
    {
        return true; 
    }
    else
    {
        return false; 
    }
}
string line::toString()
{
    return "hi";
}
point line::getMidpoint()
{
    return point1; 
}
void line::extendLine(double value)
{
    
}