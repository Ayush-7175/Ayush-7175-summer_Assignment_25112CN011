// Write a program to Print star pyramid.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows u want";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = n; k >= i; k--)
        {
            cout << "*";
        }

        for (int m = n; m > i; m--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
