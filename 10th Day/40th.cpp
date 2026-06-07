// Write a program to Print "A" pyramid
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows u want";
    cin >> n;
    char x='A';
    string arr[6] = { " ", "A","B","C","D","E"};
  

    for (int i = 0; i < n; i++)
    {
            
            int res=i;
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
            cout <<arr[res];
            res--;
             
        }
        cout << endl;
        x='A';
        res=i;
    }

    return 0;
}
