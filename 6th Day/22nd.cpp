// Write a program to Convert binary to decimal.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dec = 0;
    int i = 0;
    int dig;
    int n;
    cout << "enter number ";
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;

        if (rem != 1 && rem != 0)
        {
            cout << "Not a binary number!";
            return 0;
        }
        dec = dec + (rem * (pow(2, i)));
        n = n / 10;
        i++;
    }
    cout << "dec number is " << dec;
}