#include<iostream>
#include "Shape.h"
using namespace std;
class Circle:public Shape
{
private:
    double radius;
    double area;
    double perimeter;
    Shape shape;

public:
    Circle();
    Circle(double);
    Circle(double,string,bool);
    void setRadius(double);
    double getRadius();
    void setArea(double);
    double getArea();
    void setPerimeter(double);
    double getPerimeter();
    string Atostring();


};
