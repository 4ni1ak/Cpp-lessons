
/*now seperate them as h and cpp file*/
#include <iostream>
#include "Shapes.cpp"
using namespace std;
int main() {
    Rectangle rectangle(4, 5);
    Triangle triangle(3, 4);

    cout << "Triangle Area is " << triangle.Area() << endl;
    cout << "Triangle Perimeter is " << triangle.Perimeter() << endl;
    cout << "Rectangle Area is " << rectangle.Area() << endl;
    cout << "Rectangle Perimeter is " << rectangle.Perimeter() <<endl;

    return 0;
}

