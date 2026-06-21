//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "User.h"
#include "Product.h"

class Seller : virtual public User
{
private:
    string storeName;

public:
    Seller();
    Seller(int, string, string, string);

    void setStoreName(string);
    string getStoreName() const;
    void addProduct(Product&);
    string getRole() const override;
    void display() const override;

    ~Seller();
};