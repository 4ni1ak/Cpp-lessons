#ifndef SHAPES_H
#define SHAPES_H


#include <iostream>
#include <cmath>

class Shape {
public:
    virtual long double Area() { return 0; }
    virtual long double Perimeter() { return 0; }
    virtual void PrintInfo();
};

class Quadrilateral : public Shape {
protected:
    double side1;
    double side2;
    double side3;
    double side4;

public:
    Quadrilateral(double _side1, double _side2 = 0, double _side3 = 0, double _side4 = 0);
    double getSide1();
    double getSide2();
    double getSide3();
    double getSide4();
    void setSide1(double _side1);
    void setSide2(double _side2);
    void setSide3(double _side3);
    void setSide4(double _side4);
    virtual long double Perimeter();
    virtual void PrintInfo();
};

class Trapezoid : public Quadrilateral {
public:
    Trapezoid(double _side1, double _side2, double _side3, double _side4);
    virtual long double Area();
    double getHeight();
    virtual void PrintInfo();
};

class Parallelogram : public Quadrilateral {
protected:
    double angle;

public:
    Parallelogram(double _side1, double _side2, double _side3 = 0, double _side4 = 0);
    virtual long double Area();
    double getHeight();
    virtual void PrintInfo();
};

class Rectangle : public Parallelogram {
public:
    Rectangle(double _side1, double _side2);
    virtual long double Area();
    virtual void PrintInfo();
};

class Square : public Rectangle {
public:
    Square(double _side);
    virtual void PrintInfo();
};

class IsoscelesTrapezoid : public Trapezoid {
public:
    IsoscelesTrapezoid(double _base, double _leg, double _height);
    double getHeight();
    void setHeight(double _height);
    virtual long double Area();
    virtual void PrintInfo();
};

class Rhombus : public Parallelogram {
public:
    Rhombus(double _side, double _angle);
    double getAngle();
    void setAngle(double _angle);
    virtual long double Perimeter();
    virtual long double Area();
    virtual void PrintInfo();
};

class EquilateralRectangle : public Rectangle {
public:
    EquilateralRectangle(double _side);
    virtual long double Perimeter();
    virtual void PrintInfo();
};

class ParallelogramWithAngle : public Parallelogram {
protected:
    double angle;

public:
    ParallelogramWithAngle(double _side1, double _side2, double _angle);
    double getAngle();
    void setAngle(double _angle);
    virtual long double Perimeter();
    virtual long double Area();
    virtual void PrintInfo();
};
#endif  // SHAPES_H
