#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

int main() {
    Employee records[100];
    int size = 0;
    int choice;

    while (true) {
        cout << "\n--- Mini Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (size >= 100) {
                cout << "Database is full!\n";
            } else {
                cout << "Enter Employee ID: ";
                cin >> records[size].id;
                cin.ignore();
                cout << "Enter Employee Name: ";
                getline(cin, records[size].name);
                cout << "Enter Department: ";
                getline(cin, records[size].department);
                size++;
                cout << "Employee record added successfully!\n";
            }
        } 
        else if (choice == 2) {
            if (size == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\n--- Employee List ---\n";
                for (int i = 0; i < size; i++) {
                    cout << "ID: " << records[i].id << " | Name: " << records[i].name << " | Department: " << records[i].department << "\n";
                }
            }
        } 
        else if (choice == 3) {
            if (size == 0) {
                cout << "No records available to search.\n";
            } else {
                int searchId;
                bool found = false;
                cout << "Enter Employee ID to search: ";
                cin >> searchId;
                for (int i = 0; i < size; i++) {
                    if (records[i].id == searchId) {
                        cout << "Record Found -> ID: " << records[i].id << " | Name: " << records[i].name << " | Department: " << records[i].department << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee with ID " << searchId << " not found.\n";
                }
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