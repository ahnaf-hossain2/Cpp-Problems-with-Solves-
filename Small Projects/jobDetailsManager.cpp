// #include <iostream>
// #include <string>
// using namespace std;

// struct CandidateData {
//      string name, age, phone, time, location, position;
//      void display() {
//           cout << " Name: " << name<<endl;
//           cout << " Age: " << age << endl;
//           cout << " Number: " << phone << endl;
//           cout << " Time: " << time << endl;
//           cout << " Location: " << location << endl;
//           cout << " Position: " << position << endl;
//         }
// };

// int main () {
//    CandidateData Person1 { "Ahnaf", "19", "01965572506", "12:51pm", "Khulna", "App developer" };
// Person1.display();
// return 0;
// }

#include <iostream>
#include <string>
using namespace std;

struct CandidateData {
    string name;
    int age;
    string phone;
    string time;
    string location;
    string position;

    // Function to set the values of the candidate
    void setValues(string n, int a, string p, string t, string l, string pos) {
        name = n;
        age = a;
        phone = p;
        time = t;
        location = l;
        position = pos;
    }

    // Function to show the values of the candidate
    void showValues() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
        cout << "Time: " << time << endl;
        cout << "Location: " << location << endl;
        cout << "Position: " << position << endl;
    }
};

int main() {
    // Create two candidates
    CandidateData candidate1, candidate2;

    // Set values for candidate 1
    candidate1.setValues("Ahnaf", 19, "01965572506", "12:51pm", "Khulna", "App developer");

    // Set values for candidate 2
    candidate2.setValues("Aisha", 22, "01712345678", "03:30pm", "Dhaka", "Software Engineer");

    // Show values for candidate 1
    cout << "Candidate 1 Information:" << endl;
    candidate1.showValues();
    cout << endl;

    // Show values for candidate 2
    cout << "Candidate 2 Information:" << endl;
    candidate2.showValues();

    return 0;
}
