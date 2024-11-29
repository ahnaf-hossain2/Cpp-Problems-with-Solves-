/*Take values of length and breadth of a rectangle from user and check if it is square
or not.*/

#include<iostream>
using namespace std;

int main()
{
    float L,B;
    cout<<"Enter length --> ";
    cin>>L;
    cout<<"Enter Breadth --> ";
    cin>>B;

    if(L==B)
    {
        cout<<"It is a square";
    }
    
    else 
    {
        cout<<"This is not a square";
        }
}