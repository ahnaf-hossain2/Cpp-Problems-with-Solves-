#include <iostream>
using namespace std;

struct Student{
    int rollNumber;
    string name;
    double marks1, marks2, marks3;

    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
        cout << "Total Marks: " << marks1 + marks2 + marks3 << endl;
    }
};

int main() {
    int numberOfStudents;
    cout << "Enter number of students: ";
    cin >> numberOfStudents;
    for (int i = 0; i < numberOfStudents; ++i) {
        Student student;
        cout << "Enter details of student " << i + 1 << ":" << endl;
        cout << "Enter roll number: ";
        cin >> student.rollNumber;
        cout << "Enter name: ";
        cin >> student.name;
        cout << "Enter marks 1: ";
        cin >> student.marks1;
        cout << "Enter marks 2: ";
        cin >> student.marks2;
        cout << "Enter marks 3: ";
        cin >> student.marks3;
        student.display();
    }
}
