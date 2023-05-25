/*
(Quadrilateral Inheritance Hierarchy) 
Draw an inheritance hierarchy for classes Quadrilateral,
Trapezoid, Parallelogram, Rectangle and Square. 
Use Quadrilateral as the base class of the hierarchy.
Make the hierarchy as deep as possible.
*/
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    long double Area() { return 0; }
    long double Perimeter() { return 0; }
    void PrintInfo();
};

    class Quadrilateral : public Shape {
    protected:
        double side1;
        double side2;
        double side3;
        double side4;

    public:
        Quadrilateral(double _side1, double _side2 = 0, double _side3 = 0, double _side4 = 0) {
            setSide1(_side1);
            setSide2(_side2);
            setSide3(_side3);
            setSide4(_side4);
        }
        double getSide1() {
            return side1;
        }
        double getSide2() {
            return side2;
        }
        double getSide3() {
            return side3;
        }
        double getSide4() {
            return side4;
        }

        void setSide1(double _side1) {
            side1 = _side1;
        }
        void setSide2(double _side2) {
            side2 = _side2;
        }
        void setSide3(double _side3) {
            side3 = _side3;
        }
        void setSide4(double _side4) {
            side4 = _side4;
        }

        long double Perimeter() {
            return side1 + side2 + side3 + side4;
        }
        void PrintInfo() {
            cout << endl;

            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }
};

    class Trapezoid : public Quadrilateral {
    public:
        Trapezoid(double _side1, double _side2, double _side3, double _side4) : Quadrilateral(_side1, _side2, _side3, _side4) {}
        long double Area() {
            return (side1 + side2) * 0.5 * getHeight();
        }

        double getHeight() {
            double baseDiff = abs(side1 - side2);
            double height = sqrt(pow(side3, 2) - pow(baseDiff, 2));
            return height;
        }
        void PrintInfo() {
            cout << "Trapezoid" << endl;
            cout << endl;

            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }

};
    class Parallelogram : public Quadrilateral {
    protected:
        double angle;

    public:
        Parallelogram(double _side1, double _side2, double _side3 = 0, double _side4 = 0)
            : Quadrilateral(_side1, _side2, _side3, _side4) {}

        long double Area() {
            return side1 * getHeight();
        }

        double getHeight() {
            return side3;
        }
        void PrintInfo() {
            cout << "Parallelogram" << endl;
            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }
};

class Rectangle : public Parallelogram {
    public:
        Rectangle(double _side1, double _side2)
            : Parallelogram( _side1, _side2, _side1, _side2) {}

        long double Area() {
            return side1 * side2;
        }
        void PrintInfo() {
            cout << "Rectangle" << endl;
            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }
};

class Square : public Rectangle {
    public:
        Square(double _side) 
            :Rectangle(_side, _side){}

        void PrintInfo() {
            cout << "Square" << endl;
            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }
};

class IsoscelesTrapezoid : public Trapezoid {

    public:

        IsoscelesTrapezoid(double _base, double _leg, double _height )
            : Trapezoid(_base,_base, _leg, _leg) {
            setHeight(_height);
        }

        double getHeight() {
            return side3;
        }

        void setHeight(double _height) {
            side3 = _height;
        }

        long double Area() {
            return (side1 + side2) * 0.5 * getHeight();
        }
        void PrintInfo() {
            cout << "Isosceles Trapezoid" << endl;
            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }
};

class Rhombus : public Parallelogram {

    public:
        Rhombus(double _side, double _angle) : Parallelogram (_side, _side) {
            setAngle(_angle);
        }
     

        double getAngle() {
            return angle;
        }

        void setAngle(double _angle) {
            angle = _angle;
        }
        long double Perimeter() {
            return (side1 + side2) * 2;
        }
        long double Area() {
            return side1 * side2 * abs( sin(angle));
        }
        void PrintInfo() {
            cout << "Rhombus" << endl;
            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }
};

class EquilateralRectangle : public Rectangle {
    public:
        EquilateralRectangle(double _side)
            : Rectangle(_side, _side * sqrt(3) / 2) {}
        long double Perimeter() {
            return side1 * 4;
        }
        void PrintInfo() {
            cout << "Equilateral Rectangle" << endl;
            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }
};

class ParallelogramWithAngle : public Parallelogram {
    protected:
        double angle;

    public:
        ParallelogramWithAngle(double _side1, double _side2, double _angle)
            : Parallelogram(_side1, _side2, _side1, _side2) {
            setAngle(_angle);
        }

        double getAngle() {
            return angle;
        }
        

        void setAngle(double _angle) {
            angle = _angle;
        }
        long double Perimeter() {
            return (side1 + side2) * 2;
        }
        long double Area() {
            return side1 * side2 * sin(angle);
        }
        void PrintInfo() {
            cout << "Parallelogram" << endl;
            cout << "Perimeter ==> " << Perimeter() << endl;
            cout << "Area ==> " << Area() << endl;
        }
};

void ShowMenu() {
    cout << "*****************************************" << endl;
    cout << "********** Geometry Calculator **********" << endl;
    cout << "*****************************************" << endl;
    cout << endl;
    cout << "1. Calculate Quadrilateral" << endl;
    cout << "2. View Hierarchy" << endl;
    cout << "3. Quick Check" << endl;
    cout << "4. Exit" << endl;
    cout << endl;
    cout << "Please enter an option: ";
}

int GetChoice() {
    int choice;
    cin >> choice;
    return choice;
}

bool ContinueCheck() {
    char choice;
    cout << "Do you want to continue? (Y/n)" << endl;
    cin >> choice;
    return toupper(choice) == 'Y' ? true : false;
}

