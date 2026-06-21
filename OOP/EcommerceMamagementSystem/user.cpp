//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "User.h"
#include "FileManager.h"
#include <fstream>

User::User()
{
    userID = 0;
    name = "Unknown";
    email = "None";
}

User::User(int id, string n, string e)
{
    userID = id;
    name = n;
    email = e;
}

void User::setUserID(int id)
{
    userID = id;
}

void User::setName(string n)
{
    name = n;
}

void User::setEmail(string e)
{
    email = e;
}

int User::getUserID() const
{
    return userID;
}

string User::getName() const
{
    return name;
}

string User::getEmail() const
{
    return email;
}

void User::display() const
{
    cout << "User ID: " << userID << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
}

string User::getRole() const
{
    return "User";
}

User::~User(){}

