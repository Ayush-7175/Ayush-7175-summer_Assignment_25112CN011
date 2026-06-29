#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[50];
    double salaries[50];
    int employeeCount = 0;
    int choice;

    do {
        cout << "\n=== EMPLOYEE SYSTEM ===" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter name: ";
            cin >> names[employeeCount];
            cout << "Enter salary: ";
            cin >> salaries[employeeCount];
            employeeCount++;
            cout << "Employee added successfully!" << endl;
        } 
        else if (choice == 2) {
            if (employeeCount == 0) {
                cout << "No records found." << endl;
            } else {
                for (int i = 0; i < employeeCount; i++) {
                    cout << "Name: " << names[i] << " | Salary: $" << salaries[i] << endl;
                }
            }
        }
    } while (choice != 3);

    return 0;
}