// Define two functions to print the maximum and the minimum number respectively among three numbers entered by the user

#include <iostream>
using namespace std;

int MaxNumber(int x, int y, int z) {
    if (x > y && y > z) return x;
    if (y > x && x > z) return y;
    return z;
}
int MinNumber(int x, int y, int z) {
    if (x < y && y < z) return x;
    if (y < x && x < z) return y;
    return z;
}

int main () {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Maximum number: " << MaxNumber(num1, num2, num3) << endl;
    cout << "Minimum number: " << MinNumber(num1, num2, num3) << endl;
}