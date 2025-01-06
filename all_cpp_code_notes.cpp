#include<iostream>
using namespace std;

int main()
{
cout<< "Ahnaf Hossain" ;
return 0;
}
-----------------------------------------same 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
    {
    cout<< "Ahnaf Hossain" ;
    getch();
    }
-----------------------------------------
#include<iostream>
using namespace std;

int main()
{
  // (//)-- this thing is called single line comment
/* (/*)-- this thing is called multiple line comment.
You can keep comment in multiple lines like this.
  Then you have to end it with this---> */
    
  //cout<< "MD Ahnaf Hossain" <<endl <<"01965572506" <<endl <<"Lives In dhaka" <<endl <<"Reads computer science in AIUB" ; Can be used like this also. Same result.
    cout<< "MD Ahnaf Hossain \n01965572506 \nLives In dhaka \nReads computer science in AIUB" ;
    return 0;
}
------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int num1=15,num2=30;
    int sum = num1 + num2;
    cout<< " The Sum is -> "<<sum;
    return 0;

}

------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int num1=5,num2=10;
    cout<<num1 <<endl <<num2;
    return 0;
}
------
#include<iostream>
using namespace std;

int main()
{
    int num1=5,num2=10;
    char ch='A';
    cout<<"Number 1 = "<<num1 <<endl <<"Number 2 = "<<num2 <<endl <<"Character = "<<ch;
    return 0;
}

------------------------------------------
#include<iostream>
using namespace std;

int main()
{
/*you have to keep at least one number extra for null also you can increas it. As example there are 13 characters so
   you have to type 14 or you can type 20 */

    char name[14] = "Ahnaf Hossain";
    cout<< "Name = " <<name;
    return 0;
}
------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a Number : ";
    cin>> num;
    cout<<"The number is = "<<num;
    return 0;
}
------
#include<iostream>
using namespace std;

int main()
{
    char name[20];

    cout<< "Enter your Name : ";
    cin>> name;

    cout<<"Welcome "<<name;
    return 0;
}
-------
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    /*it will show full name*/
	char name[30];
    cout<< "Enter your name -->";
    gets(name);
    cout<<"Wellcome! "<<name;
    return 0;
}

------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int num1,num2,sum;
    cout<< "Give your numbers";
    cin>> num1>>num2;
    sum = num1+num2;
    cout<<sum;
    return 0;
}
------------------------------------------..........
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter numbers--> ";
    cin>> num1 >> num2;

    int sum=num1+num2;
    cout<< "Sum is : "<<sum;
    cout<<endl;

    int sub=num1-num2;
    cout<< "Substraction is : "<<sub;
    cout<<endl;

    int mul=num1*num2;
    cout<< "Multification is : "<<mul;
    cout<<endl;

    double div=(float)num1/num2; //This is called typecasting
    cout<< "Division is : "<<div;
    cout<<endl;

    int rem=num1%num2;
    cout<< "Remainder is : "<<rem;
    cout<<endl;
    return 0;
}
------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    float num1,num2;
    cout<<"Enter numbers--> ";
    cin>> num1 >> num2;

    cout<<showpoint;

    float sum=num1+num2;
    cout<< "Sum is : "<<sum;
    cout<<endl;

    cout<<noshowpoint;
    float sub=num1-num2;
    cout<< "Substraction is : "<<sub;
    cout<<endl;

    float mul=num1*num2;
    cout<< "Multification is : "<<mul;
    cout<<endl;

    float div=num1/num2; //This is called typecasting
    cout<< "Division is : "<<div;
    cout<<endl;

    /*int rem=num1%num2;
    cout<< "Remainder is : "<<rem;
    cout<<endl;*/ //float don't work in remainder
    return 0;
}
------------------------------------------
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float num1,num2;
    cout<<"Enter numbers--> ";
    cin>> num1 >> num2;

    cout<<showpoint;
    cout<<fixed;//it will show only fixed numbers after dot
    cout<<setprecision(2);//it will show total (n) numbers without fixed

    float sum=num1+num2;
    cout<<setw(20)<< "Sum is : "<<sum;
    cout<<endl;

    cout<<noshowpoint;
    float sub=num1-num2;
    cout<<setw(20)<< "Substraction is : "<<sub;
    cout<<endl;

    float mul=num1*num2;
    cout<<setw(20)<< "Multification is : "<<mul;
    cout<<endl;

    float div=num1/num2; //This is called typecasting
    cout<<setw(20)<< "Division is : "<<div;
    cout<<endl;

    /*int rem=num1%num2;
    cout<< "Remainder is : "<<rem;
    cout<<endl;*/ //float don't work in remainder
    return 0;
}

