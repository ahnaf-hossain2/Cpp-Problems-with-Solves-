//Prime numbers are natural numbers greater than 1 that have no positive divisors other than 1 and themselves.
//So, if n is not divisible by any number between 2 and n/2 then it will print prime.
//As for Composite number we know that if a number has any other factor than 1 and itself then is is a composite number.
//So for this reason I did't check 1 and n in this code.
//So it will check if it has any factor or not.
// If n is divisible by any number between 2 to n/2 then it will print composite and get out of the loop because of the break statement.

////// Normal way: 
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n;
// 	cout<<"Enter any number : ";
// 	cin>>n;

// 	if (n <= 1) {
//         cout << n << " is neither prime nor composite";
//         return 0;
//     }
    
//     bool flag = true; // If true then it will be a prime number.
// 	for (int i=2; i < (n/2); i++) {
// 		if (n%i == 0) {
// 			flag = false; // If it is divisible by any number then it will be a composite number.
// 			break;
// 		}
// 	}

//     if (flag == false) {
//         cout << n << "Is a composite Number";
//     }
//     else {
//         cout << n << " Is a Prime Number";
//     }
// }


//////Using function: 

#include <iostream>
using namespace std;

int Prime_Composite(int number) {
    for (int i = 2; i < ( number / 2) ; i++)
        {
            if ( number % i == 0)
            {
                return 0; // If it is divisible by any number then it will be a composite number.
            }
        }
        return 1; // If it is not divisible by any number then it will be a prime number.
}

int main () {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number == 0 || number == 1) {
        cout << "Neither prime or composite.";
    }

    int result = Prime_Composite(number);
    if (result == 1)
    {
        cout << "Prime Number";
    }

    else if (result == 0)
        cout << "Composite Number";
    else
        cout << "Nor composite nor prime.";
}