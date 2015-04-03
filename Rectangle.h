#include<iostream>
#include "Shape.h"
using namespace std;
class Rectangle:public Shape
{
private:
    double width;
    double length;
    double area;
    double perimeter;
    Shape shape;

public:
    Rectangle();
    Rectangle(double,double);
    Rectangle(double,double,string,bool);
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
    void setArea(double,double);
    double getArea();
    void setperimeter(double,double);
    double getperimeter();
    string Atostring();
};
