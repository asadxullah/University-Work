//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "Payment.h"

class CashOnDelivery : public Payment
{
private:
    string deliveryAddress;

public:

    CashOnDelivery();

    CashOnDelivery(double,string);

    void processPayment() override;

    void displayPaymentInfo() const override;

    ~CashOnDelivery();
};