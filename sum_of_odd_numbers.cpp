/*
Write a program that calculates the sum of squares of all the odd numbers between 2 given numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int Number1, Number2, sum = 0;

    cout << "Enter two numbers: ";
    cin >> Number1 >> Number2;

    for (int i = Number1; i <= Number2; i++) {
        if (i % 2 != 0) {
            sum += (i * i);
        }
    }
    
    cout << "The sum of the squares of odd numbers between " << Number1 << " and " << Number2 << " is: " << sum << endl;
}
