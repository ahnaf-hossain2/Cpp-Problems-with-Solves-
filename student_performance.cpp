#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    int marks[3];
    float calculateAverage() {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks 1: " << marks[0] << endl;
        cout << "Marks 2: " << marks[1] << endl;
        cout << "Marks 3: " << marks[2] << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }
    int getPerformance() {
        float average = calculateAverage();
        if (average > 90) {
            return 1;
        } else if (average >= 70 && average <= 90) {
            return 2;
        } else if (average >= 50 && average < 70) {
            return 3;
        } else {
            return 4;
        }
    }
};

int main() {
    Student student1{"John", 101, {90, 88, 95}};
    Student student2{"Alice", 102, {75, 82, 79}};
    int performance1 = student1.getPerformance();
    int performance2 = student2.getPerformance();
    if (performance1 > performance2) {
        student1.display();
    } else if (performance1 < performance2) {
        student2.display();
    } else {
        cout << "Both students have the same performance." << endl;
    }
}
