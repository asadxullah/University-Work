//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Product.h"
#include "FileManager.h"
#include <fstream>

Product::Product()
{
    productID = 0;
    productName = "Unknown";
    price = 0;
    stock = 0;
}

Product::Product(int id, string name, double p, int s)
{
    productID = id;
    productName = name;
    price = p;
    stock = s;
}

void Product::setProductID(int id)
{
    productID = id;
}

void Product::setProductName(string name)
{
    productName = name;
}

void Product::setPrice(double p)
{
    price = p;
}

void Product::setStock(int s)
{
    stock = s;
}

int Product::getProductID() const
{
    return productID;
}

string Product::getProductName() const
{
    return productName;
}

double Product::getPrice() const
{
    return price;
}

int Product::getStock() const
{
    return stock;
}

void Product::display() const
{
    cout << "\nProduct ID: " << productID << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Price: " << price << endl;
    cout << "Stock: " << stock << endl;
}

Product Product::operator+(double amount)
{
    Product temp = *this;
    temp.price += amount;
    return temp;
}

bool Product::operator==(const Product& p) const
{
    return productID == p.productID;
}

Product& Product::operator++()
{
    stock++;
    return *this;
}

ostream& operator<<(ostream& out, const Product& p)
{
    out << p.productID << " "<< p.productName << " "<< p.price << " "<< p.stock;

    return out;
}

istream& operator>>(istream& in, Product& p)
{
    cout << "Enter Product ID: ";
    in >> p.productID;

    cout << "Enter Product Name: ";
    in >> p.productName;

    cout << "Enter Price: ";
    in >> p.price;

    cout << "Enter Stock: ";
    in >> p.stock;

    return in;
}

Product::~Product(){}