#include <iostream>

using namespace std;

int main() {
    int choice;
    double num1, num2;

    while (true) {
        cout << "\n--- Menu-Driven Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting system. Goodbye!\n";
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        if (choice == 1) {
            cout << "Result: " << num1 + num2 << "\n";
        } 
        else if (choice == 2) {
            cout << "Result: " << num1 - num2 << "\n";
        } 
        else if (choice == 3) {
            cout<<"Normally I can help with things like this, but I don't seem to have access to that content. You can try again or ask me for something else.";
        }
    }
}