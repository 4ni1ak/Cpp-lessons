#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle();
    Triangle(double _base, double _height);

    long double Area();
    long double Perimeter();
};

#endif // TRIANGLE_H

