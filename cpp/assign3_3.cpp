#include"./Cylinder.h"
using namespace std;


   Cylinder:: Cylinder(double radius, double height)
    {
        this->radius=radius;
        this->height=height;
    }
   Cylinder:: Cylinder()
    {
        this->radius=1;
        this->height=1;
        this->volume=1;

    }
    void Cylinder::getVolume()
    {
        volume = 3.14 * radius*radius*height;
        cout<<"The Volume of Cylinder is:"<<volume;
    }
    void Cylinder:: printVolume()
    {
        cout<<"The Volume of Cylinder is:"<<volume;
    }
     void Cylinder::getRadius()
     {
        cout<<"Radius is :"<<this->radius;
     }
     void Cylinder::setRadius(double radius)
     {
        this->radius = radius;
     }
     void Cylinder::getHeight()
     {
         cout<<"Height is :"<<this->height;
     }
     void Cylinder::setHeight(double height)
     {
        this->height = height;
     }



