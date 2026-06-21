//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include "User.h"

class Admin : public User
{
private:
    string role;

public:
    Admin();
    Admin(int, string, string, string);

    void setRole(string);
    string getRole() const;

    void display() const override;
    void viewAllUsers();
    void viewAllProducts();
    void viewAllOrders();

    ~Admin();
};