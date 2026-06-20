// Multiply Matrices
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of rows  in the first matrix ";
    cin >> n;
    int m;
    cout << "Enter no of columns in the first matrix ";
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
    int a;
    cout << "Enter no of rows  in the second matrix ";
    cin >> a;
    int b;
    cout << "Enter no of columns in the second matrix ";
    cin >> b;
    int arr2[a][b] ;

    cout << "enter the elements ";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr2[i][j];
        }
    }

    int arr3[n][b];
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < m; k++)
            {
                arr3[i][j] = (arr[i][k] * arr2[k][j]) + arr3[i][j];
            }
        }
    }

    cout << "product of 2 arrays are "<<endl;;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr3[i][j]<<" ";
        }

        cout << endl;
    }

}