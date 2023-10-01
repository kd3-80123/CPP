#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
class Cylinder
{
private:
    double radius;
    double height;
    double volume;

public:
    Cylinder(double radius, double height);
    
    Cylinder();
    
    void getVolume();
    
    void printVolume();
    
     void getRadius();
     void setRadius(double radius);
     void getHeight();
     void setHeight(double height);

};  

#endif