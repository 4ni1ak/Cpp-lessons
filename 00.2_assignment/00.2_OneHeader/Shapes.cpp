#include "Shapes.h"

using namespace std;

void Shape::PrintInfo() {
    cout << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

Quadrilateral::Quadrilateral(double _side1, double _side2, double _side3, double _side4) {
    setSide1(_side1);
    setSide2(_side2);
    setSide3(_side3);
    setSide4(_side4);
}

double Quadrilateral::getSide1() {
    return side1;
}

double Quadrilateral::getSide2() {
    return side2;
}

double Quadrilateral::getSide3() {
    return side3;
}

double Quadrilateral::getSide4() {
    return side4;
}

void Quadrilateral::setSide1(double _side1) {
    side1 = _side1;
}

void Quadrilateral::setSide2(double _side2) {
    side2 = _side2;
}

void Quadrilateral::setSide3(double _side3) {
    side3 = _side3;
}

void Quadrilateral::setSide4(double _side4) {
    side4 = _side4;
}

long double Quadrilateral::Perimeter() {
    return side1 + side2 + side3 + side4;
}

void Quadrilateral::PrintInfo() {
    cout << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

Trapezoid::Trapezoid(double _side1, double _side2, double _side3, double _side4)
    : Quadrilateral(_side1, _side2, _side3, _side4) {}

long double Trapezoid::Area() {
    return (side1 + side2) * 0.5 * getHeight();
}

double Trapezoid::getHeight() {
    double baseDiff = abs(side1 - side2);
    double height = sqrt(pow(side3, 2) - pow(baseDiff, 2));
    return height;
}

void Trapezoid::PrintInfo() {
    cout << "Trapezoid" << endl;
    cout << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

Parallelogram::Parallelogram(double _side1, double _side2, double _side3, double _side4)
    : Quadrilateral(_side1, _side2, _side3, _side4) {}

long double Parallelogram::Area() {
    return side1 * getHeight();
}

double Parallelogram::getHeight() {
    return side3;
}

void Parallelogram::PrintInfo() {
    cout << "Parallelogram" <<endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

Rectangle::Rectangle(double _side1, double _side2)
    : Parallelogram(_side1, _side2, _side1, _side2) {}

long double Rectangle::Area() {
    return side1 * side2;
}

void Rectangle::PrintInfo() {
    cout << "Rectangle" << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

Square::Square(double _side)
    : Rectangle(_side, _side) {}

void Square::PrintInfo() {
    cout << "Square" << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

IsoscelesTrapezoid::IsoscelesTrapezoid(double _base, double _leg, double _height)
    : Trapezoid(_base, _base, _leg, _leg) {
    setHeight(_height);
}

double IsoscelesTrapezoid::getHeight() {
    return side3;
}

void IsoscelesTrapezoid::setHeight(double _height) {
    side3 = _height;
}

long double IsoscelesTrapezoid::Area() {
    return (side1 + side2) * 0.5 * getHeight();
}

void IsoscelesTrapezoid::PrintInfo() {
    cout << "Isosceles Trapezoid" << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

Rhombus::Rhombus(double _side, double _angle)
    : Parallelogram(_side, _side) {
    setAngle(_angle);
}

double Rhombus::getAngle() {
    return angle;
}

void Rhombus::setAngle(double _angle) {
    angle = _angle;
}

long double Rhombus::Perimeter() {
    return (side1 + side2) * 2;
}

long double Rhombus::Area() {
    return side1 * side2 * abs(sin(angle));
}

void Rhombus::PrintInfo() {
    cout << "Rhombus" << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

EquilateralRectangle::EquilateralRectangle(double _side)
    : Rectangle(_side, _side * sqrt(3) / 2) {}

long double EquilateralRectangle::Perimeter() {
    return side1 * 4;
}

void EquilateralRectangle::PrintInfo() {
    cout << "Equilateral Rectangle" << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

ParallelogramWithAngle::ParallelogramWithAngle(double _side1, double _side2, double _angle)
    : Parallelogram(_side1, _side2, _side1, _side2) {
    setAngle(_angle);
}

double ParallelogramWithAngle::getAngle() {
    return angle;
}

void ParallelogramWithAngle::setAngle(double _angle) {
    angle = _angle;
}

long double ParallelogramWithAngle::Perimeter() {
    return (side1 + side2) * 2;
}

long double ParallelogramWithAngle::Area() {
    return side1 * side2 * sin(angle);
}

void ParallelogramWithAngle::PrintInfo() {
    cout << "Parallelogram" << endl;
    cout << "Perimeter ==> " << Perimeter() << endl;
    cout << "Area ==> " << Area() << endl;
}

