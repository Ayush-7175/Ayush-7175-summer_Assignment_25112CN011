#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    vector<Book> library;
    int choice;

    while (true) {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Book b;
            cout << "Enter Book ID: ";
            cin >> b.id;
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, b.title);
            cout << "Enter Author Name: ";
            getline(cin, b.author);
            library.push_back(b);
            cout << "Book added successfully!\n";
        } 
        else if (choice == 2) {
            if (library.empty()) {
                cout << "No books available in the library.\n";
            } else {
                cout << "\n--- Book List ---\n";
                for (const auto& b : library) {
                    cout << "ID: " << b.id << " | Title: " << b.title << " | Author: " << b.author << "\n";
                }
            }
        } 
        else if (choice == 3) {
            int searchId;
            bool found = false;
            cout << "Enter Book ID to search: ";
            cin >> searchId;
            for (const auto& b : library) {
                if (b.id == searchId) {
                    cout << "Book Found -> ID: " << b.id << " | Title: " << b.title << " | Author: " << b.author << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Book with ID " << searchId << " not found.\n";
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