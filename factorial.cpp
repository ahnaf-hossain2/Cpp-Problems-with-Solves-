/* Calculate the Factorial of a number.
Sample Output:
Your input to calculate factorial: 5
Factorial of 5 is 120 */

//right code here
#include<iostream>
using namespace std;

int main()
{
    int i, n, fact=1; //if multiplied by zero then return will be zero so fact = 1

    cout<<"Enter a number : ";
    cin>>n;
    for (i=1; i<=n; i++) { //if multiplied by zero then return will be zero so fact = 1
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
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