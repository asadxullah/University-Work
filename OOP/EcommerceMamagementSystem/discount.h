//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

class Discount
{
private:
    double percentage;

public:

    Discount();

    Discount(double);

    double applyDiscount(double total);

    ~Discount();
};