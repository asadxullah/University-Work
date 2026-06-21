//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Electronics.h"

Electronics::Electronics()
{
    warrantyYears = 0;
}

Electronics::Electronics(int id,string name,double price,int stock,int warranty): Product(id, name, price, stock)
{
    warrantyYears = warranty;
}

void Electronics::setWarrantyYears(int years)
{
    warrantyYears = years;
}

int Electronics::getWarrantyYears() const
{
    return warrantyYears;
}

void Electronics::display() const
{
    cout << "\n===== Electronics =====\n";

    Product::display();

    cout << "Warranty: "
        << warrantyYears
        << " Years\n";
}

Electronics::~Electronics(){}