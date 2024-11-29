/*Take a character as input through the keyboard. Write a program to find out whether
the gender is Male or Female. (Using If-else)
Inputs: take input 'M' or 'm' for male and take input 'F' or 'f' for female */


#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any M or F --> ";
    cin>>ch;


    switch(ch)
    {
    case'M':
        cout<<"Male";
        break;
        case'F':
        cout<<"Female";
        break;
    default:
        cout<<"No other Gender is Allowed Here";
        }
}