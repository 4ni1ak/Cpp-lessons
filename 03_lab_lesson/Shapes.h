#ifndef SHAPES_H
#define SHAPES_H

class Shape {
public:
     long double Area();
     long double Perimeter();
};

class Rectangle : public Shape {
private:
     double width;
    double height;

public:
    Rectangle();
    Rectangle(double _width, double _height);

    long double Area() ;
    long double Perimeter() ;
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle();
    Triangle(double _base, double _height);

    long double Area() ;
    long double Perimeter() ;
};

#endif // SHAPES_H

