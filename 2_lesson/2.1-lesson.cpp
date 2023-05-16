
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
        cout << "The type is " << type << endl;
        cout << "The color is " << color << endl;
        cout << "The material is " << material << endl;
        cout << "The price is " << price << endl;
    }
};

int main()
{
    Furniture table;

    table.type = "Table";
    table.color = "Green";
    table.material = "Wood";
    table.price = 25.90;

    // cout<<table.color<<endl;
    table.printFeatures();
}



/*
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
        cout << "The type is " << type << endl;
        cout << "The color is " << color << endl;
        cout << "The material is " << material << endl;
        cout << "The price is " << price << endl;
    }
    void setMembers(string type1, string color1, string material1, double price1)
    {
        type = type1;
        color = color1;
        material = material1;
        price = price1;
    }
    string getMemberType()
    {
        return type;
    }
};

int main()
{
    Furniture table;

    table.setMembers("Table", "Green", "Wood", 25.90);

    cout << "The type is : " << table.getMemberType() << endl;
}
*/

/*
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
        cout << "The type is " << type << endl;
        cout << "The color is " << color << endl;
        cout << "The material is " << material << endl;
        cout << "The price is " << price << endl;
    }
    void setMembers(string type1, string color1, string material1, double price1)
    {
        type = type1;
        color = color1;
        material = material1;
        price = price1;
    }
    string getMemberType()
    {
        return type;
    }
};
int main()
{
    Furniture table;
    table.setMembers("Table", "Green", "Wood", 25.90);
}
*/
/*
#include <iostream>

using namespace std;

class Furniture
{
public:
    Furniture()
    {
        cout << "Default Constructor is called" << endl;
    };
    void printFeatures()
    {
        cout << "The type is " << type << endl;
        cout << "The color is " << color << endl;
        cout << "The material is " << material << endl;
        cout << "The price is " << price << endl;
    }
    void setMembers(string type1, string color1, string material1, double price1)
    {
        type = type1;
        color = color1;
        material = material1;
        price = price1;
    }
    string getMemberType()
    {
        return type;
    }

protected:
    string type;
    string color;
    string material;
    double price;

} table;

int main()
{
    table.setMembers("Table", "Green", "Wood", 25.90);

    table.printFeatures();
}
*/
/*
#include <iostream>

using namespace std;

class Furniture
{
public:
    Furniture()
    {
        cout << "Default Constructor is called" << endl;
    };
    Furniture(string type1, string color1, string material1, double price1)
    {
        cout << "Parameter taking Constructor is called" << endl;
        type = type1;
        color = color1;
        material = material1;
        price = price1;
    }
    ~Furniture()
    {
        cout << "Destructor is called" << endl;
    }
    void printFeatures()
    {
        cout << "The type is " << type << endl;
        cout << "The color is " << color << endl;
        cout << "The material is " << material << endl;
        cout << "The price is " << price << endl;
    }
    void setMembers(string type1, string color1, string material1, double price1)
    {
        type = type1;
        color = color1;
        material = material1;
        price = price1;
    }
    string getMemberType()
    {
        return type;
    }

protected:
    string type;
    string color;
    string material;
    double price;

} table("Table", "Green", "Wood", 25.90);

int main()
{

    table.printFeatures();
}
*/