------------------------------------------
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double base,height,area;

    cout<<"Enter Base-->";
    cin>>base;

    cout<<"Enter Height-->";
    cin>>height;

    area= (double)1/2 * base * height;//or you can just use dot like 1.0/2 oe just write the dot number 0.5 etc

    cout<<"Area of triangle = "<<area;

    return 0;
}
------------------------------------------

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double farn,cels;

    cout<<"Enter Celsius: ";
    cin>>cels;

    farn= 1.8* cels+32;
    cout<<farn;
    return 0;
}
------------------------------------------
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x=3,y=2;
    x+=y;  //x+=y = x+y
    cout<<x<<endl;
    x-=y;
    cout<<x<<endl;
    x*=y;
    cout<<x<<endl;
    x%=y;
    cout<<x<<endl;
    return 0;
}

------------------------------------------
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x=5;

    int y= ++x;

    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
---------
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x=5;

    int y= ++x;

    cout<<y<<endl;

    y= --x;
    cout<<y<<endl;
    return 0;
}
------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int a=32,b=12,c;

    c=a&b;
    cout<<c<<endl;

    c=a|b;
    cout<<c<<endl;

    c=a^b;
    cout<<c<<endl;
    return 0;
}
------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int a=32,b=12,c;

    c=b<<4;
    cout<<c<<endl;
    return 0;
}
------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    int c= sizeof(name); //to know bit size
    cout<<c;
    return 0;
}
------------------------------------------........ 
    if(condition){
    //code to be executed if the condition is true
}
else {
    //code to be executed if the condition is false
}

-----------

#include <bits/stdc++.h>
using namespace std;

int main() {

    int age;
    cin >> age;
    int voting_age = 18;
    
    if (age >= voting_age) {
        cout << "Old enough to vote!";
    } else {
        cout << "Not old enough to vote.";
    }
}


--------------------- Short hand if-else  

// variable = (condition) ? expressionTrue : expressionFalse;

int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;

-------------


#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any Integer number ----> ";
    cin>>num;

    if(num>0)
    {
        cout<<"Positive ";
    }

    if(num<0)
    {
        cout<<"Negative ";
    }
    if(num==0)
    {
        cout<<"Zero ";
    }

    cout<<"Completed";
    return 0;
}

------------
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any Integer number ----> ";
    cin>>num;

    if(num>0)
    {
        cout<<"Positive ";
    }

    else if(num<0)
    {
        cout<<"Negative ";
    }
    else if(num==0)
    {
        cout<<"Zero ";
    }

    else
    {
        cout<<"Unfinished";
    }
    getch();
}

------------------------------------------
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any Integer number ----> ";
    cin>>num;

    if(num%2==0)
    {
        cout<<"Even Number";
    }

    else
    {
        cout<<" Odd Number";
    }
    getch();
}

------------------------------------------
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any Integer number ----> ";
    cin>>num;

    if(num<0)
    {
        cout<<(-num);
    }

    else
    {
        cout<<num;
    }
    getch();
}

------------------------------------------
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any Integer number ----> ";
    cin>>num;

    if(num>100)
    {
        cout<<"Invalid Number";
    }

    else if (num<0)
    {
        cout<<"Invalid Number";
    }
    else if (num>=80)
    {
        cout<<"A+";
    }
    else if (num>=70)
    {
        cout<<"A";
    }
    else if (num>=60)
    {
        cout<<"B";
    }
    else if (num>=50)
    {
        cout<<"c";
    }
    else
    {90
        cout<<"Fail"<<endl;
        cout<<"Better Luck Next Time";
    }
    getch();
}

