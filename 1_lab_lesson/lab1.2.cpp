/*
A volume calculater with funciton overloadin is going to be done.
Please provide default values 3 parameteres should be taken length width and height
*/
#include <iostream>
using namespace std;
inline int volume(int length = 10, int width = 20, int height = 30)
{
    return length * width * height;
}

inline float volume(float length = 10.1, float width = 20.2, float height = 30.3)
{
    return length * width * height;
}

inline double volume(double length = 10.4, double width = 20.5, double height = 30.5)
{
    return length * width * height;
}

int main()
{
    int length1 = 10, width1 = 20, height1 = 30;
    float length2 = 10.2, width2 = 2.5, height2 = 30.4;
    double length3 = 10.02, width3 = 20.04, height3 = 30.05;
    cout << "For int volume box is " << volume(length1, width1, height1) << endl;
    cout << "For float volume box is " << volume(length2) << endl;
    cout << "For double volume box is " << volume(length3, width3, height3) << endl;
    return 0;
}