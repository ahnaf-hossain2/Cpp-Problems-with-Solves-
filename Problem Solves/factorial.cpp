/* Calculate the Factorial of a number.
Sample Output:
Your input to calculate factorial: 5
Factorial of 5 is 120 */

//right code here
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, n, fact=1; //if multiplied by zero then return will be zero so fact = 1

//     cout<<"Enter a number : ";
//     cin>>n;
//     for (i=1; i<=n; i++) { //if multiplied by zero then return will be zero so fact = 1
//         fact = fact * i;
//     }
//     cout<<"Factorial of "<<n<<" is "<<fact<<endl;
// }

// another way to do it:


// #include <iostream>
// using namespace std;

// // Function to calculate the factorial of a number using recursion.
// // 'n' is the number for which the factorial is calculated.
// int fact(int n) {
//     // Base case: If 'n' is 1, return 1.
//     if (n == 1) {
//         return 1;
//     }
//     // Recursive case: Multiply 'n' by the factorial of 'n-1'.
//     else {
//         return n * fact(n - 1);
//     }
// }

// int main() {
//     // Calculate the factorial of 5.
//     int factorial = fact(5);

//     // Output the result.
//     cout << factorial << endl;
// }



// Doing with function:

#include <iostream>
using namespace std;

void Factorial(int number) 
{
    int Fact = 1;
    if ( number ==1 ) {
        cout << "Factorial of " << number << " is " << 1 << endl;
    }
    else if ( number == 0 ) {
        cout << "Factorial of " << number << " is " << 0 << endl;
    }
    if (number > 1) {
        for (int i = 1; i <= number; ++i)
    {
        Fact *= i;
    }
    cout << "Factorial of " << number << " is " << Fact << endl;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    Factorial(number);
}

//Wrong code here :
/*#include<iostream>
using namespace std;

int main()
{
  int i,n,fact=1;
  cout<<"Enter the number: ";
  cin>>n;
  
  for (i=1; n<=i; i++) {
    fact = fact * i;
  }
  cout<<"Thefact is :"<<fact;
}   */