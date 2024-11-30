/* 
Write a program that calculates the total cost for a user after applying a discount, if applicable. The program should:

Ask the user for the quantity of items they want to purchase.
Calculate the total cost, where each unit costs 100.
Apply a 10% discount if the total cost exceeds 1000.
Print the total cost after applying the discount (if any).

or,

A shop will give a discount of 10% if the cost of the purchased quantity is more than
1000. Ask the user for quantity. Suppose, one unit will cost 100. Judge and print total
cost for the user.
*/

#include <iostream>
using namespace std;

int main()
{
    int quantity,unitPrice;
    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<"Give per unit price : ";
    cin>>unitPrice;

    double cost=quantity*unitPrice;
    double discout=cost*0.1;
    if(cost>1000)
    {
        cout<<"You will get 10% discount."<<"\n"<<"Your final price is:"<< cost-discout;
    }
    else
    {
        cout<<"You will not get any discount.";
    }

}
