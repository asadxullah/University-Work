//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "Product.h"

class Inventory
{
private:
    Product* products[100];
    int totalProducts;

public:
    Inventory();

    void addProduct(Product*);

    void displayProducts();

    int getTotalProducts() const;

    ~Inventory();
};