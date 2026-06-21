//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "Product.h"

class CartItem
{
private:
    Product* product;
    int quantity;

public:
    CartItem();

    CartItem(Product*,int);

    void setProduct(Product*);
    void setQuantity(int);

    Product* getProduct() const;
    int getQuantity() const;

    double getTotalPrice() const;

    void display() const;

    ~CartItem();
};