------------------------------------------
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=13,y=19;

    if(x>15&&y<2)
    {
        cout<<"Yes";
    }

    if(x>11&&y<21)
    {
        cout<<"Yes";
    }
    getch();
}

------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any letter--> ";
    cin>>ch;
    ch= tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        cout<<"Vowel";
    else
        cout<<"Consonant";
}

------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;

    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
        cout<<num1;

    else if(num2>num1 && num2>num3)
        cout<<num2;
    else
        cout<<num3;
}

------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<"Enter any year: ";
    cin>>year;

    if(year%4==0 && year%100!=0 || year%400==0)
        cout<<"Leap year";

    else
        cout<<"Not leap year ";
}

------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any Integer number ----> ";
    cin>>num;

    if(num>32)
    {
        if (num<0)
        {
            cout<<"Invalid Number";
        }
        else if (num>=80)
        {
            cout<<"A+";
        }
        else if (num>=70)
        {
            cout<<"A";
        }
        else if (num>=60)
        {
            cout<<"B";
        }
        else if (num>=50)
        {
            cout<<"c";
        }
    }

    else
        cout<<"Fail"<<endl;
}

------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int num1=20,num2=30;

    int max= (num1>num2) ? num1 : num2;
    cout<<max;
}

-------
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any integer: ";
    cin>>num;
    (num%2==0) ? cout<<num<<" is even" : cout<<num<<" is odd";
}

------------------------------------------
------------------------------------------
------------------------------------------

#include<iostream>
using namespace std;

int main()
{
    int digit;
    cout<<"Enter any digit--> ";
    cin>>digit;

    switch(digit)
    {
    case 0:
        cout<<"Zero";
        break;
    case 1:
        cout<<"One";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    case 5:
        cout<<"Five";
        break;
    case 6:
        cout<<"Six";
        break;
    case 7:
        cout<<"Seven";
        break;
    case 8:
        cout<<"Eight";
        break;
    case 9:
        cout<<"Nine";
        break;

        default:
        cout<<"Not a digit";
    }
}

----------
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any Letter--> ";
    cin>>ch;                        //Be aware of semicolons (;)
    ch=tolower(ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel";
        break;

    default:
        cout<<"Consonent";
    }
}

------------------------------------------
------------------------------------------
------------------------------------------

#include <iostream>
using namespace std;


int main()
{
	for( int i=1; i<=100; i++ )
	{
		cout<<i<<endl; //cout<<"Bangladesh"<<endl;------> this will print bangladesh 100 times.
	}
}

------
#include <iostream>
using namespace std;


int main()
{
	int i=1;
	while( i<=10)
	{
		cout<<i<<endl;
		i++;
	}

	cout<<"The End";
}
------
--------------------------------------------- Reverse number ----------

#include <iostream>
using namespace std;

int main() {
  // A variable with some specific numbers
    int numbers = 12345;

  // A variable to store the reversed number
    int revNumbers = 0;

  // Reverse and reorder the numbers
    while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumbers'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << "\n";

    return 0;
}

--------------

#include <iostream>
using namespace std;


int main()
{
	int i=1; //i=5;

	do{
		cout<<"Bangladesh"<<endl;
		i++;    //i--
	}while(i<=5);   //while(i>=1)

	cout<<"The End";
}

---------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------- Multification Table 
#include <iostream>
using namespace std;


int main()
{
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1; i<=10; i++)
	{
		cout<<num<<" X "<<i<<" = "<<num*i<<endl;
	}

}

---------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------- 1+2+3+4+........+n series
#include <iostream>
using namespace std;


int main()
{
	int sum=0,n;

	cout<<"Enter the last number : ";
	cin>>n;

	for(int i=1; i<=n; i++) // or u can use i=i+1 instead of i++
	{
		sum=sum+i;
	}
	cout<<sum;

}

---------                                        1^2 + 2^2 + 3^2 + ..........+n^2
#include <iostream>
#include <cmath>  // can also use <math.h> but its not too good as <cmath>
using namespace std;


