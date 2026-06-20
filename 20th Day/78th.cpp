// Write a program to Check symmetric matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter size of square matrix (M): ";
    cin >> m;

    int arr[m][m];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arr1[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr1[i][j]=arr[j][i];
        }
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i][j] == arr[i][j])
            {
               count++;
            }
        }
    }
    if (count == (m*m))
    {
        cout << "yes sysmmetric matrix";
    }
}