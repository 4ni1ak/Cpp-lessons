/*
(Invoice Class) Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store.
 An Invoice should include four data members—a part number (type string), a part description (type string),
  a quantity of the item being purchased (type int) and a price per item (type int).
  Your class should have a constructor that initializes the four data members.
   A constructor that receives multiple arguments is defined with the form:
    ClassName( TypeName1 parameterName1, TypeName2 parameterName2, ... )
    Provide a set and a get function for each data member.
     In addition, provide a member function named getInvoiceAmount that calculates the invoice amount
      (i.e., multiplies the quantity by the price per item), then returns the amount as an int value
      . If the quantity is not positive, it should be set to 0.
If the price per item is not positive,
 it should be set to 0. Write a test program that demonstrates class Invoice’s capabilities.
*/
#include <iostream>
#include <string>
using namespace std;

class Invoice
{
private:
    string partNumber;
    string partDescription;
    int quantity;
    int price;

public:
    Invoice(string partNumber, string partDescription, int quantity, int price)
    {
        setPartNumber(partNumber);
        setPartDescription(partDescription);
        setQuantity(quantity);
        setprice(price);
    }

    void setPartNumber(string partNumber1)
    {
        partNumber = partNumber1;
    }

    void setPartDescription(string partDescription1)
    {
        partDescription = partDescription1;
    }

    void setQuantity(int quantity1)
    {
        if (quantity1 > 0)
        {
            quantity = quantity1;
        }
        else
        {
            quantity = 0;
        }
    }

    void setprice(int price1)
    {
        if (price1 > 0)
        {
            price = price1;
        }
        else
        {
            price = 0;
        }
    }

    string getNumber()
    {
        return partNumber;
    }

    string getDescription()
    {
        return partDescription;
    }

    int getQuantity()
    {
        return quantity;
    }

    int getPrice()
    {
        return price;
    }

    int getInvoiceAmount()
    {
        return quantity * price;
    }
};

int main()
{
    Invoice invoice("1", "crowbar", 3, 6);

    cout << "Number: " << invoice.getNumber() << endl;
    cout << "Description: " << invoice.getDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price: " << invoice.getPrice() << endl;
    cout << "Amount: " << invoice.getInvoiceAmount() << endl;

    return 0;
}

