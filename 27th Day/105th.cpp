#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[50];
    double marks[50];
    int studentCount = 0;
    int choice;

    do {
        cout << "\n=== STUDENT SYSTEM ===" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter name: ";
            cin >> names[studentCount];
            cout << "Enter marks: ";
            cin >> marks[studentCount];
            studentCount++;
            cout << "Added successfully!" << endl;
        } 
        else if (choice == 2) {
            if (studentCount == 0) {
                cout << "No records found." << endl;
            } else {
                for (int i = 0; i < studentCount; i++) {
                    cout << "Name: " << names[i] << " | Marks: " << marks[i] << endl;
                }
            }
        }
    } while (choice != 3);

    return 0;
}