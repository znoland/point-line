#include "line.h"
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>

line::line(point p1, point p2)
{   
    point1 = p1;
    point2 = p2;
}
double line::getLength()
{
    length = sqrt(pow((point1.getX()-point2.getX()),2)+pow((point1.getY()-point2.getY()),2));

    return length; 
}
double line::getSlope()
{
    slope = (point1.getY()-point2.getY())/(point1.getX()-point2.getX());

    return slope; 
}
bool line::pointOnLine(point p)
{
    double newPointY = p.getY();
    double equation = getSlope()*(p.getX()-point1.getX())+point1.getY();
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
    ostringstream x1;
    x1 << fixed << setprecision(1) << point1.getX();
    string X1 = x1.str();

    ostringstream y1;
    y1 << fixed << setprecision(1) << point1.getY();
    string Y1 = y1.str();

    ostringstream x2;
    x2 << fixed << setprecision(1) << point2.getX();
    string X2 = x2.str();

    ostringstream y2;
    y2 << fixed << setprecision(1) << point2.getY();
    string Y2 = y2.str();

    ostringstream len;
    len << fixed << setprecision(1) << getLength();
    string LEN = len.str();

    return "Line- Point 1: [X: " + X1 + ", Y: " + Y1 + "], Point 2: [X: " + X2 + ", Y: " + Y2 + "], Length: " + LEN; 
}
point line::getMidpoint()
{
    point midPoint = point((point1.getX()+point2.getX())/2,(point1.getY()+point2.getY())/2); 

    return midPoint; 
}
void line::extendLine(double value)
{
    double d1 = (point1.getX()-point2.getX());
    double d2 = (point1.getY()-point2.getY()); 

    double u1 = (d1/length); 
    double u2 = (d2/length);

    double newX1 = point1.getX()+value*(u1);
    double newY1 = point1.getY()+value*(u2);
    
    double newX2 = point2.getX()-value*(u1); 
    double newY2 = point2.getY()-value*(u2); 

    point1.setX(newX1); 
    point1.setY(newY1); 
    point2.setX(newX2); 
    point2.setY(newY2); 
}