int main()
{
	int sum=0,n;

	cout<<"Enter the last number : ";
	cin>>n;

	for(int i=1; i<=n; i++) // or u can use i=i+1 instead of i++
	{
		sum=sum+ pow(i,2);
	}
	cout<<sum;

}
--------------------------------------------------------------------- Nested loop to generate a pattern 
#include <iostream>
#include<cmath>
using namespace std;


int main()
{
	int n,row,col;

	cout<<"Enter the a number : ";
	cin>>n;
	
	//Using nested loop to generate a pattern
	for(row=1; row<=n; row++) //outer loop
	{
		for(col=1; col<=row; col++) //Inner loop
		{
			cout<<" "<<col;
		}
		cout<<endl;
	}
}

------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Square root of 64 is: " << sqrt(64) << "\n";              \\Square root of 64 is: 8
    cout << "Round 2.6 to the nearest integer: " << round(2.6) << "\n";  \\Round 2.6 to the nearest integer: 3
    cout << "The natural logarithm of 2 is: " <<log(2) << "\n";        \\The natural logarithm of 2 is: 0.693147
    return 0;
}

------------------------------------------
------------------------------------------

FOR EACH LOOP :

#include <iostream>
using namespace std;

int main() {
  // Create an array of integers
    int myNumbers[5] = {10, 20, 30, 40, 50};
    
  // Loop through integers
    for (int i : myNumbers) {
    cout << i << "\n";
    }
    return 0;
}

------------------------------------------
------------------------------------------

Array :

#include <iostream>
using namespace std;

int main() {
  // Declare and initialize an array of integers with 5 elements
  // index of array starts with 0. So if the size of the array is 5, then the array will contain 5 elements.
  //That means its index will start from 0 and end in 4. 
  //0 to 4 have 5 characters.
    
    int marks[5]={0,1,2,3,4};
    
  // Print the elements of the array
    cout<<marks[0]<<" ";
    cout<<marks[1]<<" ";
    cout<<marks[2]<<" ";
    cout<<marks[3]<<" ";
    cout<<marks[4]<<" ";

}

-----------

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    // update your code below this line
    if (N>=3) {
    for (int i=0; i<N; ++i) {
	cin >> arr[i];
    }
    cout<< arr[0] * arr[2];
    }

    return 0;
}


-----------

#include <iostream>
using namespace std;

int main() {
  // Declare and initialize an array of integers with 5 elements
  // index of array starts with 0. So if the size of the array is 5, then the array will contain 5 elements.
  //That means its index will start from 0 and end in 4. 
  //0 to 4 have 5 characters.

int marks[5]={0,1,2,3,4};

  // Doing the same thing with loops 
  //Here i is the index number of the array.
  // as the size of the array is 5, so we will set the value of i from 0 to 4 for the loop below

    for (int i=0; i<=4; i++) {
    cout<< marks[i]<<" ";
    }

}
------------------------------------------

2D ARRAY:

data_type array_name[row_size][col_size];

#include <iostream>
using namespace std;

int main() {
    // Initialize the matrix
    int matrix[3][4] = {
        {1, 6, 7, 9},
        {2, 4, 8, 5},
        {3, 1, 9, 4}
    };

    for (int row = 0; row < 3; ++row)
    {
        for (int col = 0; col < 4; ++col) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

------

#include <iostream>
using namespace std;

int main() {
    // Initialize the matrix
    int matrix[3][4];

    cout<<"Enter elements for the matrix: "<<endl;
    for (int row = 0; row < 3; ++row)
    {
        for (int col = 0; col < 4; ++col) {
		cout << "A [" << row << "][" << col << "] = ";
            cin>>  matrix[row][col] ;
        }
    }
    cout << endl;

    for (int row = 0; row < 3; ++row)
    {
        for (int col = 0; col < 4; ++col) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

------
3D ARRAY :

#include <iostream>
using namespace std;

int main() {
string letters[3][2][2] = {
    {
    { "A", "B" },
    { "C", "D" }
    },
    {
    { "E", "F" },
    { "G", "H" }
    },
    {
    { "I", "J" },
    { "K", "L" }
    }
};

  for (int i = 0; i < 3; i++) //this creates 3 - 2D arrays.
{
    for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << "\n";
        }
    }
}
return 0;
}

or, 

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k];
    }
    cout<<endl;
    }
    cout << endl;
}
------------------------------------------

