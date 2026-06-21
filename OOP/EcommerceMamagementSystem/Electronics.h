//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "Product.h"

class Electronics : public Product
{
private:
    int warrantyYears;

public:

    Electronics();

    Electronics(int,string,double,int,int);

    void setWarrantyYears(int);
    int getWarrantyYears() const;

    void display() const override;

    ~Electronics();
};