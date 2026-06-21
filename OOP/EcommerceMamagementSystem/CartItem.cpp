//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "CartItem.h"

CartItem::CartItem()
{
    product = nullptr;
    quantity = 0;
}

CartItem::CartItem(Product* p, int q)
{
    product = p;
    quantity = q;
}

void CartItem::setProduct(Product* p)
{
    product = p;
}

void CartItem::setQuantity(int q)
{
    quantity = q;
}

Product* CartItem::getProduct() const
{
    return product;
}

int CartItem::getQuantity() const
{
    return quantity;
}

double CartItem::getTotalPrice() const
{
    if (product != nullptr)
    {
        return product->getPrice() * quantity;
    }

    return 0;
}

void CartItem::display() const
{
    if (product != nullptr)
    {
        cout << product->getProductName()<< " | Qty: "<< quantity<< " | Total: "<< getTotalPrice()<< endl;
    }
}

CartItem::~CartItem(){}