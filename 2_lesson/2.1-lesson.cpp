#include <iostream>
using namespace std;
class Furniture
{
public:
    string type;
    string color;
    string material;
    double price;

    void printFeatures()
    {
        cout<<"The type is "<<type<<endl;
        cout<<"The color is "<<color<<endl;
        cout<<"The material is "<<material<<endl;
        cout<<"The price is "<<price<<endl;
    }
};

int main()
{
    Furniture table;

    table.type = "Table";
    table.color = "Green";
    table.material="Wood";
    table.price = 25.90;
    table.printFeatures();
}
