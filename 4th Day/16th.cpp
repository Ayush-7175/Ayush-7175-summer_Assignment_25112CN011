#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the starting number (m): ";
    cin >> m;
    cout << "Enter the ending number (n): ";
    cin >> n;
    
    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }
    
    cout << "\nArmstrong numbers between " << m << " and " << n << " are:\n";
    int found = 0;
    
    for (int i = m; i <= n; i++) {
        if (i <= 0) {
            continue;
        }
        
        int digitCount = 0;
        int temp = i;
        while (temp > 0) {   
            digitCount++;
            temp /= 10;
        }

        temp = i;
        int armstrongSum = 0;
        while (temp > 0) {
            int rem = temp % 10;
            
            int powerResult = 1;
            for (int p = 0; p < digitCount; p++) {
                powerResult *= rem;
            }
            
            armstrongSum += powerResult;
            temp /= 10;
        }
        
        if (armstrongSum == i) {
            cout << i << " ";
            found = 1;
        }
    }
    
    if (found == 0) {
        cout << "None found in this range.";
    }
    cout << endl;
    
    return 0;
}