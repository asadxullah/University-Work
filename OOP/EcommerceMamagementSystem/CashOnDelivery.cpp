//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "CashOnDelivery.h"

CashOnDelivery::CashOnDelivery()
    : Payment()
{
    deliveryAddress = "";
}

CashOnDelivery::CashOnDelivery(
    double amt,
    string address)
    : Payment(amt)
{
    deliveryAddress = address;
}

void CashOnDelivery::processPayment()
{
    cout << "\nOrder Placed Successfully\n";

    cout << "Amount To Be Paid: "<< amount<< endl;

    cout << "Method: Cash On Delivery\n";
}

void CashOnDelivery::displayPaymentInfo() const
{
    cout << "\n===== Cash On Delivery =====\n";

    cout << "Delivery Address: "<< deliveryAddress<< endl;

    cout << "Amount: "<< amount<< endl;
}

CashOnDelivery::~CashOnDelivery(){}