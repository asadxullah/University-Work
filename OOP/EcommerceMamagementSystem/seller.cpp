//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Seller.h"

Seller::Seller() : User()
{
    storeName = "Unknown Store";
}

Seller::Seller(int id, string n, string e, string store): User(id, n, e)
{
    storeName = store;
}

void Seller::setStoreName(string store)
{
    storeName = store;
}

string Seller::getStoreName() const
{
    return storeName;
}

void Seller::display() const
{
    cout << "\n----- Seller -----\n";
    User::display();
    cout << "Store Name: " << storeName << endl;
}

#include "FileManager.h"

void Seller::addProduct(Product& p)
{
    FileManager::saveProduct(p.getProductID(),p.getProductName(),p.getPrice(),p.getStock(),"General");
}

string Seller::getRole() const
{
    return "Seller";
}

Seller::~Seller()
{}