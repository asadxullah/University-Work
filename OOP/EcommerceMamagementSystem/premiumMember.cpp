//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "PremiumMember.h"

PremiumMember::PremiumMember(): User(),Customer(),Seller()
{
    premiumDiscount = 0;
}

PremiumMember::PremiumMember(int id,string n,string e,int points,string store,double discount): User(id, n, e),Customer(id, n, e, points),Seller(id, n, e, store)
{
    premiumDiscount = discount;
}

void PremiumMember::setPremiumDiscount(double discount)
{
    premiumDiscount = discount;
}

double PremiumMember::getPremiumDiscount() const
{
    return premiumDiscount;
}

void PremiumMember::display() const
{
    cout << "\n----- Premium Member -----\n";

    User::display();

    cout << "Loyalty Points: "<< Customer::getLoyaltyPoints()<< endl;

    cout << "Store Name: "<< Seller::getStoreName()<< endl;

    cout << "Premium Discount: "<< premiumDiscount<< "%"<< endl;
}

string PremiumMember::getRole() const
{
    return "Premium Member";
}

PremiumMember::~PremiumMember(){}