//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "Product.h"

class Grocery : public Product
{
private:
    string expiryDate;

public:

    Grocery();

    Grocery(int,string,double,int,string);

    void setExpiryDate(string);
    string getExpiryDate() const;

    void display() const override;

    ~Grocery();
};