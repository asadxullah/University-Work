#include "FileManager.h"
#include <fstream>

void FileManager::saveUser(int id,string name,string email,string role)
{
    ofstream file("users.txt",ios::app);

    file << id << ","<< name << ","<< email << ","<< role<< endl;

    file.close();
}

void FileManager::saveProduct(int id,string name,double price,int stock,string category)
{
    ofstream file("products.txt",ios::app);

    file << id << ","<< name << ","<< price << ","<< stock << ","<< category<< endl;

    file.close();
}

void FileManager::saveOrder(int orderID,int customerID,double total)
{
    ofstream file("orders.txt",ios::app);

    file << orderID << ","<< customerID << ","<< total<< endl;

    file.close();
}

void FileManager::saveReview(int customerID,int rating,string comment)
{
    ofstream file("reviews.txt",ios::app);

    file << customerID << ","<< rating << ","<< comment<< endl;

    file.close();
}

void FileManager::viewUsers()
{
    ifstream file("users.txt");

    string line;

    cout << "\n===== USERS =====\n";

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void FileManager::viewProducts()
{
    ifstream file("products.txt");
    string line;
    cout << "\n===== PRODUCTS =====\n";
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}

void FileManager::viewOrders()
{
    ifstream file("orders.txt");
    string line;
    cout << "\n===== ORDERS =====\n";
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}

void FileManager::viewReviews()
{
    ifstream file("reviews.txt");
    string line;
    cout << "\n===== REVIEWS =====\n";
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}