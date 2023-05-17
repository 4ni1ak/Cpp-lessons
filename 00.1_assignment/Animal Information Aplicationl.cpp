/*
Construct a class as animal,deifne public members and functions,set,get,print,together with destructer
and constructors(default an paramters) then create some objects and test your class and methods
*/
#include<iostream>
#include<fstream>
using namespace std;

const int MAX_ANIMALS = 100;

class Animals {
private:
    int id;
    int age;
    string name;
    string domain;
    string regnum;
    string phylum;
    string animalClass;
    string order;
    string family;
    string genus;
    string species;

public:
    // Default constructor
    Animals() : id(0), age(0), name("Unknown"), domain("Unknown"), regnum("Unknown"), phylum("Unknown"), animalClass("Unknown"), order("Unknown"), family("Unknown"), genus("Unknown"), species("Unknown") {};

    // Parameterized constructor
    Animals(int id, int age, string name, string domain, string regnum, string phylum, string animalClass, string order, string family, string genus, string species) {
        setId(id);
        setAge(age);
        setName(name);
        setDomain(domain);
        setRegnum(regnum);
        setPhylum(phylum);
        setAnimalClass(animalClass);
        setOrder(order);
        setFamily(family);
        setGenus(genus);
        setSpecies(species);
    }

    // Destructor
    ~Animals() {}

    // Setters
    void setId(int id1) {
        id = id1;
    }

    void setAge(int age1) {
        age = age1;
    }

    void setName(string name1) {
        name = name1;
    }

    void setDomain(string domain1) {
        domain = domain1;
    }

    void setRegnum(string regnum1) {
        regnum = regnum1;
    }

    void setPhylum(string phylum1) {
        phylum = phylum1;
    }

    void setAnimalClass(string animalClass1) {
        animalClass = animalClass1;
    }

    void setOrder(string order1) {
        order = order1;
    }

    void setFamily(string family1) {
        family = family1;
    }

    void setGenus(string genus1) {
        genus = genus1;
    }

    void setSpecies(string species1) {
        species = species1;
    }

    // Getters
    int getId() {
        return id;
    }

    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }

    string getDomain() {
        return domain;
    }

    string getRegnum() {
        return regnum;
    }

    string getPhylum() {
        return phylum;
    }

    string getAnimalClass() {
        return animalClass;
    }

    string getOrder() {
        return order;
    }

    string getFamily() {
        return family;
    }

    string getGenus() {
        return genus;
    }

    string getSpecies() {
        return species;
    }

    // Print animal details
    void print() {
        cout << "| " << id << " | " << age << " | " << name << " | " <<
            domain << " | " << regnum << " | " << phylum << " | " << animalClass << " | " <<
            order << " | " << family << " | " << genus << " | " << species << " |" << endl;
    }

};

void bubbleSort(Animals* arr, int n);
int main() {
	cout << "Welcome to the Animal Information Application!" << endl;
    cout << "This application allows you to enter details about animals and displays them in a table." << endl;
    cout << "To start, please enter the number of animals you want to enter ==>";
    int numAnimals = 0;
  
    cin >> numAnimals;

    Animals animalArray[MAX_ANIMALS];
    
    // Collect animal details from user
    for (int i = 0; i < numAnimals; i++) {
        int id, age;
        string name, domain, regnum, phylum, animalClass, order, family, genus, species;

        cout << "Enter the details for Animal " << i + 1 << endl;
        cout << "ID ==> ";
        cin >> id;

        // Check if ID already exists
        bool idExists = false;
        for (int j = 0; j < i; j++) {
            if (animalArray[j].getId() == id) {
                idExists = true;
                break;
            }
        }

        if (idExists) {
            cout << "Error!!! Animal with ID " << id << " already exists. Please enter a different ID." << endl;
            i--;
            continue;
        }

        cout << "Age ==> ";
        cin >> age;
        cout << "Name ==> ";
        cin >> name;
        cout << "Domain ==> ";
        cin >> domain;
        cout << "Regnum ==> ";
        cin >> regnum;
        cout << "Phylum ==> ";
        cin >> phylum;
        cout << "Class ==> ";
        cin >> animalClass;
        cout << "Order ==> ";
        cin >> order;
        cout << "Family ==> ";
        cin >> family;
        cout << "Genus ==> ";
        cin >> genus;
        cout << "Species ==> ";
        cin >> species;

        animalArray[i] = Animals(id, age, name, domain, regnum, phylum, animalClass, order, family, genus, species);
    }

    // Sort the array of animals based on ID using bubble sort
    bubbleSort(animalArray, numAnimals);

    cout << endl;
    cout << "Animal Details" << endl;
    cout << "+---------------------------------------------------------------------------------------+" << endl;
    cout << "| ID | Age | Name | Domain | Regnum | Phylum | Class | Order | Family | Genus | Species |" << endl;
    cout << "+---------------------------------------------------------------------------------------+" << endl;

    // Print the sorted animal details
    for (int i = 0; i < numAnimals; i++) {
        animalArray[i].print();
    }

    // Save animal details to a file
    ofstream outputFile("animal_table.txt");

    if (outputFile.is_open()) {
        outputFile << "Animal Details" << endl;
        outputFile << "+---------------------------------------------------------------------------------------+" << endl;
        outputFile << "| ID | Age | Name | Domain | Regnum | Phylum | Class | Order | Family | Genus | Species |" << endl;
        outputFile << "+---------------------------------------------------------------------------------------+" << endl;

        for (int i = 0; i < numAnimals; i++) {
            outputFile << "| " << animalArray[i].getId() << " | " << animalArray[i].getAge() << " | "
                << animalArray[i].getName() << " | " << animalArray[i].getDomain() << " | "
                << animalArray[i].getRegnum() << " | " << animalArray[i].getPhylum() << " | "
                << animalArray[i].getAnimalClass() << " | " << animalArray[i].getOrder() << " | "
                << animalArray[i].getFamily() << " | " << animalArray[i].getGenus() << " | "
                << animalArray[i].getSpecies() << " |" << endl;
        }

        outputFile.close();
        cout << "Animal details saved to animal_table.txt" << endl;
    }
    else {
        cout << "Error opening the file." << endl;
    }
cout<<"Thanks for using me, see you :)"<<endl;
    return 0;
}
// Bubble sort algorithm to sort animals based on ID
void bubbleSort(Animals* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].getId() > arr[j + 1].getId()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

