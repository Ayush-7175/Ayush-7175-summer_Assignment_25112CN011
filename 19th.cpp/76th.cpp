//Write a program to Find diagonal sum. 
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

    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < m; i++)
    {
        primarySum += arr[i][i];
        secondarySum += arr[i][m - 1 - i];
    }

    cout << "Primary diagonal sum: " << primarySum << endl;
    cout << "Secondary diagonal sum: " << secondarySum << endl;
    
    return 0;
}
