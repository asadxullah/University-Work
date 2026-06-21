//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Product
{
protected:
    int productID;
    string productName;
    double price;
    int stock;

public:

    Product();
    Product(int, string, double, int);

    void setProductID(int);
    void setProductName(string);
    void setPrice(double);
    void setStock(int);

    int getProductID() const;
    string getProductName() const;
    double getPrice() const;
    int getStock() const;

    virtual void display() const;

    // Operator Overloading
    Product operator+(double);
    bool operator==(const Product&) const;
    Product& operator++();

    friend ostream& operator<<(ostream&, const Product&);
    friend istream& operator>>(istream&, Product&);

    virtual ~Product();
};