/*
Write a C++ program that prompts the user for the length and width of a rectangle,
then calls inline function rectArea to calculate the area of that rectangle.
*/
#include <iostream>
using namespace std;
inline int rectArea(int length,int width);
int main() {
    int length,width;
    cout<<"Enter length\n==>"<<endl;
    cin>>length;
    cout<<"Enter width ==>"<<endl;
    cin>>width;
    cout<<"Area rectangle is "<<rectArea(length, width)<<endl;
    return 0;
}

inline int rectArea(int length,int width)
{
	return length*width;
}