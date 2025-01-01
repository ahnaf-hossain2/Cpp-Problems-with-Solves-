#include<iostream>
using namespace std;

// Here I made a function with 2 parameters a and b
void sum (int a, int b)
{
    cout << "Sum: " << a + b << endl;
}

// Here I made the same function with 3 parameters a, b, and c
// this is function overloading.
// if we made this function with 2 parameters then there will be an error.
void sum (int a, int b, int c)
{
    cout << "Sum: " << a + b + c << endl;
}

// but if I change the data type of the same function then it will work.
void sum (double a, double b)
{
    cout << "Sum: " << a + b << endl;
}

int main()
{
    sum(5, 7);
    sum(5, 7, 9);
    sum(3.48, 5.00);
    // but for float you need to code it like this:
    // sum(3.48f, 5.00f);
    // either the code will not work

}
