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