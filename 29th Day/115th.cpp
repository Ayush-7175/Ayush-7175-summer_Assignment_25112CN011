#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "";
    int choice;

    while (true) {
        cout << "\n--- String Operations System ---\n";
        cout << "1. Input String\n";
        cout << "2. Display String\n";
        cout << "3. Reverse String\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter a string: ";
            cin.ignore();
            getline(cin, str);
            cout << "String updated successfully!\n";
        } 
        else if (choice == 2) {
            if (str.empty()) {
                cout << "String is empty.\n";
            } else {
                cout << "Current String: " << str << "\n";
            }
        } 
        else if (choice == 3) {
            if (str.empty()) {
                cout << "String is empty. Nothing to reverse.\n";
            } else {
                reverse(str.begin(), str.end());
                cout << "Reversed String: " << str << "\n";
            }
        } 
        else if (choice == 4) {
            cout << "Exiting system. Goodbye!\n";
            break;
        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}