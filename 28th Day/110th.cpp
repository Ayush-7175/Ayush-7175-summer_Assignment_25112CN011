#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Account {
    int accountNumber;
    string holderName;
    double balance;
};

int main() {
    vector<Account> bank;
    int choice;

    while (true) {
        cout << "\n--- Bank Account System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search Account by Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Account acc;
            cout << "Enter Account Number: ";
            cin >> acc.accountNumber;
            cin.ignore();
            cout << "Enter Account Holder Name: ";
            getline(cin, acc.holderName);
            cout << "Enter Initial Balance: ";
            cin >> acc.balance;
            bank.push_back(acc);
            cout << "Account created successfully!\n";
        } 
        else if (choice == 2) {
            if (bank.empty()) {
                cout << "No accounts found in the system.\n";
            } else {
                cout << "\n--- Account List ---\n";
                for (const auto& acc : bank) {
                    cout << "Acc No: " << acc.accountNumber << " | Holder: " << acc.holderName << " | Balance: $" << acc.balance << "\n";
                }
            }
        } 
        else if (choice == 3) {
            int searchId;
            bool found = false;
            cout << "Enter Account Number to search: ";
            cin >> searchId;
            for (const auto& acc : bank) {
                if (acc.accountNumber == searchId) {
                    cout << "Account Found -> Acc No: " << acc.accountNumber << " | Holder: " << acc.holderName << " | Balance: $" << acc.balance << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Account with number " << searchId << " not found.\n";
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