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
