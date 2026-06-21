//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Discount.h"

Discount::Discount()
{
    percentage = 0;
}

Discount::Discount(double p)
{
    percentage = p;
}

double Discount::applyDiscount(double total)
{
    return total -(total * percentage / 100);
}

Discount::~Discount(){}