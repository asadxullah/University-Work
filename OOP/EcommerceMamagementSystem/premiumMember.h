//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "Customer.h"
#include "Seller.h"

class PremiumMember : public Customer, public Seller
{
private:
    double premiumDiscount;

public:
    PremiumMember();
    PremiumMember(int,string,string,int,string,double);

    void setPremiumDiscount(double);
    double getPremiumDiscount() const;
    string getRole() const override;
    void display() const override;

    ~PremiumMember();
};