//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Grocery.h"

Grocery::Grocery()
{
    expiryDate = "N/A";
}

Grocery::Grocery(int id,string name,double price,int stock,string expiry): Product(id, name, price, stock)
{
    expiryDate = expiry;
}

void Grocery::setExpiryDate(string expiry)
{
    expiryDate = expiry;
}

string Grocery::getExpiryDate() const
{
    return expiryDate;
}

void Grocery::display() const
{
    cout << "\n===== Grocery =====\n";

    Product::display();

    cout << "Expiry Date: "<< expiryDate<< endl;
}

Grocery::~Grocery(){}