// Define a function that returns the product of two numbers entered by the user.

#include <iostream>
using namespace std;

double Product(double a, double b) {
    return a * b;
}

int main() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "The product of " << num1 << " and " << num2 << " is: " << Product(num1, num2) << endl;
}