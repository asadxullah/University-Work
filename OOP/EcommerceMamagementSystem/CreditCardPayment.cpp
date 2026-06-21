//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "CreditCardPayment.h"

CreditCardPayment::CreditCardPayment(): Payment()
{
    cardNumber = "";
    cardHolderName = "";
}

CreditCardPayment::CreditCardPayment(double amt,string cardNo,string holder): Payment(amt)
{
    cardNumber = cardNo;
    cardHolderName = holder;
}

void CreditCardPayment::processPayment()
{
    cout << "\nPayment Processed Successfully\n";

    cout << "Amount: "<< amount<< endl;

    cout << "Method: Credit Card\n";
}

void CreditCardPayment::displayPaymentInfo() const
{
    cout << "\n===== Credit Card Payment =====\n";

    cout << "Card Holder: "<< cardHolderName<< endl;

    cout << "Card Number: "<< cardNumber<< endl;
    cout << "Amount: "<< amount<< endl;
}

CreditCardPayment::~CreditCardPayment(){}