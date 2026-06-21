//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include <iostream>
using namespace std;

class Payment
{
protected:
    double amount;

public:

    Payment();
    Payment(double);

    void setAmount(double);
    double getAmount() const;

 
    virtual void processPayment() = 0;

    virtual void displayPaymentInfo() const = 0;

    virtual ~Payment();
};