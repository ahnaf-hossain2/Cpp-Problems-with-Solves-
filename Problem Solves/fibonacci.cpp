// /* Find the Fibonacci series of N terms.
// Sample Output:
// Your input is: 9
// Fibonacci Series: 0 1 1 2 3 5 8 13 21
// Department */

// // corrected code here

// //With array
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "How many Fibonacci numbers : ";
//     cin >> n;
//     int a[n];// Declaring an a based array on the number of Fibonacci numbers n
//     a[0]=0;
//     a[1]=1;
//     for (int i = 2; i < n; i++) {
//         a[i] = a[i-1] + a[i-2];
//     }
//     cout << endl;

//     for (int i = 0; i < n; i++) {
// cout << a[i] << " ";
//     }
// }

// //Without array
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){

//     int n, first=0, second=1, fibo;

//     cout<<"Enter a Integer : ";
//     cin>>n;
//     cout<<"Fibonacci Series: ";

//     for(int count=0; count<n; count++)
//     {
//     if (count<=1)
// 	{
// 		fibo=count;
// 		cout<<fibo<<" ";
// 	}
// 	else {
// 		fibo=first+second;
// 		cout<<fibo<<" ";
// 		first=second;
// 		second=fibo;
// 	}
//     }

// }

// // Easy way and more readable

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     int n, first = 0, second = 1, count = 1, fibo;

//     cout << "Enter an integer: ";
//     cin >> n;
//     cout << "Fibonacci Series: ";

//     if (n >= 1) cout << first << " ";
//     if (n >= 2) cout << second << " ";

//     for (count = 3; count <=n; count++) {
//         fibo = first + second;
//         cout << fibo << " ";
//         first = second;
//         second = fibo;
//     }

//     cout << endl;
// }


////// using function : 

#include <iostream>
using namespace std;

void Fibonacci(int number) {
    int array[number];
    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i < number; ++i)
    {
        array[i] = array[i-1] + array[i-2];
    }

    for (int i = 0; i < number; ++i)
    {
        cout << array[i] << " ";
    }
}

int main () {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    Fibonacci(number);
}

// //wrong code here:
// /* #include <iostream>
// using namespace std;

// int main() {
//     int n, first = 0, second = 1, count = 0, fibo;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     for (count = 0; count <= n; count++) {
//     if (count <= 1) {
//         fibo = count;
//     } else {
//         fibo = first + second;
//         first = second;
//         second = fibo;
//     }
// }  

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){

//     int n, first=0, second=1, fibo;

//     cout<<"Enter a Integer : ";
//     cin>>n;
//     cout<<"Fibonacci Series: ";

//     for(int count=0; count<=n; count++)
//     {
//     if (count<=1)
// 	{
// 		fibo=count;
// 		cout<<fibo<<" ";
// 	}
// 	else {
// 		fibo=first+second;
// 		first=second;
// 		second=fibo;
// 	}
//     }
//     cout<<fibo;

// }  */