Pointer:

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    //give a * mark before the variable to declare a pointer
    int *p;

    p = &x;

    cout << x << endl;
    //give & in front of x to get its address
    cout << &x << endl;
    cout << p <<endl;//this will print the address of x
    cout << *p <<endl;
}

------ Find sum with pointer

#include <iostream>
using namespace std;

int main() {
    int num1 = 5, num2 =10;
    int *p1, *p2;

    //give & in front of the variable to save the address of that variable in the pointer.
    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;

    cout << sum;
}

------
string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";

------------------------------------------
Functions:

ReturnType FucntionName (parameter list)
{
//function body
}

--------

#include <iostream> 
using namespace std;

void addNumbers(){
    int num1 = 5;
    int num2 = 7;
    int result;
    result = num1+num2;
    cout<< "Addition is:" << result<<endl;
    
}
int main() {
    addNumbers();
}

--------

#include <iostream>
using namespace std;

//made a function for addition
//also this can be inside the main function also outside the main function
//but it must be above of the called function
//Either a prototype must be created to run the code.

void addition(int a, int b)
{
	int sum = a+b;
	cout<<"Sum = "<<sum<<endl;
}

int main()
{
    //calling that addition function here that I made earlier
	  addition(10,20);//it will show the addition of 10 and 20
}

------------ Creating a prototype

#include <iostream>
using namespace std;

//made  prototype for the functions
void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main()
{
	  cout<<"All functions :"<<endl;
	  addition(10,20);
	  subtraction(20,10);
	  multiplication(5,6);
	  division(50,5);
}

//now I can work on this functions outside and below the main function
//because I created a prototype above

void addition(int a, int b)
{
	int sum = a+b;
	cout<<"Sum = "<<sum<<endl;
}

void subtraction(int a, int b)
{
	int result = a-b;
	cout<<"Subtraction = "<<result<<endl;
}

void multiplication(int a, int b)
{
	int result = a*b;
	cout<<"Multiplication = "<<result<<endl;
}

void division(int a, int b)
{
	float result = (float)a/b;
	cout<<"Division = "<<result<<endl;
}

------------------ return value ------------------

int myFunction(int x) {
  return 5 + x; 
  // Here the function returns the calue of 5 plus the parameter 'X'
}

int main() {
  // In the main function, we call 'myFunction' with the argument 3 
  // 'myFunction(3)' will return 5 + 3, which is 8
  cout << myFunction(3);
  **// Also I can't directly call myFunction(3)
  **// I have to output the value of it with cout.
  
  return 0; // The main function returns 0, indicating that the program ended successfully
}

// Outputs 8 (5 + 3)

-------------

#include <iostream>
using namespace std;

//to get return we can't use void data type
int addition(int, int);

int main()
{
	  cout << addition(10,20);

	  /*
	  it can be done like this also
	  int sum = addition(10,20);
	  cout <<"Sum = "<<sum<<endl;
	  */
}

int addition(int a, int b)
{
	int sum = a+b;
	return sum;
}

---------------------Parameters 

//Default Parameter

#include<iostream>
using namespace std;

// Here I directly set the default value of a and b parameter.
void display( int a=10, int b=20) {
    cout << a << endl;
    cout << b << endl;
}

int main() {
    // Calling the display function with one argument
    display(50);
    // the output will be:
    // 50
    // 20
    // because I changed the value of the 'a' parameter, and didn't provide a value for 'b',
    // so 'b' retains its default value of 20.
    // for example if I type display(35,90) then the output will be 35 and 90.

    // Calling the display function with both arguments
    display(35, 90);
    // the output will be:
    // 35
    // 90
    // because I provided both values for 'a' and 'b'.
}

--------Finding square