void asciiArt() {
    cout << "********** Geometry Hierarchy **********" << endl;
    cout << endl;
    cout << "                                      Shape" << endl;
    cout << "                                       /" << endl;
    cout << "                                      /" << endl;
    cout << "                              Quadrilateral" << endl;
    cout << "                             /             \\" << endl;
    cout << "              +-------------+               \\" << endl;
    cout << "             /                               \\" << endl;
    cout << "         Trapezoid                         Parallelogram" << endl;
    cout << "            |                                    |" << endl;
    cout << "            |                     +--------------+----------------+         " << endl;
    cout << "            |                    /               |                 \\       " << endl;
    cout << "  Isosceles Trapezoid       Rectangle    Parallelogram with Angle  Rhombus " << endl;
    cout << "                            /     |                                       " << endl;
    cout << "                           /      |" << endl;
    cout << "                          /       |" << endl;
    cout << "                         /        |" << endl;
    cout << "                      Square   Equilateral Rectangle  " << endl;
}

int main() {
    double side1 = 0, side2 = 0, side3 = 0, side4 = 0;
    do {
        ShowMenu();
        switch (GetChoice()) {
        case 1: {
            cout << endl;
            cout << "********** Calculate Quadrilateral **********" << endl;
            cout << endl;
            cout << "1. Trapezoid" << endl;
            cout << "2. Parallelogram" << endl;
            cout << "3. Rectangle" << endl;
            cout << "4. Square" << endl;
            cout << "5. Isosceles Trapezoid" << endl;
            cout << "6. Rhombus" << endl;
            cout << "7. Equilateral Rectangle" << endl;
            cout << "8. Parallelogram With Angle" << endl;
            cout << endl;
            cout << "Please enter an option: ";

            switch (GetChoice()) {
            case 1: {
                double side1, side2, side3, side4;
                cout << "Enter the side lengths for Trapezoid: ";
                cin >> side1 >> side2 >> side3 >> side4;
                Trapezoid trapezoid(side1, side2, side3, side4);
                trapezoid.PrintInfo();
                break;
            }
            case 2: {
                double side1, side2, side3, side4;
                cout << "Enter the side lengths for Parallelogram: ";
                cin >> side1 >> side2 >> side3 >> side4;
                Parallelogram parallelogram(side1, side2, side3, side4);
                parallelogram.PrintInfo();
                break;
            }
            case 3: {
                double side1, side2;
                cout << "Enter the side lengths for Rectangle: ";
                cin >> side1 >> side2;
                Rectangle rectangle(side1, side2);
                rectangle.PrintInfo();
                break;
            }
            case 4: {
                double side;
                cout << "Enter the side length for Square: ";
                cin >> side;
                Square square(side);
                square.PrintInfo();
                break;
            }
            case 5: {
                double base, leg, height;
                cout << "Enter the base, leg, and height for Isosceles Trapezoid: ";
                cin >> base >> leg >> height;
                IsoscelesTrapezoid isoscelesTrapezoid(base, leg, height);
                isoscelesTrapezoid.PrintInfo();
                break;
            }
            case 6: {
                double side, angle;
                cout << "Enter the side length and angle for Rhombus: ";
                cin >> side >> angle;
                Rhombus rhombus(side, angle);
                rhombus.PrintInfo();
                break;
            }
            case 7: {
                double side;
                cout << "Enter the side length for Equilateral Rectangle: ";
                cin >> side;
                EquilateralRectangle equilateralRectangle(side);
                equilateralRectangle.PrintInfo();
                break;
            }
            case 8: {
                double side1, side2, angle;
                cout << "Enter the side lengths and angle for Parallelogram With Angle: ";
                cin >> side1 >> side2 >> angle;
                ParallelogramWithAngle parallelogramWithAngle(side1, side2, angle);
                parallelogramWithAngle.PrintInfo();
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
                break;
            }
            break;
        }
        case 2: {
            asciiArt();
            break;
        }
        case 3: {
            Trapezoid trapezoid(2, 4, 3, 5);
            Parallelogram parallelogram(4, 6, 5, 6);
            Rectangle rectangle(5, 8);
            Square square(6);
            IsoscelesTrapezoid isoscelesTrapezoid(4, 3, 2);
            Rhombus rhombus(6, 60);
            EquilateralRectangle equilateralRectangle(6);
            ParallelogramWithAngle parallelogramWithAngle(5, 7, 45);
            cout << "Trapezoid Area: " << trapezoid.Area() << endl;
            cout << "Trapezoid Perimeter: " << trapezoid.Perimeter() << endl;
            cout << "Parallelogram Area: " << parallelogram.Area() << endl;
            cout << "Parallelogram Perimeter: " << parallelogram.Perimeter() << endl;
            cout << "Rectangle Area: " << rectangle.Area() << endl;
            cout << "Rectangle Perimeter: " << rectangle.Perimeter() << endl;
            cout << "Square Area: " << square.Area() << endl;
            cout << "Square Perimeter: " << square.Perimeter() << endl;
            cout << "Isosceles Trapezoid Area: " << isoscelesTrapezoid.Area() << endl;
            cout << "Rhombus Area: " << rhombus.Area() << endl;
            cout << "Equilateral Rectangle Area: " << equilateralRectangle.Area() << endl;
            cout << "Parallelogram with Angle Area: " << parallelogramWithAngle.Area() << endl;
            break;
        }
        case 4: {
            cout << "Thank you for using and choosing us :)"<<endl;
            cout << "Anil Akpinar" << endl << " 220201013"<<endl;
            exit(4);
        }
        default:
            cout << "Error: Invalid input" << endl;
            break;
        }
    } while (ContinueCheck());

    return 0;
}