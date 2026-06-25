#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    char result = '\0';
    bool found = false;

    for (size_t i = 0; i < str.length(); i++) {
        for (size_t j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                result = str[i];
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << "First repeating character is: " << result << endl;
    } else {
        cout << "No repeating character found." << endl;
    }

    return 0;
}