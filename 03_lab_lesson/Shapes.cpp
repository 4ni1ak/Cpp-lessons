#include "Shapes.h"

long double Shape::Area()  {
    return 0.0;
}

long double Shape::Perimeter()  {
    return 0.0;
}

Rectangle::Rectangle() {
	
 width=0.0; height=0.0 ;
 }

Rectangle::Rectangle(double _width, double _height) {
 width=_width; height=_height;}

long double Rectangle::Area()  {
    return width * height;
}

long double Rectangle::Perimeter()  {
    return 2 * (width + height);
}

Triangle::Triangle() : base(0.0), height(0.0) {}

Triangle::Triangle(double _base, double _height) {
 base=_base; height=_height;} 

long double Triangle::Area()  {
    return (base * height) / 2;
}

long double Triangle::Perimeter() {
    return base * 3;
}

