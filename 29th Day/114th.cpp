#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size = 0;
    int choice;

    while (true) {
        cout << "\n--- Array Operations System ---\n";
        cout << "1. Insert Element\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (size >= 100) {
                cout << "Array is full!\n";
            } else {
                cout << "Enter element to insert: ";
                cin >> arr[size];
                size++;
                cout << "Element inserted successfully!\n";
            }
        } 
        else if (choice == 2) {
            if (size == 0) {
                cout << "Array is empty.\n";
            } else {
                cout << "Array elements: ";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
        } 
        else if (choice == 3) {
            if (size == 0) {
                cout << "Array is empty. Nothing to search.\n";
            } else {
                int target;
                bool found = false;
                cout << "Enter element to search: ";
                cin >> target;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == target) {
                        cout << "Element found at index: " << i << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Element not found in the array.\n";
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