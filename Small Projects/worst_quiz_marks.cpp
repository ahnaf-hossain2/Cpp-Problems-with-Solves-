/*
Write a program in C++ use array to take N students quiz_1[N] 
and quiz_2[N] marks as input. After that find the worst quiz marks from 
two quizzes and save results on worst_quiz[N] array and show the results.
Sample output:
Number of Students: 4
Quiz-1 Marks:
14
25.5
28
10
Quiz-2 Marks:
20
27
26
18
Worst Quizzes: 14 25.5 26 10
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    // Input the number of students
    cout << "Number of students: ";
    cin >> number;

    float quiz_1[number], quiz_2[number], worst_quiz[number];

    // Input Quiz-1 marks
    cout << "Quiz-1 marks: " << endl;
    for (int i = 0; i < number; ++i) {
        cout << "Marks of student " << i + 1 << ": ";
        cin >> quiz_1[i];
    }

    // Input Quiz-2 marks
    cout << "Quiz-2 marks: " << endl;
    for (int i = 0; i < number; ++i) {
        cout << "Marks of student " << i + 1 << ": ";
        cin >> quiz_2[i];
    }

    // Find the worst marks for each student
    for (int i = 0; i < number; ++i) {
        if (quiz_1[i] < quiz_2[i]) {
            worst_quiz[i] = quiz_1[i];
        } else {
            worst_quiz[i] = quiz_2[i];
        }
    }

    // Output the worst quiz marks
    cout << "Worst Quizzes: ";
    for (int i = 0; i < number; ++i) {
        cout << worst_quiz[i] << " ";
    }
}