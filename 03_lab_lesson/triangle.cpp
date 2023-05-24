#include "triangle.h"

Triangle::Triangle() {
base=0.0; 
height=0.0;
}

Triangle::Triangle(double _base, double _height) {
base=_base;
height=_height;} 

long  double Triangle::Area() {
    return (base * height) / 2;
}

long double Triangle::Perimeter() {
    return base * 3;
}

