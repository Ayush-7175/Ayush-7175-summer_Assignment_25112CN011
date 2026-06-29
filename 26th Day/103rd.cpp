#include <iostream>

using namespace std;

int main() {
    double balance = 5000.0;
    int choice;
    double amount;

    do {
        cout << "\n=== ATM SYSTEM ===" << endl;
        cout << "1. View Balance" << endl;
        cout << "2. Deposit Funds" << endl;
        cout << "3. Withdraw Funds" << endl;
        cout << "4. Terminate Session" << endl;
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: $" << balance << endl;
                break;
                
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Transaction successful. New balance: $" << balance << endl;
                } else {
                    cout << "Error: Invalid deposit amount." << endl;
                }
                break;
                
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Transaction successful. Remaining balance: $" << balance << endl;
                } else if (amount > balance) {
                    cout << "Error: Insufficient funds available." << endl;
                } else {
                    cout << "Error: Invalid withdrawal amount." << endl;
                }
                break;
                
            case 4:
                cout << "Session terminated. Thank you." << endl;
                break;
                
            default:
                cout << "Error: Invalid option selection." << endl;
        }
    } while (choice != 4);

    return 0;
}