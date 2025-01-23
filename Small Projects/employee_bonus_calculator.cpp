/*
A company decided to give a bonus of 5% to the employee if his/her year of service is more than 5 years.
Ask users for their salary and year of service and print the net bonus amount.

Problem Analysis:
This problem requires creating a program that:

Takes employee's salary as input
Takes employee's years of service as input
Checks if years of service are more than 5 years
Calculates a 5% bonus if the condition is met
Prints the net bonus amount

Key Considerations:

Input validation might be needed
Bonus is calculated only if years of service > 5
Bonus is 5% of the current salary
*/

#include <iostream>
using namespace std;

int main()
{
    int salary,service;
    cout<<"Enter salary amount: ";
    cin>>salary;
    cout<<"Enter year of service : ";
    cin>>service;

    double bonus=salary*0.05;
    if(service>5)
    {
        cout<<"He/She will get 5% bonus."<<"\n"<<"The bonus is:"<<bonus<<endl<<"Net amount: "<<(salary*1.0)+bonus;
    }
    else
    {
        cout<<"You will not get any discount.";
    }

}