#include<iostream>
using namespace std;

void square( int n ) {
    int result = n * n;
    cout << "square of " << n << " = "<< result<< endl;
}

int main() {
    square(7);
}

---------------- Random number generator-------------------

// habe to use stdlib.h header file and rand() function.

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int n;
    cout << "How much random number do you want to generate?"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int randomnumber = rand();
        cout << "Random Number = " << randomnumber << endl;
    }
}
-------------------Number Guessing game----------------------

// In this game you have to guess a number between 1 to 5

// write a C++ program that allows the user to guess a number between 1 and 5 and provides an option to play again after each guess?
// You can modify the code below to make it a guessing number between any number.

#include<iostream>
#include<cstdlib> // Include the C standard library for rand() and srand()
#include<ctime> // Include the C standard library for time() to random number generator with the current time
// Otherwise, the random number will always be the same as we run the program everytime.

using namespace std;

int main ()
{
    int guessthenumber, randomnumber;

    // Seed the random number generator with the current time.
    // This ensures that the random number generated will be different each time the program is run.
    // time(0) returns the current time in seconds since the unix epoch.
    // the measurement starts from a specific date, known as the unix epoch.
    // the date is january 1,1970.
    /*
    So, when we call time(0), it returns the number of seconds that have passed since
    January 1, 1970, up to the current time. This value changes every second as time passes.
    */
    srand(time(0));
    // Here 1 means boolean true.
    // So the loop will continue until I decide to quite myself.
    while (1)
    {
        cout << "Enter your guessing number between 1 to 5: ";
        cin >> guessthenumber;
        randomnumber = ( rand() % 5 ) + 1;

        if ( guessthenumber == randomnumber )
        {
            cout << "You won !"<< endl << endl;
        }
        else
        {
            cout << "You loose! the correct number is " << randomnumber << "." << endl << endl;
        }

        char choice;
        cout << "Do you want to play again? (Y/N): ";
        cin >> choice;
        if (choice == 'N' || choice == 'n')
        {
            break;
        }
    }
}

----------------------Function overloading---------------------

// Multiple functions can have the same name as long as the number 
and/or type of parameters are different.

#include<iostream>
using namespace std;

// Here I made a function with 2 parameters a and b
void sum (int a, int b)
{
    cout << "Sum: " << a + b << endl;
}

// Here I made the same function with 3 parameters a, b, and c
// this is function overloading.
// if we made this function with 2 parameters then there will be an error.
void sum (int a, int b, int c)
{
    cout << "Sum: " << a + b + c << endl;
}

// but if I change the data type of the same function then it will work.
void sum (double a, double b)
{
    cout << "Sum: " << a + b << endl;
}

int main()
{
    sum(5, 7);
    sum(5, 7, 9);
    sum(3.48, 5.00);
    // but for float you need to code it like this:
    // sum(3.48f, 5.00f);
    // either the code will not work

}

------------------------Function Scope---------------------------

// More details in w3schools toogle section

#include <iostream>
using namespace std;

int x = 10; // Global

int main() {
	int x = 50;
	cout << x << endl; // It will print the local value
	cout << ::x << endl; // It will print the global value
	
	:: x = 80; // It will change the global variable value
	cout << ::x << endl;
}


--------------------Passing Array to function----------------------

#include<iostream>
using namespace std;

