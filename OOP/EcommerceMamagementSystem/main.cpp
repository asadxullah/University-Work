//ASAD ULLAH       L1S25BSCS0004
//HUZAIFA SAEED    L1S25BSCS0002
//NABEEL AHMAD     L1S25BSCS0005
//EHTISHAM LIAQAT  L1S25BSCS01013

#include <iostream>

#include "Admin.h"
#include "Seller.h"
#include "Customer.h"

#include "Inventory.h"
#include "Electronics.h"
#include "Clothing.h"
#include "Grocery.h"

#include "Cart.h"
#include "Order.h"
#include "Review.h"
#include "Discount.h"

#include "Payment.h"
#include "CreditCardPayment.h"
#include "CashOnDelivery.h"

#include "FileManager.h"

using namespace std;

void adminMenu(Admin& admin)
{
    int choice;


        do
        {
            cout << "\n===== ADMIN MENU =====\n";
            cout << "1. View Users\n";
            cout << "2. View Products\n";
            cout << "3. View Orders\n";
            cout << "4. Back\n";

            cout << "Enter Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                admin.viewAllUsers();
                break;

            case 2:
                admin.viewAllProducts();
                break;

            case 3:
                admin.viewAllOrders();
                break;

            case 4:
                cout << "Returning...\n";
                break;

            default:
                cout << "Invalid Choice\n";
            }

        } while (choice != 4);
   

}

void sellerMenu(Seller& seller)
{
    int choice;

    
        do
        {
            cout << "\n===== SELLER MENU =====\n";
            cout << "1. Add Electronics Product\n";
            cout << "2. Add Clothing Product\n";
            cout << "3. Add Grocery Product\n";
            cout << "4. View Products\n";
            cout << "5. Back\n";

            cout << "Enter Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                Electronics product(
                    1,
                    "Laptop",
                    120000,
                    10,
                    2
                );

                seller.addProduct(product);

                cout << "Electronics Product Added\n";

                break;
            }

            case 2:
            {
                Clothing product(
                    2,
                    "Shirt",
                    3000,
                    20,
                    "Large"
                );

                seller.addProduct(product);

                cout << "Clothing Product Added\n";

                break;
            }

            case 3:
            {
                Grocery product(
                    3,
                    "Milk",
                    250,
                    50,
                    "12/12/2026"
                );

                seller.addProduct(product);

                cout << "Grocery Product Added\n";

                break;
            }

            case 4:
            {
                FileManager::viewProducts();
                break;
            }

            case 5:
                break;

            default:
                cout << "Invalid Choice\n";
            }

        } while (choice != 5);
   

}

void customerMenu(Customer& customer)
{
    Cart cart;

   
        int choice;

    do
    {
        cout << "\n===== CUSTOMER MENU =====\n";

        cout << "1. View Products\n";
        cout << "2. Add Sample Product To Cart\n";
        cout << "3. View Cart\n";
        cout << "4. Place Order\n";
        cout << "5. Add Review\n";
        cout << "6. Back\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            FileManager::viewProducts();
            break;
        }

        case 2:
        {
            Electronics* laptop =
                new Electronics(
                    1,
                    "Laptop",
                    120000,
                    10,
                    2
                );

            cart.addItem(
                laptop,
                1
            );

            cout << "Added To Cart\n";

            break;
        }

        case 3:
        {
            cart.displayCart();
            break;
        }

        case 4:
        {
            double total =
                cart.calculateTotal();

            Discount discount(10);

            total =
                discount.applyDiscount(
                    total
                );

            cout << "\nTotal After Discount: "
                << total
                << endl;

            int paymentChoice;

            cout << "\n1. Credit Card";
            cout << "\n2. Cash On Delivery";

            cout << "\nChoose Payment: ";
            cin >> paymentChoice;

            Payment* payment;

            if (paymentChoice == 1)
            {
                payment =
                    new CreditCardPayment(
                        total,
                        "123456789",
                        "Ali"
                    );
            }
            else
            {
                payment =
                    new CashOnDelivery(
                        total,
                        "Lahore"
                    );
            }

            payment->processPayment();

            Order order(
                1001,
                customer.getUserID(),
                total
            );

            FileManager::saveOrder(
                order.getOrderID(),
                order.getCustomerID(),
                order.getTotalAmount()
            );

            delete payment;

            break;
        }

        case 5:
        {
            int rating;

            string comment;

            cout << "Rating (1-5): ";
            cin >> rating;

            cin.ignore();

            cout << "Comment: ";
            getline(
                cin,
                comment
            );

            FileManager::saveReview(
                customer.getUserID(),
                rating,
                comment
            );

            cout << "Review Added\n";

            break;
        }

        case 6:
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 6);
   

}

int main()
{
    Admin admin(1,"Admin","[admin@gmail.com]","System Admin");
    FileManager::saveUser(admin.getUserID(),admin.getName(),admin.getEmail(),admin.getRole());

    Seller seller(2,"Seller","seller@gmail.com","Tech Store");
    FileManager::saveUser(seller.getUserID(),seller.getName(),seller.getEmail(),seller.getRole());

    Customer customer(3,"Customer","customer@gmail.com",100);
    FileManager::saveUser(customer.getUserID(),customer.getName(),customer.getEmail(),customer.getRole());

    int roleChoice;

    do
    {
        cout << "\n================================";
        cout << "\n   E-COMMERCE MANAGEMENT SYSTEM";
        cout << "\n================================";

        cout << "\n1. Admin";
        cout << "\n2. Seller";
        cout << "\n3. Customer";
        cout << "\n4. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> roleChoice;

        switch (roleChoice)
        {
        case 1:
            adminMenu(admin);
            break;

        case 2:
            sellerMenu(seller);
            break;

        case 3:
            customerMenu(customer);
            break;

        case 4:
            cout << "\nThank You For Using The System\n";
            break;

        default:
            cout << "\nInvalid Choice\n";
        }

    } while (roleChoice != 4);

    return 0;
   

}
