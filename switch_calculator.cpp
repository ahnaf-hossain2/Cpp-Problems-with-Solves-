/*
Write a program to build a calculator using switch case. 
Sample input :
5 + 5 
5 % 2
4 - 2
5 ^ 2
2 ^ 10
5 * 4

Sample output :
10
1
2
25
1024
10
*/

#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int number1, number2;
    char character;
    cout << "Enter the calculations you want to do: "<< endl;

    for (int i = 0; i <6; ++i)
    {
        cin >> number1 >> character >> number2;
            switch (character)
            {
            case '+':
                cout <<"= " << number1 + number2 << endl;
                break;
            case '%':
                cout <<"= " << number1 % number2 << endl;
                break;
            case '-':
                cout <<"= " << number1 - number2 << endl;
                break;
            case '^':
                cout <<"= " <<  pow (number1, number2)<< endl;
                break;
            case '*':
                cout <<"= " << number1 * number2 << endl;
                break;
            }

        }
    }
