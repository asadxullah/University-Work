//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Clothing.h"

Clothing::Clothing()
{
    size = "Medium";
}

Clothing::Clothing(int id,string name,double price,int stock,string s): Product(id, name, price, stock)
{
    size = s;
}

void Clothing::setSize(string s)
{
    size = s;
}

string Clothing::getSize() const
{
    return size;
}

void Clothing::display() const
{
    cout << "\n===== Clothing =====\n";

    Product::display();

    cout << "Size: "<< size<< endl;
}

Clothing::~Clothing(){}