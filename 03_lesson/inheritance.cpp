#include <iostream>

using namespace std;




class Animal
{

public:

    int age;
    string type1;
    Animal()
    {
        cout << "Base Class  " << endl;
    }
};

class Bird : public Animal
{
public:
    string hometown;
    Bird()
    {
        cout << "Bird class constuctor" << endl;
    }

    void PrintMembers()
    {
        cout << age << endl << type1 << endl << hometown << endl;
    }
};


int main()
{

    Bird bird;

    bird.age = 21;
    bird.type1 = "Flying";
    bird.hometown = "Türkiye";

    bird.PrintMembers();







}
