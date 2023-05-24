#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape 
{
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double _width, double _height);

    long double Area();
   	long double Perimeter();
};

#endif // RECTANGLE_H

