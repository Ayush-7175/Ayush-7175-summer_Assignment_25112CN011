#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of rows ";
    cin >> n;
    int m;
    cout << "Enter no of columns";
    cin >> m;
    int arr[n][m];

    cout << "enter the elements ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[j][i] <<" ";
        }

        cout<<endl;
    }
}
