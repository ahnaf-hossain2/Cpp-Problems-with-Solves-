#include<iostream>
using namespace std;

int main() {
	int n,sum=0,lastDigit;
	cout <<"Enter a number: ";
	cin >> n;
	while(n!=0) {
		lastDigit = n%10; //It gives the last digit
		n = n/10;
		if (lastDigit%2 == 0)
		sum = sum + lastDigit;
	}
	cout << sum;
}
