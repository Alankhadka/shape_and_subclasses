#include<iostream>
#ifndef RECTANGLE_H
#define RECTANGLE_H
using namespace std;
class Square:public Rectangle
{
   private:
    side;
   public:
    Square();
    Square(double);
    Square(double ,string ,bool);
    void setSide(double);
    void setWidth(double);
    void setLength(double);
    double getSide();
    string Atostring();

};
#endif // RECTANGLE_H
