//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include "Review.h"
#include "FileManager.h"

Review::Review()
{
    customerID = 0;
    rating = 0;
    comment = "";
}

Review::Review(int custID,int rate,string comm)
{
    customerID = custID;
    rating = rate;
    comment = comm;
}

void Review::displayReview()
{
    cout << "\n===== REVIEW =====\n";

    cout << "Customer ID: "<< customerID<< endl;

    cout << "Rating: "<< rating<< endl;

    cout << "Comment: "<< comment<< endl;
}

void Review::setCustomerID(int custID)
{
    customerID = custID;
}

void Review::setRating(int rate)
{
    rating = rate;
}

void Review::setComment(string comm)
{
    comment = comm;
}

int Review::getCustomerID() const
{
    return customerID;
}

int Review::getRating() const
{
    return rating;
}

string Review::getComment() const
{
    return comment;
}
void Review::saveReview(int customerID, int rating, string comment)
{
    FileManager::saveReview(customerID, rating, comment);
}
Review::~Review(){}