/*  Write a program in C++ to take a year as input. Consider, User’s given 
year is smaller than the Current_Year = 2024. Now, print all 
the leap years observed from user’s given year to Current_Year. */

#include <iostream>
using namespace std;

int main() {
int year,i;
cout << "Enter a year: ";
cin >> year;

    for (i=year; i<2024; i++)
    {
        //The mistake is that I used (year % 100 != 0 && year % 4==0)||(year % 400==0) this method here.
        //But if my input year is a leap year then this condition will be always true m even if the value of i is not a leap year.
        //So, I have to use i here either the loop will not work properly. 
        if ((i % 100 != 0 && i % 4==0)||(i % 400==0))
        {
        cout<<i<<" Is a Leap Year"<<endl; 
        }
    }
}