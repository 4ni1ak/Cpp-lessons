/*convert your overloaded functions to template function*/
#include <iostream>

using namespace std;
template <typename T>
T volume(T length = 10, T width = 20, T height = 30)
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