/*
ZooAnimal clas 
name;int cageNumber;
      int weightDate;
      int weight;
private data members 
set and get functions constructor and destructor

derived class Large Animal 
species;
cageMinimumVolume;

derived class Mammal from both largeanimal and zooanimal 
float minimumVolume;
      int minimumWeight;

 


write virtual functions, try with object pointers defined as base class but points to derived class

*/
using namespace std;

#include <iostream>
#include <string>

class ZooAnimal {
private:
    string animalName;
    int cageNumber;
    int weightDate;
    int weight;

public:
    ZooAnimal(string _animalName, int _cageNumber, int _weightDate, int _weight){

        setName(_animalName);
         setCageNumber(_cageNumber);
         setWeightDate(_weightDate);
          setWeight(_weight);
          }

    void setName(string _animalName) {
        animalName = _animalName;
    }

    string getName()  {
        return animalName;
    }

    void setCageNumber(int _cageNumber) {
        cageNumber = _cageNumber;
    }

    int getCageNumber()  {
        return cageNumber;
    }

    void setWeightDate(int _weightDate) {
        weightDate = _weightDate;
    }

    int getWeightDate()  {
        return weightDate;
    }

    void setWeight(int _weight) {
        weight = _weight;
    }

    int getWeight()  {
        return weight;
    }

    virtual void printInfo() {
        cout << "Name " <<animalName <<endl<<
         "Cage Number is" << cageNumber <<endl
         << "Weight is " << weight << endl;
    }
};

class LargeAnimal : public ZooAnimal {
private:
    string species;
    int cageMinimumVolume;

public:
    LargeAnimal(string _animalName, int _number, int _date, int _weight, string _animalSpecies, int _minimumVolume)
        : ZooAnimal(_animalName, _number, _date, _weight)
        {

         setSpecies(_animalSpecies);
         setCageMinimumVolume(_minimumVolume);
         }

    void printInfo()  {
        cout << "Name: " << getName() <<endl<<
         "Cage Number: " << getCageNumber() <<endl<<
          "Weight: " << getWeight()<<endl
                  << "Species is " << getSpecies() << endl<<
                  "Minimum Volume is" << getCageMinimumVolume() << endl<<endl<<endl;
    }

    void setSpecies(string _animalSpecies) {
        species = _animalSpecies;
    }

    string getSpecies()  {
        return species;
    }

    void setCageMinimumVolume(int _minimumVolume) {
        cageMinimumVolume = _minimumVolume;
    }

    int getCageMinimumVolume()  {
        return cageMinimumVolume;
    }
};

class Mammal : public LargeAnimal {
private:
    float minimumVolume;
    int minimumWeight;

public:
    Mammal(string _animalName, int _number, int _date, int _weight, string _animalSpecies, int _minimumVolume, int _minimumAnimalWeight)
    :LargeAnimal(_animalName, _number, _date, _weight, _animalSpecies, _minimumVolume)
    {

        setMinimumVolume(_minimumVolume);
        setMinimumWeight(_minimumAnimalWeight);
    }


    void printInfo()  {
        cout << "Name is " << getName()<<endl
        << "Cage Number is  " << getCageNumber()<<endl
        << "Weight is " << getWeight()<<endl
        << " Species is " << getSpecies()<<endl
        << "Minimum Volume is " << getCageMinimumVolume()<<endl
        << "Minimum Weight is " << getMinimumWeight() << endl;
    }

    void setMinimumVolume(float _minimumVolume) {
        minimumVolume = _minimumVolume;
    }

    float getMinimumVolume()  {
        return minimumVolume;
    }

    void setMinimumWeight(int _minimumWeight) {
        minimumWeight = _minimumWeight;
    }

    int getMinimumWeight()  {
        return minimumWeight;
    }
};
int main() {// af

    ZooAnimal* animalPtr;

    LargeAnimal lion("Bird", 1, 230, 150, "Mammal", 500);
    Mammal elephant("BigDog", 2, 203, 70, "Mammal", 100, 20);

    animalPtr = &lion;
    animalPtr->printInfo();

    animalPtr = &elephant;
    animalPtr->printInfo();

    return 0;
}/*
vector<variant<string, int>> userVector;

    string stringValue;
    int intValue;

    cout << "Enter a Name";
    cin >> stringValue;
    mixedVector.push_back(stringValue);

    cout << "Enter an integer value: ";
    cin >> intValue;
    mixedVector.push_back(intValue);

    cout << "Enter another integer value: ";
    cin >> intValue;
    mixedVector.push_back(intValue);

    cout << "Enter another string value: ";
    cin >> stringValue;
    mixedVector.push_back(stringValue);

    cout << "Values in the vector:" << endl;
    for (const auto& element : mixedVector) {
        if (holds_alternative<string>(element)) {
            cout << "String: " << get<string>(element) << endl;
        }
        else if (holds_alternative<int>(element)) {
            cout << "Integer: " << get<int>(element) << endl;
  /*
    vector<variant<string, int>> userVector;

    string stringValue;
    int intValue;

    cout << "Enter a Name";
    cin >> stringValue;
    mixedVector.push_back(stringValue);

    cout << "Enter an integer value: ";
    cin >> intValue;
    mixedVector.push_back(intValue);

    cout << "Enter another integer value: ";
    cin >> intValue;
    mixedVector.push_back(intValue);

    cout << "Enter another string value: ";
    cin >> stringValue;
    mixedVector.push_back(stringValue);

    cout << "Values in the vector:" << endl;
    for (const auto& element : mixedVector) {
        if (holds_alternative<string>(element)) {
            cout << "String: " << get<string>(element) << endl;
        }
        else if (holds_alternative<int>(element)) {
            cout << "Integer: " << get<int>(element) << endl;

*/

