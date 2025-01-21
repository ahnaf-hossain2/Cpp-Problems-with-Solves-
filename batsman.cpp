#include <iostream>
using namespace std;

struct Batsman {
    int id;
    string name;
    int matchCount;
    int totalRun;
    void setDetails() {
        cout << "Enter the id of the batsman: ";
        cin >> id;
        cout << "Enter the name of the batsman: ";
        cin >> name;
        cout << "Enter the number of matches played by the batsman: ";
        cin >> matchCount;
        cout << "Enter the total runs scored by the batsman: ";
        cin >> totalRun;
    }
    void showDetails() {
        cout << "Batsman ID: " << id << endl;
        cout << "Batsman Name: " << name << endl;
        cout << "Matches Played: " << matchCount << endl;
        cout << "Total Runs: " << totalRun << endl;
    }
    float avarageRun() {
        return totalRun / matchCount;
    }
};

int main() {
    struct Batsman b1;
    b1.setDetails();
    b1.showDetails();
    cout << "Average Run: " << b1.avarageRun() << endl;
    if (b1.avarageRun() >= 40) {
        cout << "Applicable for Bonus." << endl;
    } else {
        cout << "Needs Improvement." << endl;
    }
}
