/*
Write a program in C++ to Reverse an Integer Number that will
only contain the odd digits.
Sample output:
Enter an Integer Number: 123456
Reverse of the Odd Digit Integer: 531
*/

#include <iostream>
using namespace std;
int main()
{
    int number,right_digit;
    cout << "Enter the numbers: ";
    cin>>number;

    while (number != 0 ) {
        right_digit = number % 10; //1234%10=4 , 123%10=3 .....
        if (right_digit % 2 != 0){
            cout << right_digit <<" ";
        }
        number = number / 10; //1234/10=123, 123/10=12 .....
    }
}
/*
Alternative way:

#include<iostream>
using namespace std;

int main() {
	int n,reverseNum=0,lastDigit;
	cout <<"Enter a number: ";
	cin >> n;
	while(n!=0) {
		lastDigit = n%10; //It gives the last digit
		n = n/10;
		reverseNum = reverseNum * 10 + lastDigit;
	}
	cout << reverseNum;
}
*/
