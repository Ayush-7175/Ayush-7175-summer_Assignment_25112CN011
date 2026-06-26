#include <iostream>
#include <string>

using namespace std;

void findLongestWord(string str) {
    int n = str.length();
    int maxLen = 0, currentLen = 0;
    int maxStart = 0, currentStart = 0;

    for (int i = 0; i <= n; i++) {
        if (i == n || str[i] == ' ') {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = currentStart;
            }
            currentLen = 0;
            currentStart = i + 1;
        } else {
            currentLen++;
        }
    }

    if (maxLen > 0) {
        cout << "Longest word: " << str.substr(maxStart, maxLen) << endl;
        cout << "Length: " << maxLen << endl;
    } else {
        cout << "No words found." << endl;
    }
}

int main() {
    string text = "Write a program to Find longest word";
    
    cout << "Input string: \"" << text << "\"" << endl;
    findLongestWord(text);
    
    return 0;
}