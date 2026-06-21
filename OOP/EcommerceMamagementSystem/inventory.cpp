//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Inventory.h"

Inventory::Inventory()
{
    totalProducts = 0;
}

void Inventory::addProduct(Product* product)
{
    products[totalProducts] = product;
    totalProducts++;
}

void Inventory::displayProducts()
{
    cout << "\n===== INVENTORY =====\n";

    for (int i = 0; i < totalProducts; i++)
    {
        products[i]->display();
        cout << endl;
    }
}

int Inventory::getTotalProducts() const
{
    return totalProducts;
}

Inventory::~Inventory(){}