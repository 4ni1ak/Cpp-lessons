/*
seperate cpp and h then run your code
*/
#include <iostream>
#include "Invoice.h"

#include "Invoice.cpp"
int main() {
    Invoice invoice("1", "crowbar", 3, 6);

    std::cout << "Number: " << invoice.getNumber() << std::endl;
    std::cout << "Description: " << invoice.getDescription() << std::endl;
    std::cout << "Quantity: " << invoice.getQuantity() << std::endl;
    std::cout << "Price: " << invoice.getPrice() << std::endl;
    std::cout << "Amount: " << invoice.getInvoiceAmount() << std::endl;

    return 0;
}
