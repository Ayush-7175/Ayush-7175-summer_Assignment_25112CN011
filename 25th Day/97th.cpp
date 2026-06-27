//Write a program to Check string rotation
#include <bits/stdc++.h>

using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Strings are not rotations of each other." << endl;
        return 0;
    }

    string concatenated = str1 + str1;

    if (concatenated.find(str2) != string::npos) {
        cout << "Strings are rotations of each other." << endl;
    } else {
        cout << "Strings are not rotations of each other." << endl;
    }

    return 0;
}