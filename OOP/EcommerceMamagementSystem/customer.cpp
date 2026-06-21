//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Customer.h"
#include "Order.h"
#include "Review.h"
#include "FileManager.h"

Customer::Customer() : User()
{
    loyaltyPoints = 0;
}

Customer::Customer(int id, string n, string e, int points): User(id, n, e)
{
    loyaltyPoints = points;
}

void Customer::setLoyaltyPoints(int points)
{
    loyaltyPoints = points;
}

int Customer::getLoyaltyPoints() const
{
    return loyaltyPoints;
}

void Customer::display() const
{
    cout << "\n----- Customer -----\n";
    User::display();
    cout << "Loyalty Points: " << loyaltyPoints << endl;
}

void Customer::placeOrder(Order& order)
{
    FileManager::saveOrder(order.getOrderID(),order.getCustomerID(),order.getTotalAmount());
}

string Customer::getRole() const
{
    return "Customer";
}

void Customer::writeReview(Review& review)
{
    review.saveReview(getUserID(), review.getRating(), review.getComment());
}

Customer::~Customer(){}