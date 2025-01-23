/*
Write a program to print the absolute value of a number entered by the user. E.g.-
INPUT: 1 OUTPUT: 1
INPUT: -1 OUTPUT: 1

Problem Analysis:
This problem requires creating a program that:
Accepts a number as input from the user
Calculates the absolute value of the input number
Prints the absolute value
Works for both positive and negative numbers

Key Considerations:
Multiple methods can be used to calculate absolute value
Needs to handle integer inputs
Should work for zero, positive, and negative numbers

*/

#include<iostream>
using namespace std;

int main()
{

    int value;

    cout<<"Enter the value : ";
    cin>>value;

    if(value<0)
    {
        value=-value;

    }
    cout<<"Absolute value : "<<value;
}