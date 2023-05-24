#include "rectangle.h"

Rectangle::Rectangle() {
	
width=0.0;
height=0.0;
}

Rectangle::Rectangle(double _width, double _height) {
	
width=_width;
height= _height;
}

long double Rectangle::Area() {
    return width * height;
}

long double Rectangle::Perimeter() {
    return 2 * (width + height);
}

