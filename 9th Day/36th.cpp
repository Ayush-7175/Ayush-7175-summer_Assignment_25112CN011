#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 1;
    int n;
    cout << "enter number of rows u want";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
                
            }
           
            else if (j == 0 || j == (n - 1))
            {
                cout << "*";
            }

            else{
                cout<<" ";
            }
        }

        cout << endl;
    }
    return 0;
}