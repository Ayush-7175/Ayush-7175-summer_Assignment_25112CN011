//Write a program to Reverse a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "GuguGaga";
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++; 
        end--;   
    }
        cout << "Reversed string: " << str << endl;
}