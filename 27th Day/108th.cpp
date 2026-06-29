#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[50];
    double math[50];
    double science[50];
    double english[50];
    int count = 0;
    int choice;

    do {
        cout << "\n=== MARKSHEET SYSTEM ===" << endl;
        cout << "1. Add Student Marks" << endl;
        cout << "2. Generate Marksheets" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter student name: ";
            cin >> names[count];
            cout << "Enter Math marks: ";
            cin >> math[count];
            cout << "Enter Science marks: ";
            cin >> science[count];
            cout << "Enter English marks: ";
            cin >> english[count];
            count++;
            cout << "Marks added successfully!" << endl;
        } 
        else if (choice == 2) {
            if (count == 0) {
                cout << "No records found." << endl;
            } else {
                for (int i = 0; i < count; i++) {
                    double total = math[i] + science[i] + english[i];
                    double percentage = total / 3.0;
                    
                    cout << "\n-----------------------------" << endl;
                    cout << "MARKSHEET FOR: " << names[i] << endl;
                    cout << "-----------------------------" << endl;
                    cout << "Math: " << math[i] << endl;
                    cout << "Science: " << science[i] << endl;
                    cout << "English: " << english[i] << endl;
                    cout << "Total Marks: " << total << " / 300" << endl;
                    cout << "Percentage: " << percentage << "%" << endl;
                    cout << "Status: " << (percentage >= 40 ? "PASSED" : "FAILED") << endl;
                    cout << "-----------------------------" << endl;
                }
            }
        }
    } while (choice != 3);

    return 0;
}