//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Admin.h"
#include "FileManager.h"


Admin::Admin() : User()
{
    role = "Manager";
}

Admin::Admin(int id, string n, string e, string r): User(id, n, e)
{
    role = r;
}

void Admin::setRole(string r)
{
    role = r;
}

string Admin::getRole() const
{
    return role;
}

void Admin::display() const
{
    cout << "\n----- Admin -----\n";
    User::display();
    cout << "Role: " << role << endl;
}


void Admin::viewAllUsers()
{
    FileManager::viewUsers();
}

void Admin::viewAllProducts()
{
    FileManager::viewProducts();
}

void Admin::viewAllOrders()
{
    FileManager::viewOrders();
}

Admin::~Admin(){}