//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Cart.h"

Cart::Cart()
{
    capacity = 10;
    itemCount = 0;

    items = new CartItem[capacity];
}

Cart::Cart(int cap)
{
    capacity = cap;
    itemCount = 0;

    items = new CartItem[capacity];
}
//--------Deep Copy Constructor---------

Cart::Cart(const Cart& other)
{
    capacity = other.capacity;
    itemCount = other.itemCount;

    items = new CartItem[capacity];

    for (int i = 0; i < itemCount; i++)
    {
        items[i] = other.items[i];
    }
}

Cart& Cart::operator=(const Cart& other)
{
    if (this == &other) return *this;   // self-assignment guard

    delete[] items;                      // free old memory

    capacity = other.capacity;
    itemCount = other.itemCount;
    items = new CartItem[capacity];

    for (int i = 0; i < itemCount; i++)
        items[i] = other.items[i];

    return *this;
}

//-----------addItem()------------------

void Cart::addItem(
    Product* product,
    int quantity
)
{
    if (itemCount < capacity)
    {
        items[itemCount] =CartItem(product, quantity);

        itemCount++;
    }
    else
    {
        cout << "Cart Full!\n";
    }
}
//-----------removeItem()------------

void Cart::removeItem(int index)
{
    if (index < 0 || index >= itemCount)
    {
        cout << "Invalid Item\n";
        return;
    }

    for (int i = index; i < itemCount - 1; i++)
    {
        items[i] = items[i + 1];
    }

    itemCount--;
}
//----------------calculateTotal()--------------

double Cart::calculateTotal() const
{
    double total = 0;

    for (int i = 0; i < itemCount; i++)
    {
        total += items[i].getTotalPrice();
    }

    return total;
}
//----------------displayCart()------------------

void Cart::displayCart() const
{
    cout << "\n===== CART =====\n";

    for (int i = 0; i < itemCount; i++)
    {
        items[i].display();
    }

    cout << "\nGrand Total: "<< calculateTotal()<< endl;
}
int Cart::getItemCount() const
{
    return itemCount;
}
Cart::~Cart()
{
    delete[] items;
}