#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    int setbit = 0;
    
   
    while (n > 0) {
        int rem = n % 2;
        if (rem == 1) {
            setbit++; 
        }
        n = n / 2;    
    }

    cout << "Number of set bits: " << setbit << endl;
    return 0;
}