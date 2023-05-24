#include <iostream>

using namespace std;




class Animal
{

public:

 int age;
 string type1;

 Animal()
 {
    cout<<"Base Class  "<<endl;
 }
 void setMembers(int age1, string type2)
 {
     age = age1;
     type1=type2;
 }
};

class Flyers
{
public :
    string wingSize;
    Flyers()
    {
        cout<<"This is class Flyer"<<endl;
    }
};

class Bird : private Animal,public Flyers
{
public:
string hometown;
Bird()
{
    cout<<"Bird class constuctor"<<endl;
}

  void PrintMembers()
  {
      cout<<age<<endl<<type1<<endl<<hometown<<endl<<wingSize<<endl;
  }
  void SetMember(int age2,string type3, string hometown2)
  {
      setMembers(age2,type3);
      hometown = hometown2;
  }
};
int main()
{

   Bird bird;
   bird.SetMember(21,"Flying","Turkiye");
   bird.wingSize = "Big";
   bird.PrintMembers();
}


