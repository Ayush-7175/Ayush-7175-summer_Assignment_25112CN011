#include <iostream>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    Book library[100];
    int size = 0;
    int choice;

    while (true) {
        cout << "\n--- Mini Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (size >= 100) {
                cout << "Library storage is full!\n";
            } else {
                cout << "Enter Book ID: ";
                cin >> library[size].id;
                cin.ignore();
                cout << "Enter Book Title: ";
                getline(cin, library[size].title);
                cout << "Enter Author Name: ";
                getline(cin, library[size].author);
                size++;
                cout << "Book added successfully!\n";
            }
        } 
        else if (choice == 2) {
            if (size == 0) {
                cout << "No books available in the library.\n";
            } else {
                cout << "\n--- Book List ---\n";
                for (int i = 0; i < size; i++) {
                    cout << "ID: " << library[i].id << " | Title: " << library[i].title << " | Author: " << library[i].author << "\n";
                }
            }
        } 
        else if (choice == 3) {
            if (size == 0) {
                cout << "No books available to search.\n";
            } else {
                int searchId;
                bool found = false;
                cout << "Enter Book ID to search: ";
                cin >> searchId;
                for (int i = 0; i < size; i++) {
                    if (library[i].id == searchId) {
                        cout << "Book Found -> ID: " << library[i].id << " | Title: " << library[i].title << " | Author: " << library[i].author << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Book with ID " << searchId << " not found.\n";
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