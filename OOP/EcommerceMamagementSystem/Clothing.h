//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "Product.h"

class Clothing : public Product
{
private:
    string size;

public:

    Clothing();

    Clothing(int,string,double,int,string);

    void setSize(string);
    string getSize() const;

    void display() const override;

    ~Clothing();
};