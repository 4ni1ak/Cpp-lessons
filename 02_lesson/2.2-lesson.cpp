#include <iostream>

#include "furniture.h"
#include "furniture.cpp"

using namespace std;


int main()
{


    {
        Furniture table("Table","Green","Wood",25.90);
        table.printFeatures();
    }
    
    cout<<"Main is about to over"<<endl;
}
