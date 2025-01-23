/*
Take input of age of 3 people by the user and determine oldest and youngest among
them.
Problem Analysis:
This problem requires creating a program that:

Takes ages of 3 different people as input
Compares the ages to determine:
The oldest person's age
The youngest person's age
Displays the results to the user

Key Considerations:
Input validation might be needed to ensure ages are positive and realistic
Use of comparison operators to find max and min ages
Handling potential edge cases like equal ages
Providing clear and informative output

Potential Approach Considerations:
Can use simple if-else comparisons
Alternatively, can use min() and max() functions
Might want to add error checking for invalid age inputs
*/

#include<iostream>
using namespace std;

int main()
{
    int age1,age2,age3;

    cout<<"Enter age of person 1: ";
    cin>>age1;
    cout<<"Enter age of person 2: ";
    cin>>age2;
    cout<<"Enter age of person 3: ";
    cin>>age3;


    if(age1>age2 && age1>age3 && age2>age3)
        cout<<"Person 1 is oldest and person 3 is the youngest.";

    else if(age2>age1 && age2>age3 && age1>age3)
        cout<<"Person 2 is oldest and person 3 is the youngest.";
    else if(age3>age1 && age3>age2 && age1>age2)
        cout<<"Person 3 is oldest and person 2 is the youngest.";
            else if(age3>age1 && age3>age2 && age2>age1)
        cout<<"Person 3 is oldest and person 1 is the youngest.";
        else if(age1>age3 && age3>age2 && age1>age2)
        cout<<"Person 1 is oldest and person 2 is the youngest.";
        else if(age2>age1 && age2>age3 && age3>age1)
        cout<<"Person 2 is oldest and person 1 is the youngest.";
        else cout<<"Same Age";
}

//Another way
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int age1, age2, age3;
    
    cout << "Enter age of person 1: ";
    cin >> age1;
    cout << "Enter age of person 2: ";
    cin >> age2;
    cout << "Enter age of person 3: ";
    cin >> age3;
    
    // Find the minimum and maximum ages
    int youngest = min({age1, age2, age3});
    int oldest = max({age1, age2, age3});
    
    // Determine and print the result
    if (youngest == oldest) {
        cout << "All people have the same age." << endl;
    } else {
        // Determine which person is the youngest and oldest
        if (youngest == age1) cout << "Person 1 is the youngest." << endl;
        else if (youngest == age2) cout << "Person 2 is the youngest." << endl;
        else cout << "Person 3 is the youngest." << endl;
        
        if (oldest == age1) cout << "Person 1 is the oldest." << endl;
        else if (oldest == age2) cout << "Person 2 is the oldest." << endl;
        else cout << "Person 3 is the oldest." << endl;
    }
    
    return 0;
}

/*
Key Improvements:

Uses min() and max() functions from <algorithm> for simpler comparisons
Eliminates complex nested conditions
Handles all possible scenarios more cleanly
More readable and maintainable code
Provides more informative output

Advantages of this approach:

Reduces code complexity from multiple nested conditions to simple comparisons
Uses standard library functions for min and max
More flexible and easier to understand
Less prone to logical errors
Can be easily extended to more than three people by using vectors or arrays

The code now has:

Clear logic for finding youngest and oldest
Handles same age scenario
More concise implementation
Better readability
*/