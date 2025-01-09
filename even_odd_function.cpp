// Define a program to find out whether a given number is even or odd.

#include <iostream>
using namespace std;

int EvenOdd(int number) {
    if (number % 2 == 0) {
        return 0; // 0 is true in boolean which is Even
    } else {
        return 1; // 1 is false in boolean which is Odd
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = EvenOdd(num);
    if (result == 0) {
        cout << num << " is even." << endl;
    } else { 
        cout << num << " is odd." << endl;
    }
}