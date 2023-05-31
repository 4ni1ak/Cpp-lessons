#include <iostream>
using namespace std;
class Animal
{friend class Livings;
private:
    string distinction;


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
 virtual void shout()
 {
     cout<<"Animal shouts"<<endl;

 }
    void run()
    {
        cout<<"Animal runs";
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
    void setDistinction(Animal& an1){
    an1.distinction=" ";}

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
    void run(){
        cout<<"Flyers flies";
    }
    //      syntax err
    //void setDistinction(Animal& an1){
    //an1.distinction=" ";
    //}
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

   Animal *animalPtr,animal1;
   Flyers flyers1;
   Livings *livingsPtr,living1;
   Bird bird1;

   //animalPtr=&animal1;
   animalPtr=& flyers1;
   // syntax error   animalPtr=& living1;
   //animalPtr->shout();//animal shout
    animalPtr->shout();//now says gark because we write virtual
    animalPtr->run();//its says Animal runs why because we don't writevirtual
    //flyers1.distinction="distinction type 1"

    //syntax err//living1.distinction=";"
    //
    // there is the only exception to access private data member
    living1.setDistinction(flyers1);


}


