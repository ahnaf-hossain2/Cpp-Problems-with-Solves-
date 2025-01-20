/*
Write a C++ program to calculate and print the combination and permutation of two numbers n and r.
The combination (nCr) is calculated as n! / (r! * (n-r)!) and the permutation (nPr) is calculated as n! / (n-r)!
*/
#include<iostream>
#include<cmath>
using namespace std;

int factorial(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    cout << "Combination: " << a/(b*c) << endl;
    cout << "Permutation: " << a/c;
    return 0;
}
