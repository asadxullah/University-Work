//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Order
{
private:
    int orderID;
    int customerID;
    double totalAmount;

public:
    Order();

    Order(int,int,double);

    void setOrderID(int);
    void setCustomerID(int);
    void setTotalAmount(double);

    int getOrderID() const;
    int getCustomerID() const;
    double getTotalAmount() const;


    friend void displayOrder(const Order&);

    ~Order();
};