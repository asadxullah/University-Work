//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Payment.h"

Payment::Payment()
{
    amount = 0;
}

Payment::Payment(double amt)
{
    amount = amt;
}

void Payment::setAmount(double amt)
{
    amount = amt;
}

double Payment::getAmount() const
{
    return amount;
}

Payment::~Payment(){}