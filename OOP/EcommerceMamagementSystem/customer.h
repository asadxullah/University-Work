//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "User.h"
class Order;
class Review;

class Customer : virtual public User
{
private:
    int loyaltyPoints;

public:
    Customer();
    Customer(int, string, string, int);

    void setLoyaltyPoints(int);
    int getLoyaltyPoints() const;
    string getRole() const override;
    void display() const override;

    void placeOrder(Order&);
    void writeReview(Review&);

    ~Customer();
};