#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 2) {
        return 0;
    }
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    if (second_largest == INT_MIN) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << second_largest << endl;
    }
    
    return 0;
}