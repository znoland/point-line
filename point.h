#pragma once

#include <string> 
 
using namespace std; 

class point
{
    public:

    point(); 
    point(double x, double y);
    double getX();
    double getY();
    string getPoint();
    void setX(double newX); 
    void setY(double newY); 
    
    private:
    double pointX;
    double pointY;
    string Point;
};