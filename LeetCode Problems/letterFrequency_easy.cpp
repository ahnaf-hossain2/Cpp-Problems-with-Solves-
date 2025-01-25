#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool equalFrequency(string word) {
        for (int i = 0; i < word.length(); i++) {
            // Try removing each character
            int freq[26] = {0};
            for (int j = 0; j < word.length(); j++) {
                if (j != i) {
                    freq[word[j] - 'a']++;
                }
            }

            // Check if all remaining frequencies are equal
            int firstFreq = 0;
            bool equal = true;
            int nonZeroFreq = 0;

            for (int k = 0; k < 26; k++) {
                if (freq[k] > 0) {
                    if (firstFreq == 0) {
                        firstFreq = freq[k];
                        nonZeroFreq++;
                    } else if (freq[k] != firstFreq) {
                        equal = false;
                        break;
                    } else {
                        nonZeroFreq++;
                    }
                }
            }

            // If frequencies are equal or only one character exists
            if (equal && nonZeroFreq > 0) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    Solution solution;

    cout << boolalpha;
    cout << "Test 1 (aabzz): " << solution.equalFrequency("aabzz") << endl;
    cout << "Test 2 (aazz): " << solution.equalFrequency("aazz") << endl;
    cout << "Test 3 (abc): " << solution.equalFrequency("abc") << endl;
    cout << "Test 4 (aabbcc): " << solution.equalFrequency("aabbcc") << endl;
    cout << "Test 5 (aaabbcc): " << solution.equalFrequency("aaabbcc") << endl;

    return 0;
}



// A little details to understand better:

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
// 	int frequency [26]= {0};
// 	// English small letters have total 26 letters. For that reason I took 26 size.
// 	// so that later on I can set characters in the sequenced index. for example h will be in 7th index, because h is the 8th character.
// 	// here the value of every index is set to {0} , because later on we will use this to count the frequency.
// 	int  in, a;
// 	string word;
// 	char character;

// 	cout << "Enter the word: ";
// 	getline(cin, word);
// 	cout << "Enter the index of the character to erase: ";
// 	cin >> in;
// 	cout << "Enter the amount of the characters to erase: ";
// 	cin >> a;
// 	word.erase(in,a);

// 	cout << word;

// 	for (int i = 0; i < word.length(); ++i) {
// 		frequency[word[i] - 'a']++; // here it maps the character to the index of [word[i] - 'a'].
// 		// for example : if the character is h then h - a is 7. So h will be mapped (or set) in index 7 of the array frequency.
// 		// here after the calculation the ++ will increase the value of that calculated index (for example index 7 which is h) by 1.
// 		// so later on when the calculation will detect the same index, the previous value oh that index was already 1 so now it will increase it to 2.
// 		// so it will keep working like that for every time the same index value comes in the calculation.
// 	}

// 	for (int i =0; i < 26; i++) {
// 		if (frequency > 0) {
// 			cout << char ('a' + i) << ": " << frequency[i] << endl;
// 		}
// 	}
// }
