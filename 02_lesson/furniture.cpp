#include <iostream>
#include "furniture.h"

using namespace std;


    Furniture::Furniture()
    {
        cout<<"Default Constructor is called"<<endl;
    };
    Furniture::Furniture(string type1,string color1,string material1,double price1)
    {
        cout<<"Parameter taking Constructor is called"<<endl;
        type=type1;
        color = color1;
        material=material1;
        price=price1;
    };
    Furniture::~Furniture()
    {
        cout<<"Destructor is called"<<endl;
    };
    void Furniture::printFeatures()
    {
        cout<<"The type is "<<type<<endl;
        cout<<"The color is "<<color<<endl;
        cout<<"The material is "<<material<<endl;
        cout<<"The price is "<<price<<endl;
    };
    void Furniture::setMembers(string type1,string color1,string material1,double price1)
    {
        type=type1;
        color = color1;
        material=material1;
        price=price1;
    };
   string Furniture::getMemberType()
    {
        return type;
    };
