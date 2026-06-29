#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[50];
    double baseSalaries[50];
    double bonuses[50];
    int count = 0;
    int choice;

    do {
        cout << "\n=== SALARY SYSTEM ===" << endl;
        cout << "1. Add Salary Record" << endl;
        cout << "2. Display Salary Slips" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter employee name: ";
            cin >> names[count];
            cout << "Enter base salary: ";
            cin >> baseSalaries[count];
            cout << "Enter bonus: ";
            cin >> bonuses[count];
            count++;
            cout << "Salary record added successfully!" << endl;
        } 
        else if (choice == 2) {
            if (count == 0) {
                cout << "No records found." << endl;
            } else {
                for (int i = 0; i < count; i++) {
                    double netSalary = baseSalaries[i] + bonuses[i];
                    cout << "Name: " << names[i] 
                         << " | Base: $" << baseSalaries[i] 
                         << " | Bonus: $" << bonuses[i] 
                         << " | Net Salary: $" << netSalary << endl;
                }
            }
        }
    } while (choice != 3);

    return 0;
}