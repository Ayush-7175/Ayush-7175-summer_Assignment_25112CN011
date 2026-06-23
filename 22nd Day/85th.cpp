//Write a program to Check palindrome string
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    
    string temp = str;

   
    int start = 0;
    int end = str.length() - 1;
     
    while (start < end) {
        char ch = str[start];
        str[start] = str[end];
        str[end] = ch;
        
        start++; 
        end--;   
    }

    
    if (str == temp) {
        cout << "Yes, it is a palindrome." << endl;
    } else {
        cout << "No, it is not a palindrome." << endl;
    }

    return 0;
}