#pragma once

#include <string>
#include <iostream>
using namespace std;

class FileManager
{
public:

    static void saveUser(int,string,string,string);

    static void saveProduct(int,string,double,int,string);

    static void saveOrder(int,int,double);

    static void saveReview(int,int,string);

    static void viewUsers();
    static void viewProducts();
    static void viewOrders();
    static void viewReviews();
};
