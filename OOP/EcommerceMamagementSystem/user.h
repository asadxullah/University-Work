//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include <iostream>
#include <string>

using namespace std;

class User
{
protected:
    int userID;
    string name;
    string email;

public:
    User();
    User(int, string, string);

    void setUserID(int);
    void setName(string);
    void setEmail(string);

    int getUserID() const;
    string getName() const;
    string getEmail() const;
    virtual string getRole() const;
    virtual void display() const;
    virtual ~User();
};