/*
Use shape as the base class of the hierarchy, 
then include classes rectangle and triangle that derive from Student one constructor
for each their data members one set and printmember function edit this code
*/
#include <iostream>

using namespace std;

class Shape {
public:
    long double Area() {
        return 0.0;
    }
    long double Perimeter() {
        return 0.0;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle() {}
    Rectangle(double _width, double _height) {
        width = _width;
        height = _height;
    }

    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    void setWidth(double _width) {
        width = _width;
    }

    void setHeight(double _height) {
        height = _height;
    }

    long double Area() {
        return width * height;
    }

    long double Perimeter() {
        return (width + height) * 2;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle() {}
    Triangle(double _base, double _height) {
        base = _base;
        height = _height;
    }

    double getBase() {
        return base;
    }

    double getHeight() {
        return height;
    }

    void setBase(double _base) {
        base = _base;
    }

    void setHeight(double _height) {
        height = _height;
    }

    long double Area() {
        return (base * height) / 2;
    }

    long double Perimeter() {
        return base * 3;
    }
};

int main() {
    Rectangle rectangle(4, 5);
    Triangle triangle(3, 4);

    cout << "Triangle Area is " << triangle.Area() << endl;
    cout << "Triangle Perimeter is" << triangle.Perimeter() << endl;
    cout << "Rectangle Area is " << rectangle.Area() << endl;
    cout << "Rectangle Perimeter is " << rectangle.Perimeter() << endl;

    return 0;
}

