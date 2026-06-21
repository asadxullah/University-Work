//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Order.h"
#include"FileManager.h"

Order::Order()
{
    orderID = 0;
    customerID = 0;
    totalAmount = 0;
}

Order::Order(int id,int custID,double total)
{
    orderID = id;
    customerID = custID;
    totalAmount = total;
}

void Order::setOrderID(int id)
{
    orderID = id;
}

void Order::setCustomerID(int id)
{
    customerID = id;
}

void Order::setTotalAmount(double total)
{
    totalAmount = total;
}

int Order::getOrderID() const
{
    return orderID;
}

int Order::getCustomerID() const
{
    return customerID;
}

double Order::getTotalAmount() const
{
    return totalAmount;
}

void displayOrder(const Order& order)
{
    cout << "\n===== ORDER DETAILS =====\n";

    cout << "Order ID: "<< order.orderID<< endl;

    cout << "Customer ID: "<< order.customerID<< endl;

    cout << "Total Amount: "<< order.totalAmount<< endl;
}

Order::~Order(){}