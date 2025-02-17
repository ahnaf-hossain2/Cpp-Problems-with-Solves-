#include <iostream>
#include <algorithm>
using namespace std;

int countOccurrences(string str, char c) {
    return count(str.begin(), str.end(), c); // the begin() and end() functions return iterators to the beginning and end of the string. And c is the character to be counted.
}

int main() {
    string s;
    char c;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter the target character: ";
    cin >> c;
    int occurrences = countOccurrences(s, c);
    cout << "The character " << c << " occurred " << occurrences << " times in the string \"" << s << "\"" << endl;
}
