#include <iostream>

using namespace std;

int main() {
    int age;
    
    cout << "Please enter your age: ";
    cin >> age;
    
    if (age < 0) {
        cout << "Invalid age detected." << endl;
        return 1;
    }
    
    cout << (age >= 18 ? "Status: Eligible to vote." : "Status: Not eligible to vote.") << endl;
    
    return 0;
}