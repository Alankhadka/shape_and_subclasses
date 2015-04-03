#include<iostream>
using namespace std;
#include "Rectangle.h"
#include<sstream>
Rectangle::Rectangle()
{
length=1.0;
width=1.0;
}
Rectangle::Rectangle(double flength,double fwidth)
{
  setLength(flength);
  setWidth(fwidth);
}
Rectangle::Rectangle(double flength,double fwidth,string fcolor,bool ffillled):Shape(fcolor,ffilled)
{
setLength(flength);
  setWidth(fwidth);
setcolor(fcolor);
setfilled(ffilled);
}

void Rectangle::setLength(double flength)
{
    length=flength;
}
void Rectangle::setWidth(double fwidth)
{
    width=fwidth;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
void Rectangle::setArea(double flength,double fwidth)
{
    double L=flength;
    double W=fwidth;
    area=L*W;
    }

double Rectangle::getArea()
{
    return Area;
}
void Rectangle::setperimeter(double flength,double fwidth)
{
    double L=flength;
    double W=fwidth;
    perimeter =2(L+W);
}
double Rectangle::getperimeter()
{
    return perimeter;
}
string Rectangle::Atostring()
{
    stringstream Width,Length;
    Width=getWidth();
    Length=getLength();
    return "A rectangle of width"+Width.str()+"and length"+Length.str()+shape.Atostring();
}
