#include<iostream>
using namespace std;
#include "Shape.h"
Shape::Shape()
{
    color="green";
    filled=true;
}
Shape::Shape(string fcolor,bool ffilled)
{

setcolor(fcolor);
setfilled(ffilled);

}
void Shape::setcolor(string fcolor)
{
   color=fcolor;
}
string Shape::isCOLOR()
{
    return color;
}
void Shape::setfilled(bool ffilled)
{
    filled=ffilled;
}
bool Shape::isFILLED()
{
    return filled;
}
void Shape::isfilled()
{
    if (ffilled == 'y'){
return true;
}
else {
return false;
}
}
}
string Shape::Atostring()
{
    return "A shape of"+isCOLOR()+"of"+isfilled();
}
