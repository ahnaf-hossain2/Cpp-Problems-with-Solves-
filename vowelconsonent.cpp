/*Take any letter input through the keyboard. Write a program to find out whether it
is a vowel or a consonant.*/

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
