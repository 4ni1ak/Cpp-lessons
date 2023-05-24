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
 void shout()
 {
     cout<<"Animal shouts"<<endl;
 }
};

class Livings
{
    public:
    Livings()
    {
        cout<<"Livings Class"<<endl;
    }
     void shout(string shout1)
    {
        cout<<"Living"<<shout1<<endl;
    }
};
class Flyers:public Animal
{
public :
    string wingSize;
    Flyers()
    {
        cout<<"This is class Flyer"<<endl;
    }
    void shout()
    {
        cout<<"Flyers shout as GARK"<<endl;
    }
};

class Bird : public Flyers, public Livings
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
  void shout()
  {
    cout<<"Birds shout as TARK"<<endl;
  }
};


int main()
{

   Bird bird; Livings bird2;
   bird.SetMember(21,"Flying","Turkiye");
   bird.wingSize = "Big";
   bird.PrintMembers();
   //bird.shout("WAAV");
   bird2.shout("WAAAV");
}


