//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "Payment.h"

class CreditCardPayment : public Payment
{
private:
    string cardNumber;
    string cardHolderName;

public:

    CreditCardPayment();

    CreditCardPayment(double,string,string);

    void processPayment() override;

    void displayPaymentInfo() const override;

    ~CreditCardPayment();
};