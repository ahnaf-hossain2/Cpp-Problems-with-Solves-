/* Write a program that take two integer numbers and display the sum of even
numbers between these two input numbers.
First Number: 3
Second Number: 10
Sum of Even numbers between 3 and 10 is: 18 */

#include <iostream>
using namespace std;
int main()
{
    int number1, number2, i, sum=0;
    cout << "Enter first number: ";
    cin>>number1;
    cout<< "Enter second number: ";
    cin>>number2;

    for (i=number1+1; i<number2; i++) //mistake i>number1
    {
    if (i%2==0) {
		sum = sum+i; // sum + 1 is wrong you always make this mistake. It should be sum + i
    } 
    }
    cout << "Sum of even numbers between " << number1 << " and " << number2 << " is: " << sum << endl;
}