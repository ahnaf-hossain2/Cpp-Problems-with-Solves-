// Write a program to print the sum of two numbers entered by the user by defining your own function.

#include <iostream>
using namespace std;

double sum(double a, double b) {
    return a + b;
}

int main() {
    cout << sum(5.3f, 5.89f); // use f after the number to use float numbers.
}