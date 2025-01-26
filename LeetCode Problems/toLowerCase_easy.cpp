class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i<s.length(); ++i) {
            s[i]= tolower(s[i]);
        }
        return s;
    }
};

// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main() {
// 	string text = "Hello";
// 	for (int i=0; i<text.length(); ++i) {
// 		text[i] = tolower(text[i]); // here tolower(text[i]) converts the full text to lowercase
// 		// same way we can convert lowercase to upercase using toupper(text[i])
// 	}
// 	cout << text;
// }
