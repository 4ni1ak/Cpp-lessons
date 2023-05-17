#include <iostream>
#include "invoice.h"
using namespace std;

Invoice::Invoice()
{
    // Default constructor
    partNumber = "";
    partDescription = "";
    quantity = 0;
    price = 0;
}

Invoice::Invoice(string partNumber, string partDescription, int quantity, int price)
{
    setPartNumber(partNumber);
    setPartDescription(partDescription);
    setQuantity(quantity);
    setprice(price);
}

Invoice::~Invoice()
{
    // Destructor
    cout << "Invoice destroyed." << endl;
}

void Invoice::setPartNumber(string partNumber1)
{
    partNumber = partNumber1;
}

void Invoice::setPartDescription(string partDescription1)
{
    partDescription = partDescription1;
}

void Invoice::setQuantity(int quantity1)
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

void Invoice::setprice(int price1)
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

string Invoice::getNumber()
{
    return partNumber;
}

string Invoice::getDescription()
{
    return partDescription;
}

int Invoice::getQuantity()
{
    return quantity;
}

int Invoice::getPrice()
{
    return price;
}

int Invoice::getInvoiceAmount()
{
    return quantity * price;
}
