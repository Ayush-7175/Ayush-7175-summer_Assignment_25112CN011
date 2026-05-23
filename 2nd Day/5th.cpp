#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    // Handle negative numbers by converting to positive
    if (num < 0) 
    num = -num;

    while (num > 0) {
        digit = num % 10;   // Extract the last digit
        sum += digit;       // Add it to the total sum
        num /= 10;          // Remove the last digit
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}