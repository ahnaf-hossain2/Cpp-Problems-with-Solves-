/*
A school has the following rules for the grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask the user to enter marks and print the corresponding grade.

Problem Analysis:
This problem requires creating a program that:
Accepts student's marks as input
Validates the input marks
Determines the grade based on predefined mark ranges
Prints the corresponding grade to the user

Key Considerations:
Input validation might be needed to ensure marks are within a valid range (0-100)
Use of if-else or switch statement for grade determination
Clear and descriptive output of the grade
*/

#include <iostream>
using namespace std;

int main()
{
    double num;

    cout<<" Enter the mark : ";
    cin>>num;
    if(0<num && num<100)
    {
        if(80<num && num<=100)
        {
            cout<<"Grade = A"<<endl;
        }
        else if(60<=num && num<=80)
        {
            cout<<"Grade = B"<<endl;
        }
        else if(50<=num && num<60)
        {
            cout<<"Grade = C"<<endl;
        }
        else if(45<=num && num<50)
        {
            cout<<"Grade = D"<<endl;
        }
        else if(25<=num && num<45)
        {
            cout<<"Grade = E"<<endl;
        }
        else
        {
            cout<<"Grade = F"<<endl;
        }
    }
    return 0;
}