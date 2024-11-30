/*
Write a program that calculates the attendance percentage of a student and determines whether the student is eligible to sit for the exam. The program should:

1.Take the total number of classes held and the number of classes attended by the student as input.
2.Calculate the attendance percentage.
3.Determine the number of additional classes the student needed to attend to meet the minimum required attendance of 75%.
4.Display whether the student is eligible to sit for the exam based on their attendance percentage.
sample output:
Enter total class number: 40
Enter attended class: 28
Your Attendance is 70%
You are not eligible to sit for exam
You should have attended at least 2 classes more
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int totalClasses, attendedClasses;
    cout << "Enter total class number: ";
    cin >> totalClasses;
    cout << "Enter attended class: ";
    cin >> attendedClasses;

    double attendedPercentage;
    int requiredClasses;

    requiredClasses=(0.75*totalClasses-attendedClasses);
    attendedPercentage=(attendedClasses*1.0/totalClasses)*100;
    cout<<"Your Attendence is "<<attendedPercentage<<"%";

    if(attendedPercentage<75)
    {
        cout<<" You are not eligible to sit for exam"<<endl;
        cout<<"You should have attended at least "<<requiredClasses<<" classes more";
    }

    else
    {
        cout<<"You can attend in exam";
    }
    getch();
}

/* A student will not be allowed to sit for an exam if his/her attendance is less than 80%.
Take the following input from the user
a. Number of classes held.
b. Number of classes that were attended by the student.
Find out the attendance percentage for the student and show if the student will be
allowed to sit for the exam or not. (Using If-else) */

#include<iostream>
using namespace std;

int main()
{
    int totalclasses,attendedclasses;
    double attendentPercentage;

    cout<<"Total Classes: ";
    cin>>totalclasses;
    cout<<"Attended classes: ";
    cin>>attendedclasses;
    attendentPercentage=(attendedclasses*1.0/totalclasses)*100;
    cout<<"your attendence percentage is : "<<attendentPercentage<<"%"<<endl;

    if(attendentPercentage>80)
    {
        cout<<"you are allowed to sit in the exam";
    }
    else
        cout<<"you are not allowed to sit in the exam";
}