// Function to display the elements of the array.
// 'num' is the array containing the elements.
// 'arr_size' is the total number of elements in the array.
void display(int num[], int arr_size) {
    for (int i = 0; i < arr_size; ++i) {
        cout << num[i] << " "; // Print each element of the array followed by a space.
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Initialize the array with 5 elements.
    
    // Call the display function to print the array elements.
    // Pass 'arr' which is the array and '5' which is the size of the array.
    display(arr, 5);
}

--------------------Recursion----------------------

#include <iostream>
using namespace std;

// Function to calculate the factorial of a number using recursion.
// 'n' is the number for which the factorial is calculated.
int fact(int n) {
    // Base case: If 'n' is 1, return 1.
    if (n == 1) {
        return 1;
    }
    // Recursive case: Multiply 'n' by the factorial of 'n-1'.
    else {
        return n * fact(n - 1);
    }
}

int main() {
    // Calculate the factorial of 5.
    int factorial = fact(5);

    // Output the result.
    cout << factorial << endl;
}

--------------------Function pass by Value or Reference----------------------

#include <iostream>
using namespace std;

// Function to demonstrate passing by value.
// 'num' is a local copy of the passed argument and changes won't affect the original variable.
void display_normal(int num) {
    num = 20; // Modify the local variable.
}

// Function to demonstrate passing by reference.
// 'num' is a pointer to the original variable, so changes will affect the original variable.
void display_changed(int *num) {
    *num = 20; // Modify the original variable through the pointer.
}

int main() {
    int x = 10; // Initialize variable 'x' with value 10.
    cout << "Before calling the Function x = " << x << endl; // Print the initial value of 'x'.

    display_normal(x); // Call the function with 'x' by value.
    cout << "After calling the Function x = " << x << endl; // Print the value of 'x' after calling display_normal.

    display_changed(&x); // Call the function with 'x' by reference (pass the address of 'x').
    cout << "After calling the Function &x = " << x << endl; // Print the value of 'x' after calling display_changed.
}

----------------------------Class Start : -------------------

--------------------OOP = Object Oriented Programming----------------------

Features: 
Class 
Object
Abstraction
Polymorphism
Encapsulation
Inheritance
-------------------------------------

#include <iostream>
using namespace std;

// Defining a class named 'student' to represent a student's details
class student
{
public : // Public access specifier allows access from outside the class
    int id; // Variable to store the student's ID
    double gpa; // Variable to store the student's CG
}; // Must give the semicolon ';' here to end the class deficition

int main()
{
    // Creating two instances (objects) of the 'student' class
    student Rohim, Korim;

    // Assigning values to the member variables of the object 'Rohim'
    // Using the dot operator (.) to access and modify 'id' and 'gpa' of the object 'Rohim'
    Rohim.id = 245730;
    Korim.id = 293842;

    // Assigning values to the member variables of the object 'Korim'
    // Using the dot operator (.) to access and modify 'id' and 'gpa' of the object 'Korim'
    Rohim.gpa =3.98;
    Korim.gpa =3.87;

    cout << "Name: Rohim\nID: " << Rohim.id << endl << "CG: " << Rohim.gpa << endl << endl ;
    cout << "Name: Korim\nID: " << Korim.id << endl << "CG: " << Korim.gpa << endl;
}

--------------------Adding Function In Class----------------------

#include <iostream>
using namespace std;

class student
{
public :
    int id;
    double gpa;
    
    // Creating a function to display students details.
	void display() {
		cout << id << endl << "CG: " << gpa << endl << endl ;
	}
};

int main()
{

    student Rohim, Korim;

    Rohim.id = 245730;
    Korim.id = 293842;

    Rohim.gpa =3.98;
    Korim.gpa =3.87;

    cout << "Name: Rohim\nID: " ;
    Rohim.display(); // Calling the display function using the (.) operator.

    cout << "Name: Korim\nID: " ;
    Korim.display();
}

--------------------Parametrized function inside class----------------------

#include <iostream>
using namespace std;

class student
{
public :
    int id;
    double gpa;
    
    // added a new function to assign values to 'id' & 'gpa'
    void setValue(int x, double y) {
		id = x; // assigns the parameter x to 'id' 
		gpa = y; // assigns the parameter y to 'gpa' 
    }
    
	void display() {
		cout << id << endl << "CG: " << gpa << endl << endl ;
	}
};

int main()
{

    student Rohim, Korim;

    Rohim.setValue(245730, 3.98); // Sets Rohim's ID and GPA using 'setValue'
    Korim.setValue(293842, 3.87); // Sets Korim's ID and GPA using 'setValue'
    
    cout << "Name: Rohim\nID: " ;
    Rohim.display();

    cout << "Name: Korim\nID: " ;
    Korim.display();
}


--------------------Constructor----------------------



--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------
--------------------|----------------------