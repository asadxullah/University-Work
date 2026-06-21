//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "CartItem.h"

class Cart
{
private:

    CartItem* items;
    int itemCount;
    int capacity;

public:

    Cart();

    Cart(int);

    // Copy Constructor
    Cart(const Cart&);

    void addItem(Product*,int);

    void removeItem(int);
    Cart& operator=(const Cart&);

    double calculateTotal() const;

    void displayCart() const;

    int getItemCount() const;

    ~Cart();
};