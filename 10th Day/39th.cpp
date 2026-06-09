// Write a program to Print number pyramid.// Write a program to Print star pyramid.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows u want";
    cin >> n;
    int x=1;
    

    for (int i = 0; i < n; i++)
    {
            int y=i;
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << x;
            x++;
        }

        for (int m = 0; m < i; m++)
        {   
            cout <<y;
            y--;
        }
        cout << endl;
        x=1;
        y=i;
    }

    return 0;
}
