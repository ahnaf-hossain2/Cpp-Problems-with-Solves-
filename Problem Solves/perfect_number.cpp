/*
Write a program in C++ to take a positive number N as input and print 
all possible perfect numbers and total count for 1 to N. [Hint: a perfect
number is a positive integer that is equal to the sum of its positive 
proper divisors, that is, divisors ex-cluding the number itself. 
For instance, 6 has proper divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is 
a perfect number. The next perfect number is 28, 
since 1 + 2 + 4 + 7 + 14 = 28.]
Sample output:
Enter an Integer Number: 1000
Perfect Number from 1 to 1000 are:
6
28
496
Total Count of Perfect Number: 3
*/

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter An Integer Number: ";
    cin>>number;
    cout << "Perfect Number from 1 to " << number << " are:"<<endl;
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        //Set sum =0 here so that it changes for every number.
        int sum = 0;
        //Calculating the sum of divisors of i to find the perfect number.
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                //Equation for perfect number:
                sum = sum + j;
            }
        }
        //Checking if it is the perfect number or not...
        if (sum == i)
        {
            cout << i << endl;
            //if above code executes the count will increase by this :
            ++count;
        }
    }
    cout<<"Total count of perfect numbers: "<<count<<endl;
}