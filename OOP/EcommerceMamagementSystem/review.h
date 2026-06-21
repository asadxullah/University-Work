//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Review
{
private:
    int customerID;
    int rating;
    string comment;

public:

    Review();

    Review(int,int,string);

    void displayReview();
	void setCustomerID(int);
	void setRating(int);
	void setComment(string);
	int getCustomerID() const;
	int getRating() const;
    void saveReview(int, int, string);

	string getComment() const;


    ~Review();
};