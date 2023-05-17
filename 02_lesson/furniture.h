#ifndef FURNITURE_H_INCLUDED
#define FURNITURE_H_INCLUDED

#include <iostream>
//#include <string>

using namespace std;


class Furniture
{
public:

    Furniture();
    Furniture(string type1,string color1,string material1,double price1);
    ~Furniture();
    void printFeatures();
    void setMembers(string type1,string color1,string material1,double price1);
    string getMemberType();

protected :
    string type;
    string color;
    string material;
    double price;

};


#endif // FURNITURE_H_INCLUDED
