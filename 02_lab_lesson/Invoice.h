#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    int price;

public:
	Invoice();
	Invoice(string partNumber, string partDescription, int quantity, int price);
	~Invoice();    
    void setPartNumber(string partNumber1);
    void setPartDescription(string partDescription1);
    void setQuantity(int quantity1) ;
    void setprice(int price1) ;
    string getNumber();
    string getDescription() ;
    int getQuantity() ;
    int getPrice();
    int getInvoiceAmount() ;
};
#endif
