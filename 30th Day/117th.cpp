#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    string course;
};

int main() {
    Student records[100];
    int size = 0;
    int choice;

    while (true) {
        cout << "\n--- Student Record System ---\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (size >= 100) {
                cout << "Database is full!\n";
            } else {
                cout << "Enter Student ID: ";
                cin >> records[size].id;
                cin.ignore();
                cout << "Enter Student Name: ";
                getline(cin, records[size].name);
                cout << "Enter Course: ";
                getline(cin, records[size].course);
                size++;
                cout << "Student record added successfully!\n";
            }
        } 
        else if (choice == 2) {
            if (size == 0) {
                cout << "No student records found.\n";
            } else {
                cout << "\n--- Student List ---\n";
                for (int i = 0; i < size; i++) {
                    cout << "ID: " << records[i].id << " | Name: " << records[i].name << " | Course: " << records[i].course << "\n";
                }
            }
        } 
        else if (choice == 3) {
            if (size == 0) {
                cout << "No records available to search.\n";
            } else {
                int searchId;
                bool found = false;
                cout << "Enter Student ID to search: ";
                cin >> searchId;
                for (int i = 0; i < size; i++) {
                    if (records[i].id == searchId) {
                        cout << "Record Found -> ID: " << records[i].id << " | Name: " << records[i].name << " | Course: " << records[i].course << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student with ID " << searchId << " not found.\n";
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