/*
create a C++ program that performs basic bank transactions. The program should prompt the 
user to input their current bank balance. Subsequently, it should ask the user if they 
wish to deposit or withdraw money from their account. Based on the user's choice, the program should perform the following actions:
Deposit:
Ask the user to enter the amount they wish to deposit.
Add the deposited amount to the current balance.
Display the updated balance.
Withdraw:
Ask the user to enter the amount they wish to withdraw.
Check if the withdrawal amount is greater than the current balance.
If yes, inform the user of insufficient funds and prompt them to enter a smaller amount.
If no, deduct the withdrawal amount from the current balance.
Display the updated balance.
After each transaction, the program should ask the user if they wish to make another
transaction. If the user opts to continue, the program should repeat the transaction process. Otherwise,
the program should terminate and display a thank you message.
*/


#include <iostream>
using namespace std;

int main() {
    double balance, deposit, withdraw;
    char choice;
    cout << "Enter your current bank balance: ";
    cin >> balance;
    do {
        //don't put the below cout and cin outside the loop.
        //I did mistake at first time.
        cout << "If you want to deposit then input (D) and if you want to withdraw then input (W): ";
        cin >> choice;
        //Don't use the assignment (=) operator here. Use the comparison (==) operator.
    if ( choice == 'D' || choice == 'd') {
        cout << "Enter the amount you want to deposit: ";
        cin >> deposit;
        balance += deposit;
        cout << "Your updated balance is: " << balance << endl;
    }
    //Don't use the assignment (=) operator here. Use the comparison (==) operator.
    else if (choice == 'W' || choice == 'w') {
        cout << "Enter the amount you want to withdraw: ";
        cin >> withdraw;
        if ( withdraw < balance ) {
            balance -= withdraw;
            cout << "Your updated balance is: " << balance << endl;
        }
        else {
            cout << "Insufficient funds! Please enter a smaller amount." << endl;
        }
    }
    else {
        cout << "Wrong input please try again!"<< endl;
    }
    cout << "Do you want to make another transaction? (Y/N): ";
    cin >> choice;
    } 
    //Don't use the assignment (=) operator here. Use the comparison (==) operator.
    while (choice == 'Y' || choice == 'y');

    cout << "Thank you for using our banking system. Have a great day!" <<endl;
}