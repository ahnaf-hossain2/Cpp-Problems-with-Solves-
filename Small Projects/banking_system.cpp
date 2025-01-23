#include <iostream>
using namespace std;

class BankAccount {
    private:
        int account_number;
        string holder_name;
        double balance;
    public:
    BankAccount (int n, string h, double b) {
        account_number = n;
        holder_name = h;
        balance = b;
    }
    void deposit(double amount) {
        if (amount < 1) {
            cout << "Invalid amount" << endl;
            return;
        } else {
            balance += amount;
        }
    }
    void withdraw(double amount) {
        if (amount < 1) {
            cout << "Invalid amount" << endl;
            return;
        } else if (amount > balance) {
            cout << "Insufficient balance" << endl;
            return;
        } else {
            balance -= amount;
        }
    }
    void display() {
        cout << "Account Number: " << account_number << endl;
        cout << "Holder Name: " << holder_name << endl;
        cout << "Balance: " << balance << endl;
    }
    ~BankAccount() {
        cout << "Account for " << holder_name << " with account number " << account_number << " closed successfully" << endl;
    }
};

int main() {
    int account_number, choice;
    double initial_balance;
    string holder_name;
    cout << "Enter Account Number: ";
    cin >> account_number;
    cout << "Enter Holder Name: ";
    cin >> holder_name;
    cout << "Enter Initial Balance: ";
    cin >> initial_balance;
    cout << "Account created for " << holder_name << " with account number " << account_number << " and initial balance " << initial_balance << endl;
    BankAccount account(account_number, holder_name, initial_balance);
    while (true) { // Here I have used an infinite loop to keep the program running until the user chooses to exit
    cout << "Choose an option: " << endl;
    cout << "1. Deposit Money" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Display Account Details" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double depositAmount;
            cout << "Enter amount to deposit: ";
            cin >> depositAmount;
            account.deposit(depositAmount);
            account.display();
            break;
        }
        case 2: {
            double withdrawAmount;
            cout << "Enter amount to withdraw: ";
            cin >> withdrawAmount;
            account.withdraw(withdrawAmount);
            account.display();
            break;
        }
        case 3: {
            account.display();
            break;
        }
        case 4: {
            return 0; // Here by returning 0 the program will terminate
        }
        default: {
            cout << "Invalid choice" << endl;
        }
    }
    }
}
