#include <iostream>
#include <cmath>
#include "Shapes.cpp"
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
            cout << "Thank you for using and choosing us :)";
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
