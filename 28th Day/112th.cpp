#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Contact {
    int id;
    string name;
    string phoneNumber;
};

int main() {
    vector<Contact> directory;
    int choice;

    while (true) {
        cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Contact c;
            cout << "Enter Contact ID: ";
            cin >> c.id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, c.name);
            cout << "Enter Phone Number: ";
            getline(cin, c.phoneNumber);
            directory.push_back(c);
            cout << "Contact added successfully!\n";
        } 
        else if (choice == 2) {
            if (directory.empty()) {
                cout << "No contacts found in the directory.\n";
            } else {
                cout << "\n--- Contact List ---\n";
                for (const auto& c : directory) {
                    cout << "ID: " << c.id << " | Name: " << c.name << " | Phone: " << c.phoneNumber << "\n";
                }
            }
        } 
        else if (choice == 3) {
            int searchId;
            bool found = false;
            cout << "Enter Contact ID to search: ";
            cin >> searchId;
            for (const auto& c : directory) {
                if (c.id == searchId) {
                    cout << "Contact Found -> ID: " << c.id << " | Name: " << c.name << " | Phone: " << c.phoneNumber << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Contact with ID " << searchId << " not found.\n";
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