#include<iostream>
#include<math.h>
#include<sstream>
using namespace std
#include "Circle.h"

Circle::Circle()
{
 radius=1.0;
}
Circle::Circle(double fradius)
{
    setRadius(fradius);
}
void Circle::setRadius(double fradius)
{
  radius=fradius;
}
double Circle::getRadius()
{
    return radius;
}
Circle::circle(double fradius,string fcolor,bool ffilled):Shape(fcolor,ffilled)
{
    setRadius(fradius);
    setcolor(fcolor);
    setfilled(ffilled);
}
void Circle::setArea(double fradius)
{
    double R=fradius;
    area=M_PI*R*R;
}
double Circle::getArea()
{
    return area;
}
void Circle::setPerimeter(double fradius)
{
    double R=fradius;
    perimeter=2*M_PI*R;
}
double Circle::getPerimeter()
{
    return perimeter;
}
string Circle::Atostring()
{
    stringstream=Radius;
    Radius=getRadius();
    return "A circle radius's is "+Radius.str()+shape.Atostring();

}
